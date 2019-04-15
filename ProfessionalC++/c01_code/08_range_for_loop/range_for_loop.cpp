#include <array>
#include <iostream>

using namespace std;

int main()
{
  std::array<int, 4> arr = {1, 2, 3, 4};
	for (int i : arr) {
		std::cout << i << std::endl;
	}
    
	return 0;
}
