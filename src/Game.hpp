#ifndef GAME_HPP
#define GAME_HPP

#include <iostream>
#include <string>
#include "Player.hpp"
#include "Mixer.hpp"
#include "LinkedList.hpp"
#include "Truck.hpp"
#include "Well.hpp"
#include "Grassland.hpp"
#include "Barn.hpp"
#include "Coop.hpp"
#include "FarmProduct.hpp"
#include "SideProduct.hpp"
#include "Camel.hpp"
#include "Chicken.hpp"
#include "Cow.hpp"
#include "Duck.hpp"
#include "Goat.hpp"
#include "Horse.hpp"
#include "CamelMilk.hpp"
#include "ChickenEgg.hpp"
#include "CowMilk.hpp"
#include "DuckEgg.hpp"
#include "GoatMeat.hpp"
#include "HorseMeat.hpp"
#include "Pancake.hpp"
#include "Sausage.hpp"
#include "Omelette.hpp"

using namespace std;

//kelas Game menyediakan informasi board permainan, posisi pemein, dan mekanisme umum game
class Game {
	private:
		Cell*** board; // lapangan permainan, terdiri dari karakter-karakter representasi objek yang ada
		LinkedList<FarmAnimal*> animal; //Daftar animal yg ada di cell direpresentasikan melalui linkedlist
		int width; // lebar lapangan
		int height; // tinggi lapangan
		int tick;
		//string command;
		//New
		Player P;
		
	public:
		// default constructor, ukuran lapangan di set 10*10, posisi awal pemain di 5,5
		Game();
		// user defined ctor, ukuran lapangan di set width*height, posisi awal pemain di posX,posY
		Game(int width, int height, int pX, int pY);

		//dtor
		~Game();
		
		//setter & getter
		int getWidth(); //mengembalikan width
		void setWidth(int); //set value width
		int getHeight(); //mengembalikan height
		void setHeight(int); //set value height
		FarmAnimal* getAnimal(int ); //mengembalikan list dari animal
		int GetAnimalSize();
		void setBoard(int x, int y, Cell* C); // set board di koordinat x, y
		Cell* getBoard(int x,int y);
		int getTick();
		int searchAnimal(int,int);
	
		// playing
		// Membaca perintah dari user dan melaksanakan eksekusi tertentu sesuai perintah tersebut
		// Memeriksa apakah di sekeliling player terdapat FarmAnimal atau Facility lalu berinteraksi sesuai command
		void readCommand(string); 
		void addAnimal(FarmAnimal* a); //menambah animal a ke list
		void delAnimal(FarmAnimal* a);  //menghapus animal a dari list


		//New
		void updateTick();
		void printBoard();		
		void MoveAnimal();
		bool isPosExist(int x, int y);
		void updateAnimal();

};

#endif
