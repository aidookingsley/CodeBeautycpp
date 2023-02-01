#include<iostream>
using namespace std;
class Encap{
    private:
    //data hidden from outside world
        int number;
        public:
        // function to set value of variable x
        void set(int x){
            number = x;
        }
        //function to return value of variable x
        int get(){
            return number;
        }
};

int main(){
        Encap object;
        object.set(3);
        cout << object.get();
        return 0;
}