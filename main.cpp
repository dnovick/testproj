#include <iostream>
#include <vector>
//#include <algorithm>
//#include <numeric>

auto func(int b) -> int
{
    int a, c;

    switch(b) {
        case 1:
            a = b / 0;
            break;
        case 4:
            c = b - 4;
            a = b/c;
            break;

    }

    return a;
}

auto main() -> int
{
    std::cout << "Hello, Test Project! Let's try this." << std::endl;

    auto vec = std::vector<int> {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

    // auto total = std::reduce(vec.begin(), vec.end());

    // std::cout << "Vector has " << vec.size() << " elements with total: " << total << ".\n";




    return 0;
}
