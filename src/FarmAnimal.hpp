#ifndef FARMANIMAL_HPP
#define FARMANIMAL_HPP

#include "FarmProduct.hpp"

// kelas abstrak FarmAnimal
class FarmAnimal {
	private:
		bool meatProducing; // indikator penghasil daging
		bool eggProducing; // indikator penghasil telur
		bool milkProducing; // indikator penghasil susu
		const int lifeSpan; // masa hidup hewan
		int hungry; // akan menyebebkan animal hungry jika nilainya negatif
		int posX; // posisi X pada papan permainan
		int posY; // posisi Y pada papan permainan
		
	public:
		 // user-defined ctor meatProducing = meat, eggProducing = egg, milkProducing = milk, lifeSpan = life, hungry = life, posX = x, posY = y 
		FarmProduct(bool meat, bool egg, bool milk, int life, int x, int y);
		virtual void talk() = 0; // mengeluarkan suara tergantung jenis hewan
		virtual FarmProduct kill() = 0; // mengembalikan FarmProduct tergantung jenis hewan yang di-kill
		virtual void eat() = 0; // makan dan mengembalikan FarmProduct tergantung jenis hewan
		// getter setter
		void setMeatProducing(bool); // set indikator meatProducing dengan input
		void setEggProducing(bool); // set indikator eggProducing dengan input
		void setMilkProducing(bool); // set indikator milkProducing dengan input
		bool getMeatProducing(); // mengembalikan meatProducing
		bool getEggProducing(); // mengembalikan eggProducing
		bool getMilkProducing(); // mengembalikan milkProducing
		int getLifeSpan(); // mengembalikan lifeSpan
		int getPosX() const; // Mengembalikan posX
		int getPosY() const; // Mengembalikan posY
		void setPosX(int); // set posX baru sesuai input
		void setPosY(int); // set posY baru sesuai input
		
		// cek kategori FarmAnimal
		bool isMeatProducing(); // true jika meatProducing bernilai true
		bool isEggProducing(); // true jika eggProducing bernilai true
		bool isMilkProducing(); // true jika milkProducing bernilai true
		
		//Berkaitan dengan aksi yg dilakukan animal
		virtual void Bersuara() = 0; //Suara animal
		void makan(); //procedure animal memakan grass
		bool isHungry(); //Mengecek apakah animal dalam keadaan hungry atau tidak
		void updateHungry(); //mengupdate hungry tiap tick
};

#endif
