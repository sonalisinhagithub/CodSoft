// C++ program to create calculator using
#include <iostream>
using namespace std;
int main()
{
	char op;
	float num1, num2;

	cout<<"Enter the operation you want to perform:"<<endl;
	cin >> op;

	// It allow user to enter the operands
    cout<<"Enter the First Number:"<<endl;
	cin >> num1;

	cout<<"Enter the Second Number:"<<endl;
	cin>> num2;

	switch (op) {
	// If user enter +
	case '+':
	    cout<<"Answer is:"<<endl;
		cout << num1 + num2;
		break;

	// If user enter -
	case '-':
	    cout<<"Answer is:"<<endl;
		cout << num1 - num2;
		break;

	// If user enter *
	case '*':
	    cout<<"Answer is:"<<endl;
		cout << num1 * num2;
		break;

	// If user enter /
	case '/':
        cout<<"Answer is:"<<endl;
		cout << num1 / num2;
		break;

	// If the operator is other than +, -, * or /,
	// error message will display
	default:
		cout << "Error! operator is not correct";
	}

	return 0;
}