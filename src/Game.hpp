#ifndef GAME_HPP
#define GAME_HPP

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

//kelas Game menyediakan informasi board permainan, posisi pemein, dan mekanisme umum game
class Game {
	private:
		Cell** board; // lapangan permainan
		const int width; // lebar lapangan
		const int height; // tinggi lapangan
		int posX; // posisi koordinat X pemain
		int posY; // posisi koordinat Y pemain
		
	public:
		// default constructor, ukuran lapangan di set 10*10, posisi awal pemain di 5,5
		Game();
		// user defined ctor, ukuran lapangan di set width*height, posisi awal pemain di posX,posY
		Game(int width, int height, int posX, int posY);

		//dtor
		~Game();
		
		//setter & getter
		int getPosX(); // mengembalikan posisi X pemain
		int getPosY(); // mengembalikan posisi Y pemain
		void setPosX(int x); // set posisi pemain dengan X
		void setPosY(int y); // set posisi pemain dengan Y
		void setBoard(int x, int y, Cell& c); // set item di koordinat x, y

		


};

#endif