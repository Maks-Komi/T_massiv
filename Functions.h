#pragma once
#include<iostream>
using namespace std;

template <typename T>
class Massiv
{
public:
	Massiv();
	~Massiv();
	Massiv(int);
	Massiv(const Massiv<T> & other);
	int Size() const;
	Massiv<T> operator = (const Massiv<T>& other);
	Massiv<T> operator + (const Massiv<T>& other) const;
	T& operator [] (int);

	template <typename T>
	friend ostream& operator << (ostream& out, Massiv<T> a);
private:
	int size;
	T* values;	
};

