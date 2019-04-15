#include <iostream>
#include <initializer_list>

using namespace std;

/*
int makeSum(initializer_list<int> lst)
{
	int total = 0;
	for (int value : lst) {
		total += value;
	}
	return total;
}

double makeSum(initializer_list<double> lst)
{
	double total = 0;
	for (double value : lst) {
		total += value;
	}
	return total;
}
*/

auto makeSum(initializer_list<auto> lst)
{
	auto total = 0.0;
	for (auto value : lst) {
		total += value;
	}
	return total;
}

int main()
{
	int a = makeSum({ 1,2,3 });
	int b = makeSum({ 10,20,30,40,50,60 });
	double c = makeSum({ 1.5,2.5,3.5 });
	
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	cout << makeSum({ 1, 2, 3 }) << endl;

	return 0;
}
