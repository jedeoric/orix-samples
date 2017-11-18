#include <stdio.h>


void print (char *);

void hires();
void oups();
void ping();
void zap();
void shoot();
void explode();

void paper(char color);
void ink(char color);

void kbdclick1();

char hires_data[8000];

void curset(char x,char y);
void circle(char rayon);

int main ()
	{
	int i;
	int nb;
	FILE *fp;

	fp=fopen("toto.txt","r");
	nb=fread(hires_data,8000,1,fp);

	//hires();
	print("Hello world !");
	
	for (i=0;i<7;i++)
	{
		printf("i:%d\n",i);
	
	//	kbdclick1();
	}
	
	explode();
	
	return 0;
	}
