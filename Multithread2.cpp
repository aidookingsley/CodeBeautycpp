// Program Example for using detach() method
#include <iostream>
#include <pthread.h>
#include <unistd.h> // To include sleep function
#include <chrono>
#include <thread>
#include <ctime> // To get system time
using namespace std;

string s;
time_t Time = time(0);

void *func(void *)
{
    s = ctime(&Time);
    sleep(1); // Calls sleep function
    cout << "Child thread Created " << s << endl;
}

//main function
int main(){
    s = ctime(&Time);
    // Step 1: Declaring thread
    pthread_t t1[5];
    for (int i = 0; i < 5; ++i){
        cout << "Thread T[" << i << "] is Created " << s << endl;
        // Step 2: Calling create thread function
        pthread_create(&t1[i], NULL, &func, NULL);
        // Step 3: main thread doesn't waits for child thread to complete
        pthread_detach(t1[i]);
    }
    //Exiting after completion
    exit(EXIT_SUCCESS);
    return 0; 
}