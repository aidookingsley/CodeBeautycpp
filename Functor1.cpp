#include <iostream>
#include <cassert>

using namespace std;

class P{
    public:
    P(const int data) : data(data) {}
    int operator()(const int value) const{return value + data;}

    private:
    const int data;
};

int main(){
    P onePlus(1);
    assert(onePlus (2) == 3);

    P twoPlus(2);
    assert(twoPlus(2) == 4);

    return 0;
}