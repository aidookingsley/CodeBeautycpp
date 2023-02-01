#include <iostream>
using namespace std;

class Add{
    public:
    // constructor
    Add(int a=0){
        total = a;
    }

    //interface
    void addNum(int numb){
        total += numb;
    }

    //interface
    int getTotal(){
        return total;
    };

    private:
    //hidden data
        int total;
};

int main() {
        Add ad;

        ad.addNum(20);
        ad.addNum(23);
        ad.addNum(14);

        cout << "Total: " << ad.getTotal() << endl;
        return 0;
}