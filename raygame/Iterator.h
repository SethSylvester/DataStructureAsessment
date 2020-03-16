#pragma once
#include "Node.h"

template<typename T>
class Iterator {
protected:
	//Data of the iterator
	int m_count;
	Node<T>* current;

public:
	Iterator() { }
	Iterator(Node<T> * ptr);

	T operator*();
	Iterator operator++();
	Iterator operator--();
	bool operator==(const Iterator<T>& ptr)const;
	bool operator!=(const Iterator<T>& ptr)const;
};

//Actual constructor.
template<typename T>
inline Iterator<T>::Iterator(Node<T> * ptr) {
	current = ptr;
}

//Returns the pointers data
template<typename T>
inline T Iterator<T>::operator*() {
	return current->data;
}

//Increments the iterator through the list
template<typename T>
inline Iterator<T> Iterator<T>::operator++() {
	current = current->next;
	return current;
}

//Decrements the iterator through the list
template<typename T>
inline Iterator<T> Iterator<T>::operator--() {
	current = current->previous;
	return current;
}

//Checks to see if data stored is equal
template<typename T>
inline bool Iterator<T>::operator==(const Iterator<T>& ptr) const {
	return (current->data == ptr.current->data);
}

//Checks to see if data stored is not equal
template<typename T>
inline bool Iterator<T>::operator!=(const Iterator<T>& ptr) const {
	return !(current->data == ptr.current->data);
}