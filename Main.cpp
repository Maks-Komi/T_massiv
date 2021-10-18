#include<iostream>
#include<string>
#include"Functions.h"
using namespace std;

/*Реализовать шаблонный класс для работы с массивами. Реализовать операторы
сложения массивов конкатенацией (склеиванием) если это массивы символов
или строк или поэлементно, если чисел.
Реализовать универсальный оператор сравнения.*/

int main() {
	
	Massiv<int> arr1(6);
	//Massiv<int> arr2[6]{ 10,20,30,40,50 };
	//Massiv<int> arr3;
	for (int i = 0; i < 6; i++)
	{
		arr1[i] = i+1;
		cout << arr1[i] << " ";
	}
	//Massiv<char> str1('grgoigtjhho');
	//Massiv<int> arr2[6];
	
	//Massiv<char>* charov;
}