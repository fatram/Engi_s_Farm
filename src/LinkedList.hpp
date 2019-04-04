#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

//#define nullptr nullptrptr

//simpul dalam LinkedList, yang menyimpan informasi data yang disimpan dan alamat simpul selanjutnya
template<class T>
struct node {
	T data;
	node *next;
};

// kelas LinkedList, atribut first adalah pointer ke element pertama LinkedList
template<class T>
class LinkedList{
	private:
		node<T> *first;
		
	public:
		// default ctor, membentuk LinkedList kosong
		LinkedList(){
			first = nullptr;
		}
		
		// dtor, menghapus LinkedList
		~LinkedList(){
			while(first != nullptr){
				node<T> *temp = first;
				first = first->next;
				delete temp;
			}
		}
		
		// mengembalikan index yang dengan elemen LinkedList element jika ada, jika tidak ada dikembalikan -1
		int find(T element){
			int i = 0;
			node<T> *temp = first;
			while(temp->next != nullptr && get(i) != element){
				temp = temp->next;
				i++;
			}
			if(get(i) == element){
				return i;
			} else {
				return -1;
			}
		}
		
		// memeriksa apakah LinkedList kosong
		bool isEmpty(){
			return first == nullptr;
		}
		
		// menambah elemen ke dalam LinkedList sebagai elemen terakhir
		void add(T element){
			node<T> *temp = new node<T>;
			temp->data = element;
			temp->next = nullptr;
			if(first == nullptr){
				first = temp;
			} else {
				node<T> *tmp = first;
				while(tmp->next != nullptr){
					tmp = tmp->next;
				}
				tmp->next = temp;
			}
		}
		
		// mengembalikan elemen LinkedList pada index i
		T get(int i){
			if(i >= size()){
				throw "index out of bound";
			} else {
				node<T> *temp = first;
				while(i > 0){
					temp = temp->next;
					i--;
				}
				return temp->data;
			}
		}
		
		// mengembalikan banyak elemen yang terdapat di dalam LinkedList
		int size(){
			int i = 0;
			node<T> *temp = first;
			while(temp != nullptr){
				temp = temp->next;
				i++;
			}
			return i;
		}
		
		// menghapus element yang ditemukan pertama kali dari LinkedList
		void remove(T element){
			node<T> *temp = first;
			node<T> *tempN = first;
			while(tempN->next != nullptr && tempN->data != element){
				temp = tempN;
				tempN = tempN->next;
			}
			if(temp != tempN){
				if(tempN->data == element){
					node<T> *tmp = tempN;
					tempN = tempN->next;
					temp->next = tempN;
					delete tmp;
				}
			} else {
				if(tempN->data == element){
					node<T> *tmp = tempN;
					first = nullptr;
					delete tmp;
				}
			}
		}					
};

#endif