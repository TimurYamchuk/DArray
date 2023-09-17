#include "DynamicArray.h"
#include<Windows.h>

DynamicArray::DynamicArray():ptr(nullptr),size(0)
{}
DynamicArray::DynamicArray(int S)
{
	cout << "Construct by 1 param\n";
	size = S;
	ptr = new int[S];	
}

DynamicArray::DynamicArray(const DynamicArray & a)// copy constructor
{
	size = a.size;
	ptr = new int[size];
	for (int i = 0; i < size; i++)
	{
		ptr[i] = a.ptr[i];
	}
}
DynamicArray::~DynamicArray()
{
	cout << "Destruct\n";
	if (ptr != 0)
	{
		delete[] ptr;
    }
	Sleep(1000);
}
void DynamicArray::Input()
{
	for (int i = 0; i < size; i++)
	{
		ptr[i] = rand() % 20;
	}
}
void DynamicArray::Output()
{
	for (int i = 0; i < size; i++)
	{
		cout<<ptr[i] <<"\t";
	}
	cout << "\n---------------------------------\n";
}

void DynamicArray::Arrayplusnumber (int rez)
{
	if (size > 0) {
		for (int i = 0; i < size; i++)
		{
			ptr[i] += rez;
		}
	}
else
	{
	cout << "empty array" << endl;
	}
}

void DynamicArray::Arrayminusnumber(int rez)
{
	if (size > 0) {
		for (int i = 0; i < size; i++)
		{
			ptr[i] -= rez;
		}
	}
	else
	{
	cout << "empty array" << endl;
	}
}

void DynamicArray::Arraymultinumber(int rez)
{
	if (size > 0) {
		for (int i = 0; i < size; i++)
		{
			ptr[i] *= rez;
		}
	}
	else
	{
	cout << "empty array" << endl;
	}
}

void DynamicArray::ArrayPlusArray(int* arr)
{
	if (size > 0) {
		for (int i = 0; i < size; i++)
		{
			ptr[i] += arr[i];
		}
	}
	else
	{
	cout << "empty array" << endl;
	}
}

void DynamicArray::ArrayMinusArray(int* arr2)
{
	if (size > 0) {
		for (int i = 0; i < size; i++)
		{
			ptr[i] -= arr2[i];
		}
	}
	else
	{
		cout << "empty array" << endl;
	}

}

DynamicArray& DynamicArray::operator++()
{
	if (size > 0) {
		int* newPtr = new int[size + 1];
		for (int i = 0; i < size; i++) {
			newPtr[i] = ptr[i];
		}
		newPtr[size] = 0;
		delete[] ptr;
		ptr = newPtr;
		size++;
	}
	else {

		delete[] ptr;
		ptr = new int[1];
		ptr[0] = 0;
		size = 1;
	}
	return *this;
}
DynamicArray& DynamicArray::operator--()
{
	if (size > 0) {
		int* newPtr = new int[size - 1];
		for (int i = 0; i < size - 1; i++) {
			newPtr[i] = ptr[i];
		}
		delete[] ptr;
		ptr = newPtr;
		size--;
	}
	return *this;
}


int * DynamicArray::GetPointer() 
{
	return ptr;
}
int DynamicArray::GetSize()
{
	return size;
}
