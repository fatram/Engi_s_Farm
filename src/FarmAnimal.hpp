#ifndef FARMANIMAL_HPP
#define FARMANIMAL_HPP

// kelas abstrak FarmAnimal
class FarmAnimal {
	private:
		bool meatProducing; // indikator penghasil daging
		bool eggProducing; // indikator penghasil telur
		bool milkProducing; // indikator penghasil susu
		const int lifeSpan; // masa hidup hewan
		
	public:
		virtual void talk() = 0; // mengeluarkan suara tergantung jenis hewan
		virtual FarmProduct void kill() = 0; // mengembalikan FarmProduct tergantung jenis hewan yang di-kill
		virtual void eat() = 0; // makan dan mengembalikan FarmProduct tergantung jenis hewan
		
		// getter setter
		void setMeatProducing(bool); // set indikator meatProducing dengan input
		void setEggProducing(bool); // set indikator eggProducing dengan input
		void setMilkProducing(bool); // set indikator milkProducing dengan input
		bool getMeatProducing(); // mengembalikan meatProducing
		bool getEggProducing(); // mengembalikan eggProducing
		bool getMilkProducing(); // mengembalikan milkProducing
		int getLifeSpan(); // mengembalikan lifeSpan
		
		// cek kategori FarmAnimal
		bool isMeatProducing(); // true jika meatProducing bernilai true
		bool isEggProducing(); // true jika eggProducing bernilai true
		bool isMilkProducing(); // true jika milkProducing bernilai true
};

#endif