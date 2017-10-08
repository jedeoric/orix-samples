#include <stdio.h>
#include <conio.h>

int main ()
{
		
	char key;
  cursor(1);
  printf("+-------------------------------+\n");
  printf("|Reading keyboard with cursor on|\n");
  printf("+-------------------------------+\n");  
  printf("Press a key ... \n");
  key=cgetc();
  printf("Key pressed : %c\n",key);
  cursor(0);
  printf("+--------------------------------+\n");
  printf("|Reading keyboard with cursor off|\n");
  printf("+--------------------------------+\n");  
  printf("Press a key ... \n");
  key=cgetc();
  printf("Key pressed : %c\n",key);

	return 0;
}
