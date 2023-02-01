#include <iostream>
using namespace std;

class printd{
    public:
    void print(int j){
        cout << "Printing int: " << j << endl;
    }
    void print(double h){
        cout << "Printing float: " << h << endl;
    }
    void print(char* b){
        cout << "Printing character: " << b << endl;
    }
};

int main(){
    printd pd;

    pd.print(4);
    pd.print(400.231);
    pd.print("Adekyensroma ");
    return 0;
}