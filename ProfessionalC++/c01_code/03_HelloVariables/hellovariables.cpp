// NOTE: Most compilers will issue a warning or an error
// when code is using uninitialized variables. Some compilers
// will generate code that will report an error at run time.

#include <iostream>
#include <cstddef>
using namespace std;

int main()
{
	int uninitializedInt;
	int initializedInt = 7;

	cout << uninitializedInt << " is a random value" << endl;
	cout << initializedInt << " was assigned an initial value" << endl;

	cout << "sizeof bool is " << sizeof(bool) << endl;
	
	std::byte initializedByte {10};
	std::byte uninitializedByte;
	//cout << uninitializedByte << " is a random std::byte" << endl;
	cout << initializedByte << " was assigned an initial value" << endl;
	
	return 0;
}
