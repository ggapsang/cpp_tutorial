#include <iostream>
#include <cmath> // math 함수
#include <string>

using namespace std;

// get input from user
int main() 
{
	string name;
	cout << " Enter your name : ";
	getline(cin, name);

	cout << "Hello " << name ;


	return 0;
}

#include <iostream>
#include <cmath> // math 함수
#include <string>

using namespace std;

// get input from user
int main() 
{
	int num1, num2;
	
	cout << "Enter first number : ";
	cin >> num1;

	cout << "Enter second number : ";
	cin >> num2;

	cout << num1 + num2;


	return 0;
}
