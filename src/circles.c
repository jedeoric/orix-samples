#include <stdio.h>


void print (char *);

void hires();
void curset(char x,char y, char pixel);
void circle(char rayon);



int main ()
	{
	hires();
	curset(120,100,0);
	circle(50);
	return 0;
	}
