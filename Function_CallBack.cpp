#include <iostream>
#include <cassert>
#include <vector>

// using namespace std;

class Plus
{

private:
    const int data;

public:
    Plus(const int data) : data(data) {}
    int operator()(const int value) const { return value + data; }
};

// overload the << operator for the std::vector<int> type:

std::ostream &operator<<(std::ostream &os, const std::vector<int> &v)
{
    os << "[";
    for (std::vector<int>::const_iterator it = v.begin(); it != v.end(); ++it)
    {
        if (it != v.begin())
            os << ", ";
        os << *it;
    }
    os << "]";
    return os;
}

int main()
{
    Plus one_plus(1);
    std::vector<int> test_data = {4, 2, 3, 1};

    std::transform(test_data.begin(), test_data.end(), test_data.begin(), one_plus);

    std::cout << test_data << std::endl;
}