#include <iostream>
using namespace std;

int main()
{
	char* ptr = "hello"; // Assign the string literal to a variable.
	ptr[1] = 'a'; // Undefined behavior!
	cout << ptr << endl;
	
	return 0;
}
