#include "Game.hpp"	

Game::Game(){
	this->width = 10;
	this->height = 10;
	tick = 0;
	board = new Cell**[this->height];
	for (int i=0;i<this->height;i++){
		board[i] = new Cell*[this->width ];
	}
	for (int i=0;i<this->height;i++){
		for(int j=0;i<this->width ;j++){
			board[i][j]= new Grassland(false,true);
		}
	}
}
	
Game::Game(int width, int height){
	this->width = width;
	this->height = height;
	tick = 0;
	board = new Cell**[this->height];
	for (int i=0;i<this->height;i++){
		board[i] = new Cell*[this->width ];
	}
	for (int i=0;i<this->height;i++){
		for(int j=0;i<this->width ;j++){
			board[i][j]= new Grassland(false,true);
		}
	}
}

Game::~Game(){
	for(int i =  0; i <this->height;i++){
		for(int j =0; j<this->width;j++){
			delete [] board[i][j];
		}
		delete [] board[i];
	}
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

LinkedList<FarmAnimal*> Game::getAnimal(){
	return animal;
}

void Game::setBoard(int x, int y, Cell* C){
	board[x][y] = C;
}

void Game::readCommand(string c){
	this->command = c;
	
} 
void Game::addAnimal(FarmAnimal* a){
	animal.add(a);

}

void Game::delAnimal(FarmAnimal* a){
	animal.remove(a);
}
