// substr.cpp

#include <chrono>
#include <fstream>
#include <iostream>
#include <random>
#include <sstream>
#include <string>
#include <vector>

#include <string_view>

static const int count = 30;
static const int access = 10000000;

int main(){

    std::cout << std::endl;

    std::ifstream inFile("grimm.txt");

    std::stringstream strStream;
    strStream <<  inFile.rdbuf();
    std::string grimmsTales = strStream.str();

    size_t size = grimmsTales.size();

    std::cout << "Grimms' Fairy Tales size: " << size << std::endl;
    std::cout << std::endl;
std::cout << "1111" << std::endl;
    // random values
    std::random_device seed;
std::cout << "1111-1" << std::endl;
    std::mt19937 engine(seed());
std::cout << "1111-2" << std::endl;
    std::uniform_int_distribution<> uniformDist(0, size - count - 2);
std::cout << "1111-3" << std::endl;
    std::vector<int> randValues;
std::cout << "1111-4" << std::endl;
    for (auto i = 0; i <  access; ++i) randValues.push_back(uniformDist(engine));
std::cout << "2222" << std::endl;
    auto start = std::chrono::steady_clock::now();
    for (auto i = 0; i  < access; ++i ) {
        grimmsTales.substr(randValues[i], count);
    }
    std::chrono::duration<double> durString= std::chrono::steady_clock::now() - start;
    std::cout << "std::string::substr:      " << durString.count() << " seconds" << std::endl;
std::cout << "3333" << std::endl;
    std::string_view grimmsTalesView{grimmsTales.c_str(), size};
    start = std::chrono::steady_clock::now();
    for (auto i = 0; i  < access; ++i ) {
        grimmsTalesView.substr(randValues[i], count);
    }
    std::chrono::duration<double> durStringView= std::chrono::steady_clock::now() - start;
    std::cout << "std::string_view::substr: " << durStringView.count() << " seconds" << std::endl;
std::cout << "4444" << std::endl;
    std::cout << std::endl;

    std::cout << "durString.count()/durStringView.count(): " << durString.count()/durStringView.count() << std::endl;

    std::cout << std::endl;

}