#include <iostream>
using std::cin;
using std::cout;
using std::endl;
//#define LUCKYTICKER
#define POLINDROME
void main()
{
	setlocale(LC_ALL, "");

#ifdef LUCKYTICKER
	int ticker,sixNumbInTicket, fiveNumbInTicket, fourNumbInTicket, threeNumbInTicket, twoNumbInTicket, firstNumbInTicket;
	cout << "������� ��� ����� �� ������������ ����: " << endl;
	cin >> ticker;
	sixNumbInTicket = ticker % 10;//��������� 6-� �����
	
	fiveNumbInTicket = ticker % 100 / 10;// 5-� �����
	
	fourNumbInTicket = ticker % 1000 / 100;// 4-� �����
	
	threeNumbInTicket = ticker % 10000 / 1000;// 3-� �����
	
	twoNumbInTicket = ticker % 100000 / 10000;// 2-� �����
	
	firstNumbInTicket = ticker % 1000000 / 100000;// 1-� �����
	
	if (sixNumbInTicket + fiveNumbInTicket + fourNumbInTicket == threeNumbInTicket + twoNumbInTicket + firstNumbInTicket)
	{
		cout << "C���� ������ ���� ����� ������ ������ �����: " << threeNumbInTicket + twoNumbInTicket + firstNumbInTicket << endl;
		cout << "C���� ��������� ���� ����� ������ ������ �����: " << sixNumbInTicket + fiveNumbInTicket + fourNumbInTicket << endl;
		cout << "��� ����� ����������!!! �����������!" << endl;
	}
	else
	{
		cout << "C���� ������ ���� ����� ������ ������ �����: " << threeNumbInTicket + twoNumbInTicket + firstNumbInTicket << endl;
		cout << "C���� ��������� ���� ����� ������ ������ �����: " << sixNumbInTicket + fiveNumbInTicket + fourNumbInTicket << endl;
		cout << "��� ����� �������, �� �� ������� �����, � ��������� ��� ��� ����������� ������� ^_^" << endl;
	}
#endif
#ifdef POLINDROME
	int number, reverse = 0;
	cout << "������� �����: " << endl; cin >> number;
	int buffer = number;
	while (buffer)
	{
		reverse *= 10;
		reverse += buffer % 10;
		buffer /= 10;
	}

	cout << number << endl;
	cout << reverse << endl;
	if (reverse == number)
	{
		cout << "����� ���������!!!";
	}
	else
	{
		cout << "��� ������� ����� ";
	}
#endif
}
