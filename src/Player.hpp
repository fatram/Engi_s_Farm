#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "Product.hpp"

// kelas Player, representasi pemain dalam permainan
class Player {
	private:
		int water;			// banyak air yang saat ini dimiliki pemain
		Product* bag;		// tas yang menyimpan Product
		const int maxWater;	// maksimum air yang dapat dimiliki
		const int maxBag;	// kapasitas maksimum tas
		
	public:
		// default ctor, water = 0, maxWater = 10, maxBag = 10, bag dialokasi sebanyak maxBag
		Player();
		
		// user defined ctor, this->water = water, this->maxWater = maxWater, this->maxBag = maxBag, bag dialokasi sebanyak maxBag
		Player(int water, int maxWater, int maxBag);
		
		~Player();
		
		// setter
		// meng-set water sesuai input
		void setWater(int);
		
		// getter
		// mengembalikan water
		int getWater() const;
		
		// mengembalikan Product pada index i di dalam bag
		Product getProduct(int i) const;
		
		// mengembalikan maxWater
		int getMaxWater() const;
		
		// mengembalikan maxBag
		int getMaxBag() const;
		
};

#endif