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
using namespace std;

//kelas Game menyediakan informasi board permainan, posisi pemein, dan mekanisme umum game
class Game {
	private:
		Cell*** board; // lapangan permainan, terdiri dari karakter-karakter representasi objek yang ada
		LinkedList<FarmAnimal*> animal; //Daftar animal yg ada di cell direpresentasikan melalui linkedlist
		const int width; // lebar lapangan
		const int height; // tinggi lapangan
		
	public:
		// default constructor, ukuran lapangan di set 10*10, posisi awal pemain di 5,5
		Game();
		// user defined ctor, ukuran lapangan di set width*height, posisi awal pemain di posX,posY
		Game(int width, int height);

		//dtor
		~Game();
		
		//setter & getter
		int getWidth(); //mengembalikan width
		void setWidth(int); //set value width
		int getHeight(); //mengembalikan height
		void setHeight(int); //set value height
		LinkedList<FarmAnimal*> getAnimal(); //mengembalikan list dari animal
		void setBoard(int x, int y); // set board di koordinat x, y
	
		// playing
		// Membaca perintah dari user dan melaksanakan eksekusi tertentu sesuai perintah tersebut
		// Memeriksa apakah di sekeliling player terdapat FarmAnimal atau Facility lalu berinteraksi sesuai command
		void readCommand(); 
		void addAnimal(FarmAnimal* a); //menambah animal a ke list
		void addAnimal(FarmAnimal* a, int i); //menambah animal a ke list pada indeks i
		void delAnimal(FarmAnimal* a);  //menghapus animal a dari list
		


};

#endif
