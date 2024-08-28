#include<iostream>
#include<map>
//#include<string>
#include<vector>

#define tab "\t"
#define delimiter "\n----------------------------------------------------\n"

using namespace std;

#define STL_MAP

void main()
{
	setlocale(LC_ALL, "");

#ifdef STL_MAP
	/*map - ��� ���������, ������ ������� �������� ������ ����<����, ��������>
			pair<key, value>
	*/

#ifdef STL_MAP
	std::map<int, std::string> week =
	{
		std::pair<int, std::string>(0, "Sunday"),
		std::pair<int, std::string>(0, "Sunday"),
		std::pair<int, std::string>(0, "Sunday"),
		std::pair<int, std::string>(0, "Sunday"),
		std::pair<int, std::string>(1, "Monday"),
		std::pair<int, std::string>(2, "Tuesday"),
		std::pair<int, std::string>(3, "Wednesday"),
		std::pair<int, std::string>(3, "�����"),
		std::pair<int, std::string>(3, "Wednesday"),
		std::pair<int, std::string>(3, "Wednesday"),
		std::pair<int, std::string>(3, "Wednesday"),
		std::pair<int, std::string>(3, "Wednesday"),
		{4, "Thursday"},
		{5, "Friday"},
		{5, "Friday"},
		{5, "�������"},
		{5, "Friday"},
		{5, "Friday"},
		{5, "Friday"},
		{5, "Friday"},
		{6, "Saturday"},
		{6, "Saturday"},
		{6, "Saturday"},
		{6, "Saturday"},
		{6, "Saturday"},
		{6, "Saturday"},
		{7, "Sunday"},
	};

	for (std::map<int, std::string>::iterator it = week.begin(); it != week.end(); ++it)
	{
		cout << it->first << tab << it->second << endl;
	}
	cout << endl;
#endif // STL_MAP


#endif // STL_MAP

	std::map<std::string, std::vector<std::string>> dictionary =
	{
		std::pair<std::string, std::vector<std::string>>("map", {"�����", "����", "�������"}),
		std::pair<std::string, std::vector<std::string>>("window", {"����", "�������"}),
		{"statement", {"�����������", "���������", "������������"}},
		{"journey", {"�����������", "�������", "����", "��������"}}
	};
	for (const auto& key : dictionary)

	//for (std::string, std::vector<std::string>>::iterator it = dictionary.begin(); it != dictionary.end(); ++it)
	{
		cout.width(16);
		cout << std::left;
		cout << key.first + ":";
		for (string it : key.second)
		//for (std::vector<std::string>::iterator jt = it->second.begin(); jt != it->second.end(); ++jt)
		{
			cout << (string)it << ", ";			
		}
		cout << "/b/b";

		cout << endl;
	}
}