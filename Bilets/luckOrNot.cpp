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
	cout << "Введите ваш билет из шестизначных цифр: " << endl;
	cin >> ticker;
	sixNumbInTicket = ticker % 10;//Последнее 6-е число
	
	fiveNumbInTicket = ticker % 100 / 10;// 5-е число
	
	fourNumbInTicket = ticker % 1000 / 100;// 4-е число
	
	threeNumbInTicket = ticker % 10000 / 1000;// 3-е число
	
	twoNumbInTicket = ticker % 100000 / 10000;// 2-е число
	
	firstNumbInTicket = ticker % 1000000 / 100000;// 1-е число
	
	if (sixNumbInTicket + fiveNumbInTicket + fourNumbInTicket == threeNumbInTicket + twoNumbInTicket + firstNumbInTicket)
	{
		cout << "Cумма первых трех чисел вашего билета равна: " << threeNumbInTicket + twoNumbInTicket + firstNumbInTicket << endl;
		cout << "Cумма последних трех чисел вашего билета равна: " << sixNumbInTicket + fiveNumbInTicket + fourNumbInTicket << endl;
		cout << "Ваш билет счастливый!!! Поздравляем!" << endl;
	}
	else
	{
		cout << "Cумма первых трех чисел вашего билета равна: " << threeNumbInTicket + twoNumbInTicket + firstNumbInTicket << endl;
		cout << "Cумма последних трех чисел вашего билета равна: " << sixNumbInTicket + fiveNumbInTicket + fourNumbInTicket << endl;
		cout << "Ваш билет обычный, но не падайте духом, в следующий раз вам обязательно повезет ^_^" << endl;
	}
#endif
#ifdef POLINDROME
	int number, reverse = 0;
	cout << "Введите число: " << endl; cin >> number;
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
		cout << "Число полиндром!!!";
	}
	else
	{
		cout << "Это обычное число ";
	}
#endif
}
