#include <iostream>

#include<list>



using namespace std;
#define delimiter "\n----------------------------------------------\n\n"
#define tab "\t"
void main()
{
	setlocale(LC_ALL, "");

	std::list<std::string> offense{};
	offense.push_front("mulct"+1 + offense.size());
	offense.push_front("mulct"+1 + offense.size());
	offense.push_front("mulct"+1 + offense.size());
	offense.push_front("mulct"+1 + offense.size());
	
	offense.;
	
}
//class List
//{
//	class Element
//	{
//		int Data; //�������� ��������
//		Element* pNext; //��������� �� ��������� �������
//		Element* pPrev; //��������� �� ���������� �������
//	public:
//		Element(int Data, Element* pNext = nullptr, Element* pPrev = nullptr)
//			:Data(Data), pNext(pNext), pPrev(pPrev)
//		{
//			cout << "EConstructor:\t" << this << endl;
//		}
//		~Element() { cout << "EDestructor:\t" << this << endl; }
//		: Data(Data), pNext(pNext), pPrev(pPrev) {}
//		~Element() {}
//		friend class List;
//	}*Head, * Tail; //������� ������ ����� ��������� ��������������� ����� ��� ��������.
//	//Element* Head;
//	//typedef ����� ��������� ���������:
//		// typedef ������������_���_������ ���������
//public:
//	class Iterator
//	{
//		Element* Temp;
//	public:
//		Iterator(Element* Temp = nullptr) :Temp(Temp) {}
//		~Iterator() {}
//
//		Iterator& operator++()
//		{
//			//Prefix increment
//			Temp = Temp->pNext;
//			return *this;
//		}
//		operator++(int)
//		{
//			//Suffix increment
//			Iterator old = *this;
//			Temp = Temp->pNext;
//			return old;
//		}
//		Iterator& operator--()
//		{
//			Temp = Temp->pPrev;
//			return *this;
//		}
//		operator--(int)
//		{
//			Iterator old = *this;
//			Temp = Temp->pPrev;
//			return old;
//		}
//
//		// Comparison operators:
//		bool operator==(const Iterator& other)const { return this->Temp == other.Temp; }
//		bool operator!=(const Iterator& other)const { return this->Temp != other.Temp; }
//
//		const int& operator*()const { return Temp->Data; }
//		int& operator*() { return Temp->Data; }
//	};
//	class ReverseIterator
//	{
//		Element* Temp;
//	public:
//		ReverseIterator(Element* Temp = nullptr) :Temp(Temp) {}
//		~ReverseIterator() {}
//
//		//				Increment/Decrement:
//		ReverseIterator& operator++()
//		{
//			Temp = Temp->pPrev;
//			return *this;
//		}
//		ReverseIterator operator++(int)
//		{
//			ReverseIterator old = *this;
//			Temp = Temp->pPrev;
//			return old;
//		}
//		ReverseIterator& operator--()
//		{
//			Temp = Temp->pNext;
//			return *this;
//		}
//		operator--(int)
//		{
//			ReverseIterator old = *this;
//			Temp = Temp->pNext;
//			return old;
//		}
//
//		// Comparison operators:
//		bool operator==(const ReverseIterator& other)const { return this->Temp == other.Temp; }
//		bool operator!=(const ReverseIterator& other)const { return this->Temp != other.Temp; }
//
//		// Dereference operators (��������� �������������):
//		const int& operator*()const { return Temp->Data; }
//		int& operator*() { return Temp->Data; }
//
//	};
//	Iterator begin()const { return Head; }
//	Iterator end()const { return nullptr; }
//	ReverseIterator rbegin() { return Tail; }
//	ReverseIterator rend() { return nullptr; }
//
//	List()
//	{
//		Head = Tail = nullptr;
//		size = 0;
//		cout << "LConstructor:\t" << this << endl;
//	}
//	~List() { cout << "LDestructor:\t" << this << endl; }
//	List(const std::initializer_list<int>& il) :List()
//	{
//		for (int const* it = il.begin(); it != il.end(); ++it)
//		{
//			push_back(*it);
//		}
//	}
//	List(const List& other) :List()
//	{
//		*this = other;
//		cout << "CopyConstructor:" << this << endl;
//	}
//	~List() { while (Tail)pop_back(); cout << "LDestructor:\t" << this << endl; }
//
//	// Operators:
//	List& operator=(const List& other)
//	{
//		if (this == &other)return *this;
//		while (Head)pop_front();
//		for (Element* Temp = other.Head; Temp; Temp = Temp->pNext)push_back(Temp->Data);
//		cout << "CopyAssignment:\t" << this << endl;
//		return *this;
//	}
//
//	// Adding elements:
//	void push_front(int Data)//��������� �������� � ������ ������
//	{
//		@@ - 66, 35 + 169, 91 @@ class List
//	}
//	size++;
//}
//void insert(int Data, int Index)
//{
//	if (Index > size)return;
//	if (Index == 0)return push_front(Data);
//	if (Index == size)return push_back(Data);
//	Element* Temp;
//	if (Index < size / 2)
//	{
//		Temp = Head;
//		for (int i = 0; i < Index; i++)Temp = Temp->pNext;
//	}
//	else
//	{
//		Temp = Tail;
//		for (int i = 0; i < size - Index - 1; i++)Temp = Temp->pPrev;
//	}
//
//	Element* New = new Element(Data);
//	New->pNext = Temp;
//	New->pPrev = Temp->pPrev;
//	Temp->pPrev->pNext = New;
//	Temp->pPrev = New;
//
//	size++;
//}
//
//// Removing elements:
//void pop_front()//������� ��������� ������� ������
//{
//	if (Head == nullptr) { cout << "Error" << endl; return; }
//	if (size == 1)
//	{
//		Tail = 0;
//		delete Head;
//		Head = Tail = nullptr;
//	}
//	else
//	{
//		//1) ������� ������ �� ��������� �������:
//		Head = Head->pNext;
//
//		//2) ������� ������� 'Head->pPrev' �� ������:
//		delete Head->pPrev;
//
//		//3) �������� ��������� 'Head->pPrev':
//		Head->pPrev = nullptr;
//	}
//	Element* Temp = Head;
//	Head = Head->pNext;
//	Head->pNext->pPrev = nullptr;
//	delete Temp;
//	size--;
//}
//void pop_back()//������� ��������� ������� ������
//{
//	if (Head == nullptr) { cout << "Error" << endl; return; }
//	if (size == 1)
//	{
//		Head = 0;
//		delete Tail;
//		Head = Tail = nullptr;
//	}
//	//if (Head == Tail)return pop_front();
//	else
//	{
//		Tail = Tail->pPrev;
//		delete Tail->pNext;
//		Tail->pNext = nullptr;
//	}
//	size--;
//}
//void erase(int num)
//{
//	if (num >= size - 1)return pop_back();
//	if (num == 0)return pop_front();
//	Element* Temp = Head;
//	Tail = Tail->pPrev;
//	Tail->pPrev->pNext = nullptr;
//	if (num <= size / 2)
//		for (int i = 0; i < num; i++)
//			Temp = Temp->pNext;
//	else
//	{
//		Temp = Tail;
//		for (int i = num; i < size - 1; i++)
//			Temp = Temp->pPrev;
//	}
//	Temp->pNext->pPrev = Temp->pPrev;
//	Temp->pPrev->pNext = Temp->pNext;
//	delete Temp;
//	size--;
//}
//
//
//// Methods:
//void print()const
//{
//	@@ - 109, 17 + 268, 84 @@ class List
//		cout << "���������� ��������� � ������: " << size << endl;
//}
//};
//List operator+(const List& left, const List& right)
//{
//	List buffer = left;
//	for (List::Iterator it = right.begin(); it != right.end(); ++it)
//	{
//		buffer.push_back(*it);
//		*it *= 10;
//	}
//	return buffer;
//}
//
//#define BASE_CHECK
////#define ITERATORS_CHECK
////#define OPERATOR_PLUS_CHECK
//
//void main()
//{
//	setlocale(LC_ALL, "");
//#ifdef BASE_CHECK
//	int n;
//	cout << "������� ������ ������: "; cin >> n;
//	List list;
//	for (int i = 0; i < n; i++)
//	{
//		list.push_front(rand() % 100);
//		list.push_back(rand() % 100);
//		//list.push_front(rand() % 100);
//	}
//	list.print();
//	list.reverse_print();
//	cout << delimiter;
//
//	list.push_back(33);
//	list.push_front(33);
//	list.print();
//	cout << delimiter;
//
//	list.pop_back();
//	list.pop_front();
//	list.print();
//	int index;
//	int value;
//
//	//cout << "������� ������ ������������ ��������: "; cin >> index;
//	cout << "������� ������ ���������� ��������: "; cin >> index;
//	//cout << "������� �������� ������������ ��������: "; cin >> value;
//	list.erase(index);
//	//list.insert(value, index);
//	list.print();
//	list.reverse_print();
//#endif // BASE_CHECK
//
//#ifdef ITERATORS_CHECK
//	List list = { 3, 5, 8, 13, 21 };
//	//list.print();
//	for (int i : list)cout << i << tab; cout << endl;
//
//	//List::Iterator it;
//	//const int jt = *it;
//
//	for (List::Iterator it = list.begin(); it != list.end(); ++it)
//	{
//		cout << *it << tab;
//	}
//	cout << endl;
//
//	for (List::ReverseIterator it = list.rbegin(); it != list.rend(); ++it)
//	{
//		cout << *it << tab;
//	}
//	cout << endl;
//#endif // ITERATORS_CHECK
//
//
//	List list1 = { 3, 5, 8, 13, 21 };
//
//	List list2 = { 34, 55, 89 };
//	List list3 = list1 + list2;
//	for (int i : list1) cout << i << tab; cout << endl;
//	for (int i : list2) cout << i << tab; cout << endl;
//	for (int i : list3) cout << i << tab; cout << endl;
//}
