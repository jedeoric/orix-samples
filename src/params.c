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

//static const char *mem[65536]=(char*)NULL;    /* The whole memory */


/* PEEK, POKE, DEEK, DOKE */

#define POKE(addr,val)     (*(unsigned char*) (addr) = (val))


int main ()
	{
	unsigned int i;
	unsigned int nb;
	FILE *fp;
	char *filename="buffy.hir";
	
	printf("Null value : %d\n",NULL);
	return(1);
	
	fp=fopen(filename,"r");
	if (fp==NULL)
		{
		printf("Can't open %s\n",filename);
		return(1);
		}
	nb=fread(hires_data,8000,1,fp);
	printf("\n nb dd read : %d\n",nb);

	hires();
	
	for (i=0;i<8000;i++)
		POKE(0xa000+i,hires_data[i]);
	
	//printf("Hires ddata %c\n",hires_data[i]);
	//while(1);
	
	if (nb==8000)
		{
		printf("nb : %d\n",nb);
		}
	else 
		{
		printf("Unable to read 8000 bytes\n");
		}
	

	
	
	return 0;
	}
