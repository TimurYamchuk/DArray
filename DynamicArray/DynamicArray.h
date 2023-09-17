#pragma once
#include <iostream>
using namespace std;

class DynamicArray
{
	int * ptr; // ��������� �� �����. ������
	int size;  // ������ ������� 
public:
	DynamicArray();
	DynamicArray(int);
	DynamicArray(const DynamicArray&); // copy constructor
	~DynamicArray();
	void Input();// rand
	void Output();
	void Arrayplusnumber(int rez);
	void Arrayminusnumber(int rez);
	void Arraymultinumber(int rez);
	void ArrayPlusArray(int* ptr);
	void ArrayMinusArray(int* arr2);

	DynamicArray& operator++();

	DynamicArray& operator--();

	// ����� �� �������
	int * GetPointer();
	int GetSize();


};

