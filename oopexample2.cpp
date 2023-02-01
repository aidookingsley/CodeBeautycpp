#include <iostream>
using namespace std;

// Class - Base
class shape
{
public:
    void setWidth(int w)
    {
        wd = w;
    }
    void setHeight(int h)
    {
        hg = h;
    }

protected:
    int wd;
    int hg;
};

//Base class
class paintcost{
    public:
    int getCost(int ar){
        return ar * 30;
    }
};

// Derived class
class rect : public shape, public paintcost
{
public:
    int getArea()
    {
        return (wd * hg);
    }
};

int main(){
    rect r;
    int ar;

    r.setWidth(7);
    r.setHeight(8);

    ar = r.getArea();

    //print the area
    cout << "The Total area: " << r.getArea() << endl;

    //print the total cost
    cout << "The Total paint cost: " << r.getCost(ar) << endl;
    return 0;
}