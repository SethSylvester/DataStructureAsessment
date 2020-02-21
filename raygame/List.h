#pragma once
#include "Node.h"

template<typename Anytype>
class List
{
protected:
	int m_count;
	Node<Anytype>* m_first;
	Node<Anytype>* m_last;

public:
	bool isEmptyList();
	int Length();
	virtual bool Search(const Anytype&) = 0;
	virtual void DeleteNode(const Anytype&) = 0;

	Anytype front();
	Anytype back();
	virtual void insertFirst(const Anytype&) = 0;
	virtual void insertLast(const Anytype&) = 0;
	bool isEmpty();
};