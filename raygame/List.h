#pragma once
#include "Node.h"
#include "Iterator.h"

template<typename T>
class List {
protected:
	//The length of the list
	int m_count;
	//The first node
	Node<T>* m_first;
	//The last node
	Node<T>* m_last;

public:
	//If the list is empty
	bool isEmptyList();
	//The Length of the list
	int length();
	//Virtual functions
	virtual bool search(const T&) = 0;
	virtual void deleteNode(const T&) = 0;

	//The front & back of the list
	T front();
	T back();
	virtual void insertFirst(const T&) = 0;
	virtual void insertLast(const T&) = 0;
	//if the list is empty
	bool isEmpty();
};

template<typename T>
inline bool List<T>::isEmptyList() {
	//If the first part of the node is empty
	//return true
	if (m_first == nullptr) {
		return true;
	}
	else {
		return false;
	}
}
//return the length of the array
template<typename T>
inline int List<T>::length() {
	return m_count;
}
//deletes the node
template<typename T>
inline void List<T>::deleteNode(const T & node) {
	delete &node;
}

//Return the first item 
template<typename T>
T List<T>::front() {
	return m_first->data;
}

//Return the last item
template<typename T>
T List<T>::back() {
	return m_last->data;
}

//If the list is empty
template<typename T>
bool List<T>::isEmpty() {
	return m_count == 0;
}