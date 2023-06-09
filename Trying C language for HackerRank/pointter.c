#include <stdio.h>

short do_that(short p1){
    return p1--;
}

short do_this(short p1, short p2)
{
    return 2 * p1 + do_that(p2);

}

void main(int argc, char **argv)
{

    short p1 = 12;
    short p2 = 7;
    unsigned short r = do_this(p2, p1);
    printf("r:%d\n", r);

}
