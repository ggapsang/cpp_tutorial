#include <iostream>
	#include <cmath> // math 함수
	#include <string>

	using namespace std;

	double cube(double num)
	{
		double result = num*num*num;
		return result;
		// return num * num * num 역시 같은 결과
	}

	int main() 
	{
		double answer = cube(5.0);
		cout << answer;

		return 0;
	}
