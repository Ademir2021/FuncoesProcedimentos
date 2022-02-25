#include <stdio.h>
#include <stdlib.h>

int main(){

    int num, cont;
    num=1;
    cont=0;
    do
    {
    if ((num >= 100) || (num <= 300))
    cont= cont + 1;
    }
      while (cont != 0);

    printf("A quantidade de numeros entre 100 e 300 é %d\n",num);
    printf("Voce contou ate %d", cont+num);

    return 0;
}
