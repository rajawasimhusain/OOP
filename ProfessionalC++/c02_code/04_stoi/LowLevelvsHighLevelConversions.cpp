#include <iostream>
#include <string>
#include <cstddef>
#include <charconv>
#include "../../common/common.h"

using namespace std;
const int num_iteration = 10000000;

int main()
{
	double time_start = 0.0;
	double time_end = 0.0;
	
	time_start = seconds();
	char buffer[10];
	for(auto i=0; i<num_iteration; i++)
		itoa(12345, buffer, 10);	  
	time_end = seconds();
	std::cout << "Time[ms]: " << (time_end - time_start)*1000 << std::endl;
	
	time_start = seconds();
	std::string out(10, ' ');
	for(auto i=0; i<num_iteration; i++)
		auto result = std::to_chars(out.data(), out.data() + out.size(), 12345);	
	time_end = seconds();
	std::cout << "Time[ms]: " << (time_end - time_start)*1000 << std::endl;
	
	// Using C++17 structured bindings introduced in Chapter 1, you can write it as follows:
	time_start = seconds();
	std::string out2(10, ' ');
	for(auto i=0; i<num_iteration; i++)
		auto [ptr, ec] = std::to_chars(out2.data(), out2.data() + out2.size(), 12345);
	time_end = seconds();
	std::cout << "Time[ms]: " << (time_end - time_start)*1000 << std::endl;

	return 0;
}