#pragma once
#include "List.h"

template<typename Anytype>
class UnorderedList : List<Anytype>
{
	public:
		void insertFirst(const Anytype&) override;
		void insertLast(const Anytype&) override;
		void DeleteNode(const Anytype& node) override;

		bool Search(const Anytype& search) override;
};

template<typename Anytype>
void UnorderedList<Anytype>::insertFirst(const Anytype & Info)
{

	//Create a new Node - H
	Node<Anytype>* fNode = new Node<Anytype>();

	//Add info to the new node - H
	fNode->Info = Info;

	//Set the new nodes "next" to be the first node in the list - H
	fNode->Next = this->m_first;

	//Set First to point to the new node - H
	this->m_first = fNode;

	if (this->m_count == 0)
	{
		this->m_last = fNode;
	}

	//Incriment the count - H
	this->m_count++;
}

template<typename Anytype>
void UnorderedList<Anytype>::insertLast(const Anytype & Info)
{
	//Crate a new Node - H
	Node<Anytype>* lNode = new Node<Anytype>();

	//Add info to the new Node - H
	lNode->Info = Info;

	//Set the new nodes "next" to be null in the list - H
	lNode->Next = nullptr;
	if (this->m_count == 0)
	{
		this->m_first = lNode;
		this->m_last = lNode;
		this->m_count++;
		return;
	}

	//Set the previous node - H
	lNode->Previous = this->m_last;

	//Set the previous node 'Next' to be the new node - H
	this->m_last->Next = lNode;

	//Set Last to point to the new node - H
	this->m_last = lNode;

	//Incriment the count - H
	this->m_count++;
}

template<typename Anytype>
inline void UnorderedList<Anytype>::DeleteNode(const Anytype & node)
{
	//deletes the node.
	//Todo is to fix the next and last cuz this probably messes up the list
	// -Seth
	delete & node;
}

//Seth
template<typename Anytype>
inline bool UnorderedList<Anytype>::Search(const Anytype & search) {
	//Checks to see if the first result is the search target
	if (m_first == search) {
		return m_first;
	}

	else {
		//If not create a temporary node to cycle through to the next node
		Node<Anytype>* nextNode = m_first.next;

		//If that is the search target return it.
		if (nextNode == search) {
			return nextNode;
		}

		//If thats not it, create another temporary node to cycle through
		else {
			Node<Anytype>* nNode;
			bool searching = true;
			while (searching) {
				//nNode will always be the next node.
				nNode = nextNode->Next;
				//return if its what you're looking for
				if (nNode == search) {
					return nNode;
				}
				//Iterate through to the next node if avalible
				else if (nNode != m_last) {
					nextNode = nNode;
				}
				//If its the last one don't try to grab a null value
				else if (nNode == m_last) {
					searching = false;
				}
			}
		}
	}
	//If nothing else return false
	return false;
}