#include <stdio.h>
#include <unistd.h>
#include <errno.h>

int main ()
{
    unsigned char out;
 out=mkdir("/pouet");
 printf("%d",_mappederrno (out));
}
