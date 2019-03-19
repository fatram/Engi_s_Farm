#ifndef PRODUCT_HPP
#define PRODUCT_HPP

// kelas abstrak Product
class Product {
	protected:
		int harga;
	public:
		//ctor
		Product();

		//user-define ctor
	 	Product(int h);

		 //pure virtual dtor agar menjadi kelas abstrak
		virtual ~Product() = 0;

		//setter harga
		void setHarga(int); 

		//getter harga
		int getHarga() const;
};

#endif
