
///   написать 3 шаблонные функции сортировки одномерных массивов любого типа
///   способы :
///   -пузырьком
///   - вставками
///   - выбором
///   результаты публикуем на гитхабе!

#include <iostream>
using namespace std;

template <class T>
void puzirek_sort(T* Arr, int size);

template <class T>
void vstavka_sort(T* Arr, int size);

template <class T>
void vibor_sort(T* Arr, int size);

template <class T>
void show(T* Arr, int size);

int main();




template <class T>
void puzirek_sort(T* Arr, int size)
{
	for (int i = 0; i < size - 1; i++)
		for (int j = 0; j < size - 1 - i; j++)
			if (Arr[j] > Arr[j + 1]) swap(Arr[j], Arr[j + 1]);
}

template <class T>
void vstavka_sort(T* Arr, int size)
{
	for (int i = 0; i < size - 1; i++)
		for (int j = i + 1; j > 0; j--)
		{
			if (Arr[j] < Arr[j - 1]) swap(Arr[j], Arr[j - 1]);
		    else break;
		}
}

template <class T>
void vibor_sort(T* Arr, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int k = i;

		for (int j = i + 1; j < size; j++)
			if(Arr[k] > Arr[j]) k = j;

		swap(Arr[k], Arr[i]);
	}
}

template <class T>
void show(T* Arr, int size)
{
	for (int i = 0; i < size; i++)
		cout << Arr[i] << "\t";
}

int main()
{
	system("chcp 1251 > 0");

	int Arr1[6]{ 2,8,4,99,33,22 };
	puzirek_sort(Arr1, 6);
	show(Arr1, 6);
	cout << "\n\n";

	double Arr2[6]{ 4.44, 1.3, 77.5, 34.2, 0.34, 2.45 };
	vstavka_sort(Arr2, 6);
	show(Arr2, 6);
	cout << "\n\n";

	float Arr3[6]{ 99.4, 6.55, 34.6, 1.7, 3.7, 45.2 };
	vibor_sort(Arr3, 6);
	show(Arr3, 6);
	cout << "\n\n";
}