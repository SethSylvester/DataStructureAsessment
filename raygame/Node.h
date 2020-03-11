#pragma once

template<typename Anytype>
class Node
{
	public:
		//The info the node stores
		Anytype Info;

		//Points to the next node
		Node<Anytype>* Next;

		//Points to the previous node
		Node<Anytype>* Previous;
};