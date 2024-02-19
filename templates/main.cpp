#include <iostream>

template <typename T>
T max(T a, T b)
{
    return (a > b) ? a : b;
}

// a more complex solutions to accommodate diferent types of variables
// for c++11 and compile it with the follwing:
// g++ -std=c++11 main.cpp -o main
template <typename T1, typename T2>
auto max2(T1 a, T2 b) -> typename std::common_type<T1, T2>::type
{
    return (a > b) ? a : b;
}

int main()
{
    std::cout << max<double>(1.2, 2) << "\n";
    // std::cout << max(1.2, 2) << "\n"; <- error
    std::cout << max2(1.2, 2) << "\n";
}