#pragma once
#include "Node.h"

//Seth
template<typename Anytype>
class Iterator {
protected:
	int m_count;
	Node<Anytype>* current;

public:
	Iterator() {}
	Iterator(Node<Anytype> * ptr);

	Anytype operator*();
	Iterator operator++();
	Iterator operator--();
	bool operator==(const Iterator<Anytype>& ptr)const;
	bool operator!=(const Iterator<Anytype>& ptr)const;
};

//Actual constructor.
template<typename Anytype>
inline Iterator<Anytype>::Iterator(Node<Anytype> * ptr) {
	current = ptr;
}

//Returns the pointers data
template<typename Anytype>
inline Anytype Iterator<Anytype>::operator*() {
	return current->Info;
}

//Increments the iterator through the list
template<typename Anytype>
inline Iterator<Anytype> Iterator<Anytype>::operator++() {
	current = current->Next;
	return current;
}

//Decrements the iterator through the list
template<typename Anytype>
inline Iterator<Anytype> Iterator<Anytype>::operator--() {
	current = current->Previous;
	return current;
}

//Checks to see if data stored is equal
template<typename Anytype>
inline bool Iterator<Anytype>::operator==(const Iterator<Anytype>& ptr) const {
	return (current->Info == ptr.current->Info);
}

//Checks to see if data stored is not equal
template<typename Anytype>
inline bool Iterator<Anytype>::operator!=(const Iterator<Anytype>& ptr) const {
	return !(current->Info == ptr.current->Info);
}