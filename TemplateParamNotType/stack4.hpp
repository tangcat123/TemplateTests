#pragma once

#include <vector>
#include <stdexcept>

template<typename T, int MaxSize>
class Stack {
private:
	T elems[MaxSize];
	int num;
public:
	Stack();
	void push(T const&);
	void pop();
	T const top();
	bool empty() const {
		return num == 0;
	}
};

