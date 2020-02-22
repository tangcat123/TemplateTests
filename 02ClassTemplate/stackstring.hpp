#pragma once

#include <vector>
#include <stdexcept>
#include "stack1.hpp"
#include <deque>
using namespace std;

template<>
class Stack<string> {
private:
	deque<string> elems;

public:
	void push(string const&);
	void pop();
	string const top();
	bool empty() const {
		return elems.empty();
	}
};

void Stack<string>::push(string const& elem)
{
	elems.push_back(elem);
}

void Stack<string>::pop()
{
	elems.pop_back();
}


string const Stack<string> ::top()
{
	return elems.back();
}