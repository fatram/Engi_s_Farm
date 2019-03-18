#ifndef PRODUCT_HPP
#define PRODUCT_HPP

// kelas abstrak Product
class Product {
	private :
		int harga;
	public:
	 	virtual Product(int h);
		virtual ~Product();
		int virtual getHarga() const;
};

#endif
