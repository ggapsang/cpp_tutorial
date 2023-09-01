#include <iostream>
#include <cmath> // math 함수
#include <string>

	using namespace std;

	int main() 
	{
		int secret_num = 7;
		int guess{};
		int guess_count = 0;
		int guess_limit = 3;
		bool out_of_guesses = false;

		while(guess != secret_num && !out_of_guesses)
		{
			if (guess_count < guess_limit)
			{
				cout << "Enter guess : ";
				cin >> guess;
				guess_count++;
			}
			else
			{
				out_of_guesses = true;
			}
		}

		if (out_of_guesses)
		{
			cout << "You Lose!";
		}
		else
		{
			cout << "You Win!";
		}
		
		return 0;
	}
