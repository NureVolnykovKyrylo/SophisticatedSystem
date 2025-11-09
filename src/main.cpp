#include <iostream>
#include "math/simple_math.h"

int main() {
    std::cout << "Welcome to the Simple C++ App!" << std::endl;

    int x = 5;
    int y = 10;
    
    int sum = add(x, y);
    int subdraction_res = subtract(x, y);
    bool is_even_res = is_even(x);

    std::cout << "The sum of " << x << " and " << y << " is " << sum << std::endl;
    std::cout << "The subtraction result of " << x << " and " << y << " is " << subtract << std::endl;
    std::cout << "Is " << x << " even? -> " << is_even << std::endl;
    
    return 0;
}