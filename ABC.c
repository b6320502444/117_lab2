#include <stdio.h>
int main()
{
    int a, b, c, x;
    char str[4];
    int num[3];
    scanf( "%d %d %d", &a, &b, &c );
    if ( a > b )
    {
        x = a;
        a = b;
        b = x;
    }
    if ( a > c )
    {
        x = a;
        a = c;
        c = x;
    }
    if ( b > c )
    {
        x = b;
        b = c;
        c = x;
    }
    scanf( "%s", str );
    for (int i=0; i<3; ++i )
    {
        if      ( str[i] == 'A' ) num[i] = a;
        else if ( str[i] == 'B' ) num[i] = b;
        else if ( str[i] == 'C' ) num[i] = c;
    }
    printf( "%d %d %d\n", num[0], num[1], num[2] );

    return 0;
}
