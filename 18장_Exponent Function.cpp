#include <iostream>
	#include <cmath> // math 함수
	#include <string>

	using namespace std;

	int power(int base_num, int pow_num)
	{
		int result = 1;
		for (int i = 0; i < pow_num; i++)
		{
			result *= base_num;
		}

		return result;
	}

	int main() 
	{
		cout << power(2, 10) << endl;
		return 0;
	}
