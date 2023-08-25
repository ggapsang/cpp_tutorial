#include <iostream>
#include <cmath> // math 함수
#include <string>

using namespace std;
// reuse the code in many times
string sayHi()
{
	cout << "Hello User" << endl;
	return "what the hell";
}

void sayHi2(string name, int age) 
{
	cout << "Hello " << name <<  " you are " << age << endl;
}

int main() 
{
	//calling function
	string hi;
	hi = sayHi();
	cout << hi << endl;

	sayHi2("Mike", 23);
	return 0;
}
