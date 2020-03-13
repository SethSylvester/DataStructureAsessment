#pragma once
#include "List.h"

template<typename Anytype>
class UnorderedList : public List<Anytype> {
	public:
		void insertFirst(const Anytype&) override;
		void insertLast(const Anytype&) override;
		void deleteNode(const Anytype& node) override;

		bool search(const Anytype& search) override;
};

template<typename Anytype>
void UnorderedList<Anytype>::insertFirst(const Anytype & Info) {
	//Create a new node
	Node<Anytype>* newNode = new Node<Anytype>();

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

template<typename Anytype>
void UnorderedList<Anytype>::insertLast(const Anytype & Info) {
	//Create a new node
	Node<Anytype>* lNode = new Node<Anytype>();

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

template<typename Anytype>
inline void UnorderedList<Anytype>::deleteNode(const Anytype & node) {
	//deletes the node.
	delete &node;
}

template<typename Anytype>
inline bool UnorderedList<Anytype>::search(const Anytype & search) {
	//If not create a temporary node to cycle through to the next node

	Node<Anytype> *current = List<Anytype>::m_first;

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