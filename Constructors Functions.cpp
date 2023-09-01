#include <iostream>
#include <string>

	using namespace std;

	class Book
	{
	public:
			string title;
			string author;
			int pages;

		Book()
		{
			title = "no title";
		    author = "no author";
			pages = 0;
		}

		Book(string a_title, string a_author, int a_pages)
		{
			cout << "Creating Object " << endl;
			title = a_title;
			author = a_author;
			pages = a_pages;
		} // constructor
	};

	int main() 
	{
		Book book1("Harry Potter", "JK Rowling", 500);
		book1.title = "fake";
		Book book2("Lord of the Ring", "Tolkein", 700);
		Book book3;

		cout << book1.title << endl;
		cout << book3.title << endl;

		return 0;
	}
