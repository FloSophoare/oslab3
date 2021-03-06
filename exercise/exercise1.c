#include "stdio.h"
#include "unistd.h"
#include "stdlib.h"
int main(void) {
    int data = 0;    

    int ret = fork();
    int i = 8;
    printf("pid = %d\n", ret);
    if (ret == 0) {
        data = 2;
        while( i != 0) {
            i --;
            printf("Child Process: Pong %d, %d;\n", data, i);
            //sleep(1);
            sleep(10);
        }
        exit(0);
    }
    else if (ret != -1) {
        data = 1;
        while( i != 0) {
            i --;
            printf("Father Process: Ping %d, %d;\n", data, i);
            sleep(10);
        }
        exit(0);
    }

    return 0;
}
