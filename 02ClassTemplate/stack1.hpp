#pragma once

#include <vector>
#include <stdexcept>

template<typename T>
class Stack {
private : 
	std::vector<T> elems;

public:
	void push(T const&);
	void pop();
	T const top();
	bool empty() const {
		return elems.empty();
	}
};

template<typename T>
void Stack<T>::push(T const& elem)
{
	elems.push_back(elem);
}

template<typename T>
void Stack<T> :: pop()
{
	elems.pop_back();
}

template<typename T>
T const Stack<T> :: top()
{
	return elems.back();
}