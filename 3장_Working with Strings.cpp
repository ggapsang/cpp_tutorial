#include <iostream>

using namespace std;

int main()
{
string phrase = "Giraffe Academy";
cout << phrase[2] << endl;
phrase[0] = 'B';
cout << phrase <<endl;

cout << phrase.find("Academy", 0) << endl; // find index position
cout << phrase.substr(8, 3) << endl; //.substr(starting index, link)

return 0;
}
