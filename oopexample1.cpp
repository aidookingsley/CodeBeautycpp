#include <iostream>
using namespace std;

//Class - BAse
class shape{
    public:
    void setWidth(int w){
        wd = w;
    }
    void setHeight(int h){
        hg = h;
    }
    protected:
        int wd;
        int hg;
};

//Derived class
class rect: public shape{
    public :
    int getArea(){
        return (wd * hg);
    }
};

int main (void){
    rect r;

    r.setWidth(5);
    r.setHeight(7);

    cout << "The Total area: " << r.getArea() << endl;
}