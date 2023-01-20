#include <stdio.h>

int main(void)
    {
        printf("Hello World\n");

        int a = 3;
        int b = 0;
        

        if((a%2)==0)
            {
                printf("Even\n");
            }
        else if(a%2)
            {
                printf("Odd\n");
            }
        else if(!(a>3)&&(b<0)&&(a||b))
            {
                printf("Our Operation\n");
            }
        else
            {
                printf("Nothing\n");
            }
        
    }