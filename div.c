#include <stdio.h>
#include <stdlib.h>

// Divisão
int main(int argc, char * argv[])
{
    long a = strtol(argv[1], NULL, 10);
    long b = strtol(argv[2], NULL, 10);
    
    printf ("%ld", a/b);
    return 0;
}
