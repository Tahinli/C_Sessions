#include <stdio.h>
#include <limits.h>

int main(void)
    {
        printf("Hello World\n");
        
        int a = 0;

        switch(a)
            {
                case 0:
                printf("Our Number is 0\n");
                break;
                case 1:
                printf("Our Number is 1\n");
                break;
                case 2:
                printf("Our Number is 2\n");
                break;
                case 3:
                printf("Our Number is 3\n");
                break;
                default:
                printf("Nothing");
            }
        
    }