#include <stdio.h>
#include <conio.h>
#include <tgi.h>

  /* Driver stuff */
    static unsigned MaxX;
    static unsigned MaxY;

int main ()
{
  unsigned char x,y;

  
  
  printf("Let's switch to hires :) press a key !");
  cgetc();


  tgi_install (tgi_static_stddrv);

  tgi_init ();
  tgi_clear ();
  
  MaxX = tgi_getmaxx ();
  MaxY = tgi_getmaxy ();
  
  /* Get stuff from the driver */

  
  printf("Let's write hello in hires :) press a key !\n");
  cgetc();
  tgi_outtextxy (50,50,"hello"); 
  
  printf("Let's set a pixel :) press a key !\n");
  cgetc();
  
  tgi_setpixel(200,100);
  printf("Let's set a line :) press a key !\n");
  cgetc();
  tgi_line(1,1,100,100);
  printf("Resolution : maxx %d maxy %d\n",MaxX,MaxY );
  printf("Finished ! : ");
  printf("Press a key to return to bash");
  cgetc();
  
  tgi_done();
  
	return 0;
}
