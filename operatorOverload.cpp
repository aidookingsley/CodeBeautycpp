#include <iostream>
using namespace std;

class box{
    public:
    double getVolume(void)
    {
        return length * breadth * height;
    }
    void setLength(double len){
        length = len;
    }
    void setBreadth(double bre){
        breadth = bre;
    }
    void setHeight(double hei){
        height = hei;
    }


    //overload + operator to add two Box objects.
    box operator+(const box& b){
        box boxx;
        boxx.length = this->length + b.length;
        boxx.breadth = this->breadth + b.breadth;
        boxx.height = this->height + b.height;

        return boxx;
    }
    private:
        double length;
        double breadth;
        double height;
};

int main(){
        box box1;
        box box2;
        box box3;
        double volume = 0.0;

        // specification
        box1.setLength(8.9);
        box1.setBreadth(4.5);
        box1.setHeight(6.2);

        //specification
        box2.setLength(12.8);
        box2.setBreadth(14.5);
        box2.setHeight(16.2);

        //volume
        volume = box1.getVolume();
        cout << "Volume of box1 : " << volume << endl;

        //volume
        volume = box2.getVolume();
        cout << "Volume of box2: " << volume << endl;

        //Add two objects as follows:
        box3 = box1 + box2;

        //volume
        volume = box3.getVolume();
        cout << "Volume of box3: " << volume << endl;

        return 0;
}