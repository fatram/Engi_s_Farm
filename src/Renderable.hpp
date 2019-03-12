#ifndef RENDERABLE_HPP
#define RENDERABLE_HPP

// kelas abstrak Renderable dengan method render yang akan mengembalikan karakter representasi suatu objek
class Renderable {
	public:
		virtual char render() = 0;
};

#endif