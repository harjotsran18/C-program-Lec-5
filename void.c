#include <stdio.h>
int mynmber = 45;
void counter(){
    static int x=1;
    x++;
    printf("%d",x);
}
int main()
{
    counter();
    counter();
    counter();
    counter();
}