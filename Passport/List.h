/*связанные списки
использует вспомогательный указатель.
Note-узелок, 2 свойства: каждый узелок является объектом класса
у каждого узелка есть указатель на след-й узелок

есть спец указатели:
first pointer-указатель на первый элемент
last pointer -  указатель на последний элемент
*/

#pragma once
#include"Library.h"
template <typename T>
class List {
private:
	class Node {
	public:
		T data;
		Node* nextPtr;
	
	
		Node(T data){
			this->data = data;
			this->nextPtr = nullptr;
		}
	}*firstPtr, *lastPtr;
	size_t count;

public:
	List() {
	firstPtr = nullptr;
	lastPtr = nullptr;
	count = 0;}

	void pushBack(T data);
	void pushFront(T data);
	size_t size();
	void print();

	void delFirst();
	void delLast();

	void delEl(const T n);
	bool Find(T n);
	T& operator[](int index);

	~List();
};


