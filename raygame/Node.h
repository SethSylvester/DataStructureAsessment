#pragma once

template<typename T>
class Node {
	public:
		//Data the node contains
		T data;
		//The next node
		Node<T>* next;
		//The previous node
		Node<T>* previous;
};