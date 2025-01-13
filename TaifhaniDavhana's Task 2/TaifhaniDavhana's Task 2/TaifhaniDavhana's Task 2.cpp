#include <iostream>
#include <cmath>


using namespace std;

int main() {

	double number1, number2;
	double answer;
	string operations;
	const char errorSum[19] = "Undefined variable";

	cout << " Simple Calculator!!!" << endl;
	cout << "                      " << endl;

	cout << "Enter your two numbers:" << endl;
	cout << "Number 1:";
	cin >> number1;
	cout << "Enter your operation:" << endl;
	cout << "Options are(+ for Addition),(- for Subtraction),(* for Multiplication),( / for Division):";
	cin >> operations;
	cout << "Number 2:";
	cin >> number2;

	if (operations == "+") {
		answer = number1 + number2;
		cout << "The answer is:" << answer << endl;
	}
	else if (operations == "-") {
		answer = number1 - number2;
		cout << "The answer is:" << answer << endl;
	}
	else if (operations == "*") {
		answer = number1 * number2;
		cout << "The answer is:" << answer << endl;
	}
	else if (operations == "/") {
		answer = number1 / number2;
		cout << "The answer is:" << answer << endl;
	}
	else {
		cout << errorSum << endl;
	}

	return 0;


}