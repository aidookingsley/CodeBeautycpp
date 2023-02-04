#include <iostream>
#include <cassert>

using namespace std;

struct Oneplus{
    int operator() (const int value) const{
        return value + 1;
    }
};

int main(){
    Oneplus Oneplus;
    assert(Oneplus(2) ==3);

    return 0;
}