#include <stdio.h>
#include <limits.h>
#include <float.h>

int main (void)
    {
        //It's first code
        printf("Hello World\n");
        
        int a = INT_MAX;
        float f = FLT_MAX;
        double d = DBL_MAX;
        char ourChar = 65;
        printf("Our Value is = %d\n", a);
        printf("Our Value is = %f\n", f);
        printf("Our Value is = %lf\n", d);

        printf("Our Space is = %d Byte(s)\n", sizeof(a));
        printf("Our Space is = %d Byte(s)\n", sizeof(f));
        printf("Our Space is = %d Byte(s)\n", sizeof(d));

        printf("Our Value is = %c\n", ourChar);
        printf("Our Space is = %d\n", sizeof(ourChar));

        short int b = SHRT_MAX;
        long int c = LONG_MAX;
        unsigned int unsignedOne = UINT_MAX;

        printf("Our Value is = %hd\n", b);
        printf("Space is = %d Byte(s)\n", sizeof(b));


        printf("Our Value is = %ld\n", c);
        printf("Space is = %d Byte(s)\n", sizeof(c));


        printf("Our Value is = %u\n", unsignedOne);
        printf("Space is = %d Byte(s)\n", sizeof(unsignedOne));
    }
