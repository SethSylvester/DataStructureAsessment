#pragma once

template<typename Anytype>
class Node {
	public:
		//Data the node contains
		Anytype data;
		//The next node
		Node<Anytype>* next;
		//The previous node
		Node<Anytype>* previous;
};