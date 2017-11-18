#include <stdio.h>

void hires();

char hires_data[8000];



/* PEEK, POKE, DEEK, DOKE */

#define POKE(addr,val)     (*(unsigned char*) (addr) = (val))


int main (int argc,char *argv[])
	{
	unsigned int i;
	unsigned int nb;
	FILE *fp;
	char *filename="/usr/share/viewhrs/e/exocet.hir";
	
	printf("Opening %s\n",filename);
	
	fp=fopen(filename,"r");
	if (fp==NULL)
		{
		printf("Can't open %s\n",filename);
		return(1);
		}
	// int fseek(FILE *stream, long int offset, int whence)		
	//fseek( fp, 7, SEEK_SET );
	nb=fread(hires_data,8000,1,fp);
	printf("\nnb of bytes read : %d\n",nb);

//	hires();
	
	for (i=0;i<8000;i++)
		POKE(0xa000+i,hires_data[i]);
	
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
