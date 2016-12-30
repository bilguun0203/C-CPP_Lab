//
// Created by bilguun on 12/13/16.
//

#include <iostream>
#include <pthread.h>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

#define NUM_THREADS 5

void *PrintHello(void *threadid) {
    long tid;
    tid = (long)threadid;
    cout << "Hello World! Thread ID, " << tid << endl;
    while(true){
        cout << "Thread ID " << tid << endl;
    }
    pthread_exit(NULL);
}

int main(){
    pthread_t threads[NUM_THREADS];
    int rc;
    int i;

    for(int i=0; i<NUM_THREADS; i++){
        cout << "main() : creating thread, " << i << endl;
        rc = pthread_create(&threads[i], NULL, PrintHello, (void *)i);

        if(rc){
            cout << "Error: unable to create thread, " << rc << endl;
//            exit(-1);
        }
    }

    pthread_exit(NULL);
}