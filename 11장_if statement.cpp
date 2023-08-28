#include <iostream>
	#include <cmath> // math 함수
	#include <string>

	using namespace std;

	int main() 
	{
		bool isMale = true;
		// bool isMale = false;
		if (isMale) // () : condition if contents in () true ; 
		{
			cout << "You are a male." << endl;
		} 
		else 
		{
			cout << "You are not male." << endl;
		}

		bool isTall = false;
		if (isTall && !isMale) // (isTall || isMale)
		{
			cout << "You are a tall male." << endl;
		}
		else 
		{
			cout << "You are not male." << endl;
		}

		return 0;
	}
