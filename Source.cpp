#include <iostream>
using namespace std;
int main()
{
	int num1, num2, num3,num4 ;
	
	cout << "Enter your number1 -- ";
	cin >> num1;
	cout << "Enter your number2 -- ";
	cin >> num2;
	cout << "Enter your number3 -- ";
	cin >> num3;
	cout << "Enter your number4 -- ";
	cin >> num4;
	if (num1 < num2 && num1 < num3 && num1 < num4)
		cout << "The smallest number is " << num1;
	else if (num4 < num2 && num4 < num3 && num4 < num1)
		cout << "The smallest number is " << num4;
	else if (num3 < num2 && num3 < num1 && num3 < num4)
		cout <<"The smallest number is "<<  num3;
	else if (num2 < num1 && num2 < num3 && num2 < num4)
		cout << "The smallest number is " << num2;
	else
		cout << "ERROR";
	return 0;
}