#include <iostream>
#include <cmath> // math 함수
#include <string>

	using namespace std;

	string getDayOfWeek(int day_num)
	{
		string day_name;

		switch (day_num)
		{
		case 0: 
			day_name = "Sunday";
			break;
		case 1:
			day_name = "Monday";
			break;
		case 2:
			day_name = "Tuesday";
			break;
		case 3:
			day_name = "Wednesday";
			break;
		case 4:
			day_name = "Thursday";
			break;
		case 5:
			day_name = "Friday";
			break;
		case 6:
			day_name = "Saturday";
			break;
		default :
			day_name = "Invalid number";
			break;

		}
		return day_name;
	}

	int main() 
	{
		cout << getDayOfWeek(1) << endl;
		return 0;
	}
