#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,

    srand(time(NULL));
    for (i=1; i<=10; i++){
    printf("dd", rand()% 99);
    }

    return 0;
}
