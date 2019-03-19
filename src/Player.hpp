#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "Product.hpp"

// kelas Player, representasi pemain dalam permainan
class Player {
	private:
		int water;			// banyak air yang saat ini dimiliki pemain
		LinkedList<Product*> bag;		// tas yang menyimpan Product
		int posX; //posisi player (kolom)
		int posY; //posisi player (baris)
		const int maxWater;	// maksimum air yang dapat dimiliki
		const int maxBag;	// kapasitas maksimum tas
		int money; // Uang yang dimiliki player
		
	public:
		// default ctor, water = 0, maxWater = 10, maxBag = 10, bag dialokasi sebanyak maxBag
		Player();
		
		// user defined ctor, this->water = water, this->maxWater = maxWater, this->maxBag = maxBag, bag dialokasi sebanyak maxBag
		Player(int posX, int posY, int water, int maxWater, int maxBag);
		
		~Player();
		
		// setter
		// meng-set water sesuai input
		void setWater(int);
		
		// getter
		// mengembalikan water
		int getWater() const;
		
		// mengembalikan Product pada index i di dalam bag
		Product* getProduct(int i) const;
		
		// mengembalikan maxWater
		int getMaxWater() const;
		
		// mengembalikan maxBag
		int getMaxBag() const;

		int getPosX(); // mengembalikan posisi X pemain
		int getPosY(); // mengembalikan posisi Y pemain
		void setPosX(int x); // set posisi pemain dengan X
		void setPosY(int y); // set posisi pemain dengan Y
		int getMoney() const; // mengembalikan money
		void setMoney(int); // set money sesuai input
		LinkedList<Product*> getBag(); //mengembalikan list dari product

		void addMoney(int); // tambahkan input ke money saat ini

		void addBag(Product* p); //menambahkan Product p ke dalam bag
		void delBag(Product* p); //menghapus Product p dari bag 
		
};

#endif
