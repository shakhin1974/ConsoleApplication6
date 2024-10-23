#pragma once
#pragma once
#include<istream>
#include<vector>
using namespace std;
int Min(int rows, int cols, int array[100][100])
{
	int min = array[0][0];
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (array[i][j] < min) {
				min = array[i][j];
			}
		}
	}
	return min;
}
void _sort_arr(int* arr, int razmer)
{
	int kor = 0; int temp = 0; for (int i = 0; i < razmer; i++)
	{
		kor = i;
		for (int k = 0; k < razmer; k++) {
			if (arr[kor] < arr[k]) {
				kor = k;
				temp = arr[i];
				arr[i] = arr[kor];
				arr[kor] = temp;
			}
		}
	}
}

void _map_arr(int data[], int _size) {
	int c; const int n = 1000;
	int masiv2[n] = { 0 }; for (int i = 0; i <= _size - 1; i++)
	{
		c = data[i]; for (int j = i + 1; j <= _size - 1; j++)
		{
			if (data[j] == c) { masiv2[i] = c; }
		}
	}
	for (int i = 0; i <= _size - 1; i++)
	{
		for (int j = i + 1; j <= n - 1; j++)
		{
			if (masiv2[j] == masiv2[i]) { masiv2[i] = 0; }
		}
	}
	for (int j = 0; j <= n - 1; j++)
	{
		if (masiv2[j] != 0) { cout << masiv2[j] << " "; }
	}
}

int maxnum(int* arr, int size) {
	int max = arr[0];
	for (int i = 0; i < size; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}
int minnum(int* arr, int size) {
	int min = arr[0];
	for (int i = 0; i < size; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}
int vect_min(vector<int> vect)
{
	int min = vect[0];
	for (int i = 0; i < vect.size(); i++)
	{
		if (vect[i] < min)
		{
			min = vect[i];
		}
	}
	return min;
}
int vect_max(vector<int> vect)
{
	int max = vect[0];
	for (int i = 0; i < vect.size(); i++)
	{
		if (vect[i] > max)
		{
			max = vect[i];
		}
	}
	return max;
}