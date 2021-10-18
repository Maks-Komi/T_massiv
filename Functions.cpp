#include<iostream>
#include "Functions.h"
using namespace std;

template <typename T>
Massiv<T>::Massiv()
{
	int size = 0;
	values = nullptr;
}
template <typename T>
Massiv<T>::~Massiv()
{
	if (values)
		delete[] values;
}

template <typename T>
Massiv<T>::Massiv(const Massiv<T> & other) {
	size = other.size;
	values = nullptr;
	if (size != 0) {
		this->values = new Massiv[size];
	}
	else
		values = 0;
	for (int i = 0; i < this->size; i++)
	{
		this->values[i] = other.values[i];
	}
}

template <typename T>
int Massiv<T>::Size() const {
	return size;
}

template <typename T>
Massiv<T>::Massiv(int size) {
	this->size = size;
	if (this->size != 0) {
		values = new Massiv[this->size];
	}
	else
		values = 0;
}

template <typename T>
Massiv<T> Massiv<T>::operator = (const Massiv<T>& other) {
	size = other.size;
	values = nullptr;
	if (size != 0) {
		this->values = new Massiv[size];
	}
	else
		values = 0;
	this->values = new Massiv[size];
	for (int i = 0; i < this->size; i++)
	{
		this->values[i] = other.values[i];
	}
}


template <typename T>
Massiv<T> Massiv<T>::operator+ (const Massiv<T>& other) const {
	Massiv value_int;
	for (int i = 0; i < value_int.size; i++) {
		value_int[i] = values[i] + other.values[i];
	}
	return value_int;
}

template <typename T>
T& Massiv<T>::operator[] (int i) {
	return values[i];
}

template <typename T>
ostream& operator << (ostream& out, Massiv<T> a) {
	for (int i = 0; i < a.size; i++)
	{
		out << a[i] << " ";
	}
	return out;
}