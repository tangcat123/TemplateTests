#include "stack4.hpp"

template<typename T, int MaxSize>
Stack<T, MaxSize>::Stack() : num(0)
{

}

template<typename T, int MaxSize>
void Stack<T, MaxSize>::push(T const& elem)
{
	elems[num++] = elem;
}

template<typename T, int MaxSize>
void Stack<T, MaxSize> ::pop()
{
	num--;
}

template<typename T, int MaxSize>
T const Stack<T, MaxSize> ::top()
{
	return elems[num];
}