#include <iostream>
using namespace std;

class Add{
    public:
    // constructor
    Add(int a=0){
        t = a;
    }
    // interface to outside world
    void addNumb(int num){
        t += num;
    }

    int getTotal(){
        return t;
    }

    private:
    //hidden data
        int t;
};


int main(){
        Add ad;
        ad.addNumb(10);
        ad.addNumb(20);
        ad.addNumb(30);

        cout << "Total: " << ad.getTotal() << endl;
        return 0;
}
