#pragma once
#include "List.h"

template<typename T>
class UnorderedList : public List<T> {
	public:
		void insertFirst(const T&) override;
		void insertLast(const T&) override;
		void deleteNode(const T& node) override;

		bool search(const T& search) override;
};

template<typename T>
void UnorderedList<T>::insertFirst(const T & Info) {
	//Create a new node
	Node<T>* newNode = new Node<T>();

	//Add data to the new node
	newNode->data = Info;

	//Set the new nodes next to be the first in the list
	newNode->next = this->m_first;

	//Set first to point to the new node
	this->m_first = newNode;

	if (this->m_count == 0) {
		this->m_last = newNode;
	}

	//Increment the count
	this->m_count++;
}

template<typename T>
void UnorderedList<T>::insertLast(const T & Info) {
	//Create a new node
	Node<T>* lNode = new Node<T>();

	//Add data to the new node
	lNode->data = Info;

	//Set the new nodes next to be null in the list
	lNode->next = nullptr;
	if (this->m_count == 0) {
		this->m_first = lNode;
		this->m_last = lNode;
		this->m_count++;
		return;
	}

	//Set the previous node
	lNode->previous = this->m_last;

	//Set the previous node 'Next' to be the new node
	this->m_last->next = lNode;

	//Set Last to point to the new node
	this->m_last = lNode;

	//Incriment the count
	this->m_count++;
}

template<typename T>
inline void UnorderedList<T>::deleteNode(const T & node) {
	//deletes the node.
	delete &node;
}

template<typename T>
inline bool UnorderedList<T>::search(const T & search) {
	//If not create a temporary node to cycle through to the next node

	Node<T> *current = List<T>::m_first;

	//Cycles through the list until it finds the data or becomes nullptr.
	while (current != nullptr) {
		if (current->data == search) {
			return true;
		}

		else {
			current = current->next;
		}
	}
	//If nothing else return false
	return false;
}