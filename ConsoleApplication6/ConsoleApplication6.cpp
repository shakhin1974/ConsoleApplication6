#include <iostream>
#include <string>
#include<windows.h>
#include<vector>
#include"teacher.h"
using namespace std;
int main()
{	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	/* задание 1
	// объявляем массив а размер указываем с клав-ры
	int c;
	cout << "Введите размер массива" << endl;
	cin >> c;
	int* arr = new int[c];
	for (size_t i = 0; i < c; i++)
	{
		cout << "Введите  массив для  " << i << " индекса ";
		cin >> arr[i];
	}
	for (size_t i = 0; i < c; i++)
	{
		cout<< "Массив с " << i<< " индексом " << arr[i] << endl;
	}
	*/
	/* задание 2
	// объявляем массив со значениями  а размер находим с помошью функции size
	int arr1[] = { 4, 12, 6, 11, 8, 18, 2, 6, 13 };
	int a = size(arr1);
	for (size_t i = 0; i < a; i++)
	{
		cout << "Массив с " << i << " индексом " << arr1[i] << endl;
	}
	*/
	/* задание 3 
	// объявляем массив с фиксированным  размером 

	int arr2[10] = {6, 8, 23, 12, 16, 11, 8, 15, 18, 2};

	for (size_t i = 0; i < 10; i++)
	{
		cout << "Массив с " << i << " индексом " << arr2[i] << endl;
	}
	*/
// объявляем вектор добавляем значения с помошью push_back();
/*	задание 4 
	
	vector<int> vect2;
	vect2.push_back(4);
	vect2.push_back(14); 
	vect2.push_back(41);
	vect2.push_back(44);
	
	// размер вектора находим с помошью функции size()
	for (size_t i = 0; i < vect2.size(); i++)
	{
		cout << " vect2 = " << vect2[i] << endl;
	}

*/
/*	задание 5 
	// объявляем вектор со значениями
	vector<int> vect3 = {4, 12, 26, 8, 23, 12, 16, 11, 8, 15, 18, 2 };
	// вывод вектора 
	for (size_t i = 0; i < vect3.size(); i++)
	{
		cout << " vect3   с " << i << " индексом " << vect3[i] << endl;
	}
	*/
	//	задание 6 
	
	int arr1[] = { 4, 6, 12,  3, 1, 9, 8,   12, 26, 8, 23, 2, 16, 11,  15, 18, 2 };
	cout << "Повторяющее значения \t ";  _map_arr(arr1, size(arr1)); cout << endl;
	vector<int> vect;
	int sizeOfArr = size(arr1);
	for (size_t i = 0; i < sizeOfArr; i++) {
		vect.push_back(arr1[i]);
		cout << "vect  с " << i << "\t индексом = \t " << vect[i] << endl;
	}
	//
	/* задание 7 
	// добавить значения и размер вектора с помошью клавиатуры 
		int a1;
		cout << "Укажите размер вектора\n ";
		cin >> a1;
		int* mass = new int[a1];
		vector<int> vect4;
		for (size_t i = 0; i < a1; i++)
		{
		int s;
		cin >> s;
		vect4.push_back(s);
		}
		for (size_t i = 0; i < a1; i++)
		{
		cout << "vect  с " << i << "\t индексом = \t " << vect4[i] << endl;
		}
	
		for (size_t i = 0; i < a1; i++)
		{
		mass[i] = vect4[i] ;
		cout << " mass = " << i << "\t индексом = \t " << vect4[i] << endl;
		}
		*/
	
}