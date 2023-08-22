#include <iostream>
#include <cmath> // math 함수
#include <string>

using namespace std;

// get input from user
int main() 
{
	string color, plural_noun, celebrity;

	cout << "Enter a color : ";
	getline(cin, color);
	cout << "Enter a plural_noun : ";
	getline(cin, plural_noun);
	cout << "Enter a celebrity : ";
	getline(cin, celebrity);

	cout << "Rose are " << color << endl;
	cout << plural_noun << " are blue" << endl;
	cout << "I love " << celebrity << endl;

	return 0;
}
