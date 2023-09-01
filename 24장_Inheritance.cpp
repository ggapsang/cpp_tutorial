#include <iostream>
	#include <string>

	using namespace std;

	class Chef
	{
	public:
		void makeChicken()
		{
			cout << "The chef makes chicken." << endl;
		}
		void makeSalad()
		{
			cout << "The Chef makes salad" << endl;;
		}
		void makeSpecialDish()
		{
			cout << "The chef makes bbq ribs" << endl;
		}
	};

	class italianChef : public Chef
	{
	public :
		void makePasta()
		{
			cout << "The italian chef makes Pasta" << endl;
		}
		void makeSpecialDish()
		{
			cout << "The chef makes pasta parm." << endl;
		}
	};

	int main() 
	{
		Chef chef;
		chef.makeChicken();

		italianChef italian_chef;
		italian_chef.makeChicken();
		chef.makeSpecialDish();
		italian_chef.makeSpecialDish();

		return 0;
	}
