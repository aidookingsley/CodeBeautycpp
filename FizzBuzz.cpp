#include <iostream>
#include <vector>
#include <numeric>

int main(){
    std::vector<int> num(100);
    std::iota(num.begin(), num.end(), 1);
    for (auto i : num)
    {
        if(i % 3== 0 && i%5==0)
            std::cout << i << " is a FizzBuzz" << std::endl;
        else if (i%3 == 0)
            std::cout << i << " is a Buzz" << std::endl;
        
        else if (i%5== 0)
            std::cout << i << " is a Fizz" << std::endl;
        else
            std::cout << i << " is an ordinary number" << std::endl;
    }
    return 0;
}