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
#include "FarmAnimal.hpp"
using namespace std;

//kelas Game menyediakan informasi board permainan, posisi pemein, dan mekanisme umum game
class Game {
	private:
		char** board; // lapangan permainan, terdiri dari karakter-karakter representasi objek yang ada
		LinkedList<FarmAnimal> animal;
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
		int getWidth();
		int getHeight();
		void setWidth(int);
		void setHeight(int);

		void setBoard(Cell c); // set item di koordinat x, y
	
		// playing
		void readCommand(); // Membaca perintah dari user dan melaksanakan eksekusi tertentu sesuai perintah tersebut

		


};

#endif
