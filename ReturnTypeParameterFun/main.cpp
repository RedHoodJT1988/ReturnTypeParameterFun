#include <iostream>
using namespace std;

void printHello();
void printNumber(int a);
int giveMe10();
int addThese(int num1, int num2);
int square(int num);

int main()
{
	int num1 = 145;
	int num2 = 679;
	int num = 45;

	printHello();
	printNumber(30);

	int someData = giveMe10();
	cout << someData << endl;

	int totalValue = addThese(num1, num2);
	cout << totalValue << endl;

	int squaredNum = square(num);
	cout << squaredNum << endl;

	return 0;
}

void printHello()
{
	cout << "Hello" << endl;
}

void printNumber(int a)
{
	cout << "The number is: " << a << endl;
}

int giveMe10()
{
	return 10;
}

int addThese(int num1, int num2)
{
	return num1 + num2;
}

int square(int num)
{
	return num * num;
}