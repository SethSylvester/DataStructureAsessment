#pragma once

template<typename Anytype>
class Node
{
	public:
		Anytype Info;
		Node<Anytype>* Next;
		Node<Anytype>* Previous;
};