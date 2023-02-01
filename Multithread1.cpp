#include <iostream>
#include <pthread.h>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <ctime>
using namespace std;

string s;
time_t Time = time(0);
char *str = "Child thread";

void *func(void *str)
{
    cout << "Child thread Created: " << (char *)str << endl;
}

int main()
{
    s = ctime(&Time);

    // Step 1: Declaring thread
    pthread_t t;
    // Step 2: Calling create thread function
    pthread_create(&t, NULL, &func, (void *)str);
    /*
    Syntat for pthread_create is:
    pthread_create(threadID, attr, start_routine, arg)
    Here,
    threadID = t, arg = (void*)str, attr = NULL, start_routine = func
    */
    cout << "Main thread created" << endl;
    pthread_join(t, NULL);
    // Exiting after completion
    exit(EXIT_SUCCESS);
    return 0;
}