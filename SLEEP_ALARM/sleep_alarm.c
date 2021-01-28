#include <sys/types.h>
#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <time.h>
int got;
void onalarm(int sig)
{ printf("Будильник\n"); got++; }
void sleep_out(int n)
{
	time_t time(), start = time(NULL);
	void(*save)();
	int oldalarm, during = n;
	if(n <=0) return;
	got = 0;
	save = signal(SIGALRM, onalarm);
	oldalarm = alarm(3600);
	if(oldalarm) {
		printf( "Был заказан сиднал через %d сек\n", oldalarm);
		if(oldalarm > n) oldalarm -= n;
		else {
			during = n = oldalarm;
			oldalarm = 1;
		}
	}
	printf( "n = %d, oldalarm = %d\n", n, oldalarm);
	while( n > 0 ) {
		printf("alarm(%d)\n", n);
		alarm(n);
		pause();
		if (got) break;
		n = during - (time(NULL) - start);
	}
	printf("Alarm(%d) при выходе\n", oldalarm);
	alarm(oldalarm);
	signal(SIGALRM, save);
}

void onintr(int nsig) {
	printf("Сигнал SIGINT\n"); 
	signal(SIGINT, onintr);
}

void onOldAlarm(int nsig) {
	printf("Звонит старый будильник\n");
}

void main() 
{
	int time1 = 0;
	setbuf(stdout, NULL);
	signal(SIGINT, onintr);
	signal(SIGALRM, onOldAlarm);
	alarm(time1);
	sleep_out(10);
	if(time1) pause();
	printf("BYE\n");
}

