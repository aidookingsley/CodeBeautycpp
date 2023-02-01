// Program Example for using join() method  /;p
#include <iostream>
#include <pthread.h>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <ctime>
using namespace std;

string s;
time_t Time = time(0);

void *func(void *)
{
    s = ctime(&Time);
    sleep(1);
    cout << "Child thread Created " << s << endl;
};

// main function
int main()
{
    s = ctime(&Time);
    // Step 1: Declaring thread
    pthread_t t1[5];
    for (int i = 0; i < 5; ++i)
    {
        cout << "Thread T[" << i << "] is Created " << s << endl;
        // Step 2: calling create thread function
        pthread_create(&t1[i], NULL, &func, NULL);
        // Joining threads, main thread waits for child thread to complete
        pthread_join(t1[i], NULL);
    }

    // Exiting after completion
    exit(EXIT_SUCCESS);
    return 0;
}
