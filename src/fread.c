#include <stdio.h>

void hires();

char hires_data[8000];



/* PEEK, POKE, DEEK, DOKE */

#define POKE(addr,val)     (*(unsigned char*) (addr) = (val))


int main ()
{
	unsigned int i;
	unsigned int nb;
	FILE *fp;
	char *filename="/usr/share/viewhrs/b/buffy.hir";
	
	fp=fopen(filename,"r");
	if (fp==NULL)
	{
		printf("Can't open %s\n",filename);
		return(1);
	}
	nb=fread(hires_data,4000,1,fp);
	printf("\nnb of bytes read : %d\n",nb);

	hires();
	
	for (i=0;i<4000;i++)
		POKE(0xa000+i,hires_data[i]);
  // read again 
  nb=fread(hires_data,4000,1,fp);
  for (i=0;i<4000;i++)
		POKE(0xa000+i,hires_data[i]);
	printf("\nnb of bytes read : %d\n",nb);
  
	return 0;
}
