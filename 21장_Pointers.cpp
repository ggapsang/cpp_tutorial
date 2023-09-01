using namespace std;

	int main() 
	{
		int age = 19;
		double gpa = 2.7;
		string name = "Mike";
		int *p_age = &age;
		double* p_gpa = &gpa;
		string* p_name = &name;

		cout << p_age << endl;

		cout << "address of age : " << &age << endl;
		cout << "address of gpa : " << &gpa << endl;
		cout << "address of name : " << &name << endl;

		// dereferencing of pointer
		cout << "dereferencing of p_age : " << *p_age << endl;
		cout << "dereferencing of p_gpa : " << *&gpa << endl;

		return 0;
	}
