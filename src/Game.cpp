#include "Game.hpp"	
#include <iostream>

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
			else if (i == 1 && j == 10){
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
		P.setPosX(P.getPosX()-1);
		updateTick();
		printBoard();
	}
	else
	if (c.compare("a") == 0) {
		P.setPosY(P.getPosY()-1);
		updateTick();
		printBoard();
	}
	else
	if (c.compare("s") == 0){
		P.setPosX(P.getPosX()+1);
		updateTick();
		printBoard();
	}
	else
	if (c.compare("d") ==0){
		P.setPosY(P.getPosY()+1);
		updateTick();
		printBoard();
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
				}
			}
			if (!found) {
				posX++;
				posY--;
			} 
		}
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
				}
			}
			if (!found) {
				//Cari facility
				found = board[P.getPosX()+move[posX]][P.getPosY()+move[posY]]->getHasFacility();
				if (found){
					board[P.getPosX()+move[posX]][P.getPosY()+move[posY]]->interact(P);
					updateTick();
				}
				else {
					posX++;
					posY--;
				}
			} 
		}
	}
	else
	if (c.compare("grow") == 0){
		board[P.getPosX()][P.getPosY()]->setHasGrass(true);
		updateTick();
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
	if (found) return i;
	else return -999;
}

void Game::printBoard(){
	cout<<"Tick :"<<tick<<endl;
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
}