#include <iostream>
using namespace std;
#define DEBUG
#define MAX(a, b) (((a) > (b)) ? a : b)
int main()
{
    int i, j;
    i = 100;
    j = 50;

#ifdef DEBUG
    cout << "Trace: Start of main function" << endl;
#endif
    cout << "The maximum is " << MAX(i, j) << endl;
#undef MAX  //The #undef directive makes MAX undefined and hence not accessible
   // cout << "The maximum is " << MAX(10, 20) << endl;

#ifdef DEBUG
    cout << "Trace: End of main function" << endl;
#endif
}