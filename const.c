#include <stdio.h>
#define pi 3
int mynmber = 45;
void counter(){
    static int x=1;
    const int z=23;
    x++;
    x = x*pi;
    printf("%d \n",x);
}
int main()
{
    counter();
    counter();
    counter();
    counter();
}