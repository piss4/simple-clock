#include <stdio.h>
#include <time.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
    while (1 == 1) {
        system("clear");
        time_t currtime = time(NULL);
        char * s_time = ctime(&currtime);
        s_time[strlen(s_time)-1] = '/0';
        printf("\n");
        printf("Current Time: %s", s_time);
        sleep(1); // wait before looping
    }
}
