#include <stdio.h>
#include <limits.h>
int main (void)
    {
        printf("Hello World\n");
        
        int a = 0;
        long int b = LONG_MAX;
        int c = !a;
        int d = (int)b;
        a++;
        a-=1; 
        
        printf("Value is = %d\n", a);
        printf("Value is = %ld\n", b);
        printf("Value is = %d\n", c);
        printf("Value is = %d\n", d);

    }