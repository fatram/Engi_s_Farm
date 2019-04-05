#include "Game.hpp"	
#include <iostream>
#include <cstdlib>

using namespace std;

Game::Game(){
	this->width = 11;
	this->height = 10;
	P.setPosX(6);
	P.setPosY(10);
	tick = 0;
	board = new Cell**[this->height];
	for (int i=0;i<this->height;i++){
		board[i] = new Cell*[this->width ];
	}
	for (int i=0;i<this->height;i++){
		for (int j=0; j<this->width;j++){
			if (i>=0 && i<=2 && j>=0 && j<=2){
                //Inisialisasi coop
                board[i][j] = new Coop();
            }
            else if (i>=0 && i<=5 && j>=4&& j<=7){
                //inisialisasi Barn
                board[i][j] = new Barn();
            }
			else if (i == 0 && j == 10){
                //inisialisasi Truck
                board[i][j] = new Truck();
            }
            else if (i == 1 && j == 10){
                //inisialisasiMixer
                board[i][j] = new Mixer();
            }
            else if (i == 3 && j == 10){
                //inisialisasi well
                board[i][j] = new Well();
            }
			else {
				board[i][j] = new Grassland();
			}
			
		}
	}
	//hardcode rumput
	board[1][1]->setHasGrass(true);
	board[1][3]->setHasGrass(true);
	board[2][1]->setHasGrass(true);
	board[2][6]->setHasGrass(true);
	board[2][7]->setHasGrass(true);
	board[3][7]->setHasGrass(true);
	board[7][2]->setHasGrass(true);
	board[8][2]->setHasGrass(true);
	board[8][3]->setHasGrass(true);
	board[9][3]->setHasGrass(true);
	board[9][4]->setHasGrass(true);
}
	
Game::Game(int width, int height,int pX, int pY){
	this->width = width;
	this->height = height;
	tick = 0;
	P.setPosX(pX);
	P.setPosY(pY);
	board = new Cell**[this->height];
	for (int i=0;i<this->height;i++){
		board[i] = new Cell*[this->width ];
	}	
}

Game::~Game(){
	for(int i =  0; i <this->height;i++){
		delete [] board[i];
	}
		//delete [] board[i];
	//}
	delete [] board;
}
		

int Game::getWidth(){
	return this->width;
}

void Game::setWidth(int w){
	this->width = w;
}

int Game::getHeight(){
	return this->height;
}
 
void Game::setHeight(int h){
	this->height = h;
}

void Game::setBoard(int x, int y, Cell* C){
	//cout<<C->render()<<endl;
	board[x][y] = C;
}

Cell* Game::getBoard(int x, int y){
	return board[x][y];
}

void Game::readCommand(string c){
	if (c.compare("w") == 0){
		if (P.getPosX()-1 >=0 && !board[P.getPosX()-1][P.getPosY()]->getHasFacility())
		{
			P.setPosX(P.getPosX()-1);
			updateTick();		
			//update cdtruck
			board[0][10]->setCoolDownTruck(board[0][10]->getCoolDownTruck()+1);
			system("clear");
			MoveAnimal();
			updateAnimal();
			printBoard();
		}
	}
	else
	if (c.compare("a") == 0) {
		if (P.getPosY()-1 >=0 && !board[P.getPosX()][P.getPosY()-1]->getHasFacility())
		{
			P.setPosY(P.getPosY()-1);
			updateTick();
			//update cdtruck
			board[0][10]->setCoolDownTruck(board[0][10]->getCoolDownTruck()+1);
			system("clear");
			MoveAnimal();
			updateAnimal();
			printBoard();
		}		
	}
	else
	if (c.compare("s") == 0){
		if (P.getPosX()+1<height && !board[P.getPosX()+1][P.getPosY()]->getHasFacility())
		{
			P.setPosX(P.getPosX()+1);
			updateTick();
			//update cdtruck
			board[0][10]->setCoolDownTruck(board[0][10]->getCoolDownTruck()+1);
			system("clear");
			MoveAnimal();
			updateAnimal();
			printBoard();
		}
	}
	else
	if (c.compare("d") ==0){
		if (P.getPosY()+1<width && !board[P.getPosX()][P.getPosY()+1]->getHasFacility())
		{
			P.setPosY(P.getPosY()+1);
			updateTick();
			//update cdtruck
			board[0][10]->setCoolDownTruck(board[0][10]->getCoolDownTruck()+1);
			system("clear");
			MoveAnimal();
			updateAnimal();
			printBoard();
		}
	}
	else
	if (c.compare("kill") == 0){
		int i;
		int posX,posY;
		bool found = false;
		int move[4] = {-1,0,1,0}; //pengecekan searah jarum jam
		posX = 0;
		posY = 3;
		while (!found && posX<4)  {
			i = searchAnimal(P.getPosX()+move[posX],P.getPosY()+move[posY]);
			if (i != -999) {
				if (animal.get(i)->getMeatProducing()) {
					FarmAnimal *a = animal.get(i);
					P.addBag(a->interact()); //menambahkan ke bag player
					animal.remove(a);
					found = true;
					updateTick();
					//update cdtruck
					board[0][10]->setCoolDownTruck(board[0][10]->getCoolDownTruck()+1);
				}
			}
			if (!found) {
				posX++;
				posY--;
			} 
		}
		system("clear");
		printBoard();
	}
	else
	if (c.compare("interact") == 0){
		//Interact bisa dengan hewan milkproducing&eggproducing/facility
		int i;
		int posX,posY;
		bool found = false;
		int move[4] = {-1,0,1,0}; //pengecekan searah jarum jam
		posX = 0;
		posY = 3;
		while (!found && posX<4)  {
			//cariHewan
			i = searchAnimal(P.getPosX()+move[posX],P.getPosY()+move[posY]);
			if (i != -999) {
				if (animal.get(i)->getMilkProducing() || animal.get(i)->getEggProducing()) {
					FarmAnimal *a = animal.get(i);
					P.addBag(a->interact()); //menambahkan ke bag player
					found = true;
					updateTick();
					//update cdtruck
					board[0][10]->setCoolDownTruck(board[0][10]->getCoolDownTruck()+1);
				}
			}
			if (!found) {
				//Cari facility
				if (P.getPosX()+move[posX]>=0 && P.getPosX()+move[posX]<height && P.getPosY()+move[posY]>=0 && P.getPosY()+move[posY]<width)
					found = board[P.getPosX()+move[posX]][P.getPosY()+move[posY]]->getHasFacility();
				if (found){
					board[P.getPosX()+move[posX]][P.getPosY()+move[posY]]->interact(P);
					updateTick();
					//update cdtruck
					board[0][10]->setCoolDownTruck(board[0][10]->getCoolDownTruck()+1);
				}
				else {
					posX++;
					posY--;
				}
			} 
		}
		system("clear");
		printBoard();
	}
	else
	if (c.compare("grow") == 0){
		board[P.getPosX()][P.getPosY()]->setHasGrass(true);
		updateTick();
		printBoard();
		//update cdtruck
		board[0][10]->setCoolDownTruck(board[0][10]->getCoolDownTruck()+1);
		system("clear");
		printBoard();
	}
	else
	if (c.compare("talk") == 0){
		int i;
		int posX,posY;
		bool found = false;
		int move[4] = {-1,0,1,0}; //pengecekan searah jarum jam
		posX = 0;
		posY = 3;
		while (!found && posX<4)  {
			i = searchAnimal(P.getPosX()+move[posX],P.getPosY()+move[posY]);
			if (i != -999) {
				animal.get(i)->Bersuara();
				found = true;
				updateTick();
				//update cdtruck
				board[0][10]->setCoolDownTruck(board[0][10]->getCoolDownTruck()+1);
			}
			else {
				posX++;
				posY--;
			} 
		}
	}
	else {
		cout<<"Command tidak ditemukan"<<endl;
	}
	
	
} 
void Game::addAnimal(FarmAnimal* a){
	animal.add(a);

}
FarmAnimal* Game::getAnimal(int i){
	return animal.get(i);
}
int Game::GetAnimalSize(){
	return animal.size();
}
void Game::delAnimal(FarmAnimal* a){
	animal.remove(a);
}

int Game::getTick() { return tick;}

void Game::updateTick() {tick++;}

//Mengembalikan indeks animal dengan posisi (i,j), mengembalikan -999 jika not found
int Game::searchAnimal(int x, int y){
	bool found = false;
	int i;
	for (i=0; i<animal.size() && !found; i++){
		if (animal.get(i)->getPosX() == x && animal.get(i)->getPosY()==y) found = true;
	}
	if (found) return i-1;
	else return -999;
}

void Game::printBoard(){
	cout<<"Tick : "<<tick<<'\t'<<"Water: "<<P.getWater()<<'\t'<<"Money : "<<P.getMoney()<<endl;
	for (int i = 0; i<height;i++){
		for (int j =0; j<width; j++){
			if (searchAnimal(i,j) != -999) {
				cout<<" | "<<animal.get(searchAnimal(i,j))->render();
			}
			else
			if (P.getPosX() == i && P.getPosY() == j){
				cout<<" | P";
			}
			else {
				cout<<" | "<<board[i][j]->render();
			}
		}
		cout<<" |"<<endl;
	}
	//Print daftar bag
	cout << "Item di dalam bag : " << endl;
	if(P.getBagSize() > 0){		
		for(int i = 0; i < P.getBagSize(); i++){
			cout << (i+1) << ". " << P.getProduct(i)->toString() << endl;
		}
	}
	else cout<<"-"<<endl;
}

bool Game::isPosExist(int x, int y){
	for (int i=0; i<animal.size();i++){
		if (x == animal.get(i)->getPosX() && y == animal.get(i)->getPosY()) {
			return true;
		}
	}
	return false;
}

void Game::MoveAnimal(){
	bool valid;
	int pilihan, xtemp, ytemp;
	const int maxrand = 100;
	int j;
	
	srand(time(nullptr));
	if(animal.size()>0){
		for(int i=0;i<animal.size();i++){
			valid =false;
			j = 0;
			while(!valid){
				if (j>maxrand) {
					break;
				}				
				pilihan = 1 + rand()/((RAND_MAX + 1u)/4);//rand() % 4;
				if(pilihan == 1){
					xtemp = animal.get(i)->getPosX();
					ytemp = animal.get(i)->getPosY()+1;
				} else if (pilihan ==2){
					ytemp = animal.get(i)->getPosY();
					xtemp = animal.get(i)->getPosX() -1;
				} else if (pilihan ==3){
					xtemp = animal.get(i)->getPosX();
					ytemp = animal.get(i)->getPosY() -1;
				} else if (pilihan ==4){
					ytemp = animal.get(i)->getPosY();
					xtemp = animal.get(i)->getPosY()+1;
				}                                   
				if(xtemp<this->height && xtemp>=0 && ytemp <this->width && ytemp>=0 && 
				   (board[animal.get(i)->getPosX()][animal.get(i)->getPosY()]->render() == board[xtemp][ytemp]->render() || board[animal.get(i)->getPosX()][animal.get(i)->getPosY()]->getGrassChar() == board[xtemp][ytemp]->render() )&&
				   !isPosExist(xtemp,ytemp) && (xtemp!=P.getPosX() || ytemp!=P.getPosY()))
				{
					
					valid =true;        
					animal.get(i)->setPosY(ytemp);
					animal.get(i)->setPosX(xtemp);				
				}	
				j++;
			}
		}
	}
}

void Game::updateAnimal(){char getGrassChar();
	for (int i=0; i<animal.size();i++){
		animal.get(i)->updateHungry();
		if (animal.get(i)->isHungry()){
			//Kasus pertama, menginjak grass maka dimakan
			if (board[animal.get(i)->getPosX()][animal.get(i)->getPosY()]->getHasGrass() &&
			  animal.get(i)->isHungry()){
				board[animal.get(i)->getPosX()][animal.get(i)->getPosY()]->setHasGrass(false);
				animal.get(i)->makan();
			}
			//Kasus kedua, hungry<5 maka mati
			else
			if (animal.get(i)->getHungry()<= -5)
			{
				animal.remove(animal.get(i));
			}
		}
	}
}


