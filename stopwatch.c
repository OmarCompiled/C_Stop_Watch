#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {
		int second, minute, hour, day;
		second = minute = hour = day = 0;
	while(true) {
		printf("\033[H\033[J");
		printf("%02d : %02d : %02d : %02d\n", day, hour, minute, second);
		fflush(stdout);		
		second++;
		if(second == 60) {
			minute++;
			second = 0;
		}
		if(minute == 60) {
			hour++;
			second = minute = 0;
		}
		if(hour == 24) {
			day++;
			second = minute = hour = 0;
		}
		sleep(1);
	}
}

