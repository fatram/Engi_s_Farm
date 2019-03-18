#ifndef CELL_HPP
#define CELL_HPP

// kelas abstrak Cell
class Cell {
	private:
		int CoolDownTruck; //Digunakan untuk mengecek fasilitas truk apakah bisa digunakan  
	public:
		virtual void interact();
		//getter dan setter
		int getCoolDownTruck();
		void setCoolDownTruck(int);
		virtual ~Cell();
};

#endif