// Lab_08_2.cpp
// <������� ���>
// ����������� ������ �8.2
// ����������� ������� �����
// ������ 2


#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

size_t MaxLength(const string s)
{
	int k = 0;
	size_t len = 0,
		max;
	size_t start = 0,
		finish;
	while ((start = s.find_first_of("abcdefghijklmnopqrstuvwxyz0123456789", start)) != -1)
	{
		finish = s.find_first_not_of("abcdefghijklmnopqrstuvwxyz0123456789", start + 1);
		if (finish == -1)
			finish = s.length();
		len = finish - start;
		if (k == 0)
			max = len;
		k++;
		if (len > max)
			max = len;
		start = finish + 1;
	}
	return max;
}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string str;
	cout << "������ ������� �����:" << endl;
	getline(cin, str);
	cout << "������� ���������� ����� � ��� �����������: " << MaxLength(str) << " �������" << endl;
	return 0;
}
