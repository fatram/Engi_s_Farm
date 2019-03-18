#ifndef PRODUCT_HPP
#define PRODUCT_HPP

// kelas abstrak Product
class Product {
	private :
		int harga;
	public:
		//ctor
		Product();

		//user-define ctor
	 	Product(int h);

		 //virtual dtor
		virtual ~Product();

		//setter harga
		void setHarga(int); 

		//getter harga
		int getHarga() const;
};

#endif
