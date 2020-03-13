#pragma once
#include "Node.h"
#include "Iterator.h"

template<typename Anytype>
class List {
protected:
	//The length of the list
	int m_count;
	//The first node
	Node<Anytype>* m_first;
	//The last node
	Node<Anytype>* m_last;

public:
	//If the list is empty
	bool isEmptyList();
	//The Length of the list
	int length();
	//Virtual functions
	virtual bool search(const Anytype&) = 0;
	virtual void deleteNode(const Anytype&) = 0;

	//The front & back of the list
	Anytype front();
	Anytype back();
	virtual void insertFirst(const Anytype&) = 0;
	virtual void insertLast(const Anytype&) = 0;
	//if the list is empty
	bool isEmpty();
};

template<typename Anytype>
inline bool List<Anytype>::isEmptyList() {
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
template<typename Anytype>
inline int List<Anytype>::length() {
	return m_count;
}
//deletes the node
template<typename Anytype>
inline void List<Anytype>::deleteNode(const Anytype & node) {
	delete &node;
}

//Return the first item 
template<typename Anytype>
Anytype List<Anytype>::front() {
	return m_first->data;
}

//Return the last item
template<typename Anytype>
Anytype List<Anytype>::back() {
	return m_last->data;
}

//If the list is empty
template<typename Anytype>
bool List<Anytype>::isEmpty() {
	return m_count == 0;
}