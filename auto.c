#include <stdio.h>
int mynmber = 45;
void counter(){
    static int x=1;
    auto int y = 67;
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