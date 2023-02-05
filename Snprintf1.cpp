#include <cstdio>
#include <iostream>

int main(){
    char str[100];
    int n = 42;
    snprintf(str, sizeof(str), "The value of n is %d. ", n);
    printf("%s\n", str);

    return 0;
}