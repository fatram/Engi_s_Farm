#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP


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
			first = NULL;
		}
		
		// dtor, menghapus LinkedList
		~LinkedList(){
			while(first != NULL){
				node<T> *temp = first;
				first = first->next;
				delete temp;
			}
		}
		
		// mengembalikan index yang dengan elemen LinkedList element jika ada, jika tidak ada dikembalikan -1
		int find(T element){
			int i = 0;
			node<T> *temp = first;
			while(temp->next != NULL && get(i) != element){
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
			return first == NULL;
		}
		
		// menambah elemen ke dalam LinkedList sebagai elemen terakhir
		void add(T element){
			node<T> *temp = new node<T>;
			temp->data = element;
			temp->next = NULL;
			if(first == NULL){
				first = temp;
			} else {
				node<T> *tmp = first;
				while(tmp->next != NULL){
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
			while(temp != NULL){
				temp = temp->next;
				i++;
			}
			return i;
		}
		
		// menghapus element yang ditemukan pertama kali dari LinkedList
		void remove(T element){
			node<T> *temp = first;
			node<T> *tempN = first;
			while(tempN->next != NULL && tempN->data != element){
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
					first = NULL;
					delete tmp;
				}
			}
		}					
};

#endif