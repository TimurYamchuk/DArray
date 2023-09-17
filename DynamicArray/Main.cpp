#pragma once
#include "DynamicArray.h"

void main()
{
	DynamicArray a(5); // constructor 1 param
	a.Input();
	a.Output();
	DynamicArray b = a; // copy constructor
	b.Output();
	b.Arrayplusnumber(10);
	b.Output();
	b.Arrayminusnumber(2);
	b.Output();
	b.Arraymultinumber(2);
	b.Output();
	DynamicArray c = a;
	c.ArrayPlusArray(b.GetPointer());
	c.Output();
	c.ArrayMinusArray(b.GetPointer());
	c.Output();
	++a;
	a.Output();
	--a;
	a.Output();
	/*
	реилизовать следующие перегрузки:
	 rez = a-b; // разность массивов
	 rez=a+b;  // конкатенация массивов
	 ++rez;  // увеличиваем количество элементов на 1(значение 0).
     --rez;  // ум. количество элементов на 1, удаляем последний элемент
	*/



	system("pause");
}