#include <iostream>
using namespace std;
// template <typename T>
template <class T>
void Swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
// void Swap(char &a, char &b)
// {
//     char temp = a;
//     a = b;
//     b = temp;
// }

int main()
{
    int a = 5, b = 7;
    cout << a << " - " << b << endl;
    Swap<int>(a, b);
    cout << a << " - " << b << endl;

    char c = 'c', d = 'd';
    cout << c << " - " << d << endl;
    Swap<char>(c, d);
    cout << c << " - " << d << endl;
    string ade = "Adekyensroma", od = "Oduahoma";
    cout << ade << " - " << od << endl;
    Swap<string>(ade, od);
    cout << ade << " - " << od << endl;
    return 0;
}