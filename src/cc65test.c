#include <stdio.h>
#include <conio.h>

void testing_cgetc()
{
	char key;
  printf("+-----------------------------------+\n");
  printf("|     Testing cgetc                 |\n");
  printf("+-----------------------------------+\n");
  
  cursor(1);
  
  printf("* Reading keyboard with cursor on\n");
  printf("Press a key ... \n");
  key=cgetc();
  printf("Key pressed : '%c'\n",key);
  cursor(0);

  printf("* Reading keyboard with cursor off\n");
  printf("Press a key ... \n");
  key=cgetc();
  printf("Key pressed : '%c'\n",key);  
}

void testing_goto()
{
  printf("+-----------------------------------+\n");
  printf("|     Testing conio goto functions  |\n");
  printf("+-----------------------------------+\n");
  
  printf("* testing gotox\n");
  gotox(10);
  printf("Cursor at X=10");
}

int main ()
{
  testing_cgetc();
  testing_goto();
	return 0;
}
