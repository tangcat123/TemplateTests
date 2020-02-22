#pragma once

int const & max(int const& a, int const &b)
{
	return a > b ? a : b;
}

template<typename T>
T* const & max(T* const& a, T* const &b)
{
	return a > b ? a : b;
}

template<typename T>
T const & max(T const& a, T const &b)
{
	return a > b ? a : b;
}


