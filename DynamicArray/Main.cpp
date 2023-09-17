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
	����������� ��������� ����������:
	 rez = a-b; // �������� ��������
	 rez=a+b;  // ������������ ��������
	 ++rez;  // ����������� ���������� ��������� �� 1(�������� 0).
     --rez;  // ��. ���������� ��������� �� 1, ������� ��������� �������
	*/



	system("pause");
}