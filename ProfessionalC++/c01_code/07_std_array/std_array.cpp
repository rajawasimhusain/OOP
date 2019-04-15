#include <iostream>
#include <array>

using namespace std;

int main()
{
	// c style array
	int myArray[5] = {2};
	cout << "C Array size = " << std::size(myArray) << endl;
	
	// c++17 style array
	array<int, 3> arr = { 9, 8, 7 };
	cout << "C++ Array size = " << arr.size() << endl;
	cout << "2nd element = " << arr[1] << endl;

	return 0;
}
