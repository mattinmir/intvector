#include "intvector.h"

intvector::intvector() : size(0), capacity(4), vp(new int[4])
{}

intvector::intvector(int length) : size(0), capacity(length), vp(new int[length])
{}

intvector::~intvector()
{
	delete[] vp;
}

void intvector::push_back(int num)
{
	if (size == capacity)
	{
		int* temp = new int[capacity * 2];

		for (int i = 0; i < size; i++)
			temp[i] = vp[i];

		delete[] vp;
		vp = temp;
		capacity *= 2;
	}

	vp[size] = num; // Size will be equal to index of next empty space
	size++;
		
}

int& intvector::at(int i) const
{
	if (i > size - 1) // Last occupied index is size-1
		throw;
	else
		return vp[i];
}

int intvector::get_size() const
{
	return size;
}

int intvector::get_capacity() const
{
	return capacity;
}

intvector& intvector::operator= (const intvector &iv)
{
	if (vp != iv.vp)
	{
		delete[] vp;
		vp = new int[iv.capacity];
		for (unsigned i = 0; i < iv.size; i++)
			push_back(iv.vp[i]);
	}

	return *this;
}

int& intvector::operator[] (int i)
{
	return vp[i];
}

const int& intvector::operator[] (int i) const
{
	return vp[i];
}