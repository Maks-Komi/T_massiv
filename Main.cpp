#include<iostream>
#include<string>
#include"Functions.h"
using namespace std;

/*����������� ��������� ����� ��� ������ � ���������. ����������� ���������
�������� �������� ������������� (�����������) ���� ��� ������� ��������
��� ����� ��� �����������, ���� �����.
����������� ������������� �������� ���������.*/

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