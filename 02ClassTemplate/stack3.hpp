#pragma once

#include <vector>
#include <stdexcept>
using namespace std;

template<typename T, typename CONT = vector<T> >
class Stack {
private:
	CONT elems;

public:
	void push(T const&);
	void pop();
	T const top();
	bool empty() const {
		return elems.empty();
	}
};

template<typename T, typename CONT>
void Stack<T, CONT>::push(T const& elem)
{
	elems.push_back(elem);
}

template<typename T, typename CONT>
void Stack<T, CONT> ::pop()
{
	elems.pop_back();
}

template<typename T, typename CONT>
T const Stack<T, CONT> ::top()
{
	return elems.back();
}