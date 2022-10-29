#include <stdio.h>
#include <unistd.h>

int main()
{
    fork();
    fork();
    printf("Hello World");

    return 0;
}
