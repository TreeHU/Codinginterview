#pragma once
#include <utility>



template <typename T>
class Stack {
public:
	Stack() : top(nullptr), stackSize(0); {

	}

	Stack(Stack&& other) : top(std::move(other.top)), stackSize(std::move(other.stackSize)){

	}
	~Stack()
	{
		while (!isEmpty())
		pop();
	}


	template <typename U>
	void push(U&& value) {
		auto n = new Node
	}





};