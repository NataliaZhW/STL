﻿#include<iostream>
#include<array>
#include<vector>
#include<list>

using std::cin;
using std::cout;
using std::endl;

#define tab "\t"
#define delimiter "\n----------------------------------------------------\n"

//#define STL_ARRAY
#define STL_VECTOR

template<typename T>void vector_properties(const std::vector<T>& vec);

void main()
{
	setlocale(LC_ALL, "");

#ifdef STL_ARRAY
	//array - это контейнер, который хранит данные в виде статического массива.
	const int SIZE = 5;
	std::array<int, SIZE> arr = { 3, 5, 8 };
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	//arr.
#endif // STL_ARRAY

#ifdef STL_VECTOR
	//vector - это контейнер, который хранит данные в виде динамического массива.
	std::vector<int> vec = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };
	try
	{
		for (int i = 0; i < vec.size() * 2; i++)
		{
			cout << vec.at(i) << tab;
			//cout << vec[i] << tab;
		}
		cout << endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << endl;
	}

	vector_properties(vec);

	vec.push_back(144);
	vector_properties(vec);

	//vec.resize(15);	//задает фактический размер Вектора.
	//vec.shrink_to_fit();//урезает вместительность до фактического размера.
	vec.reserve(120);	//позволяет зарезервировать нужный объем памяти.
	//Этот метод выполняется только в том случае, если ему передать значение,
	//больше текущего capacity();
	for (int i : vec)cout << i << tab; cout << endl;
	vector_properties(vec);
	cout << vec.front() << endl;
	cout << vec.back() << endl;
	cout << vec.data() << endl;
	for (int i = 0; i < vec.size(); i++)
	{
		cout << *(vec.data() + i) << tab;
		//cout << vec.data()[i] << tab;
	}
	cout << endl;
	cout << "Iterators:" << endl;
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
	{
		cout << *it << tab;
	}
	cout << endl;
	int index;
	int value;
	cout << "Введите индекс добавляемого элемента: "; cin >> index;
	cout << "Введите значение добавляемого элемента: "; cin >> value;

	//std::vector<int>::iterator position = vec.begin();
	//std::advance(position, index); 
	//vec.insert(position, value);
	vec.insert(vec.begin() + index, value);
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) { cout << *it << tab; }
	vector_properties(vec);


	cout << "Введите индекс удаляемого элемента: "; cin >> index;
	//std::vector<int>::iterator position1 = vec.begin();
	//std::advance(position1, index);
	//vec.erase(position1);
	vec.erase(vec.begin() + index);
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) { cout << *it << tab; }
	vector_properties(vec);


#endif // STL_VECTOR


	std::list<int> list1 = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };
	for (int i : list1)cout << i << tab; cout << endl;
	
	cout << "Введите индекс добавляемого элемента: "; cin >> index;
	cout << "Введите значение добавляемого элемента: "; cin >> value;
	std::list<int>::iterator position = list1.begin();
	for (int i = 0; i < index; i++)++position;
	//std::advance(position, index);
	list1.insert(position, value);
	//list1.insert(list1.begin() + index, value);
	for (int i : list1)cout << i << tab; cout << endl;


	cout << "Введите индекс удаляемого элемента: "; cin >> index;
	std::list<int>::iterator position3 = list1.begin();
	for (int i = 0; i < index; i++)++position3;
	//std::advance(position3, index);
	list1.erase(position3);
	//list1.insert(list1.begin() + index, value);
	for (int i : list1)cout << i << tab; cout << endl;
}



template<typename T>void vector_properties(const std::vector<T>& vec)
{
	cout << "Size:\t " << vec.size() << endl;
	cout << "Capacity:" << vec.capacity() << endl;
	cout << "MaxSize: " << vec.max_size() << endl;
	cout << delimiter << endl;
}