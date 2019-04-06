#include <stdio.h>

int main (void)
    {
        int a,b;
        int* p;
        printf ("Digite um numero: ");
        scanf("%d", &a);
        printf ("Digite um numero: ");
        scanf("%d", &b);
        printf (" %d e %d \n", a, b);

        if (a > b)
            {
                p = &a;
            }
        else
            {
                p = &b; 
            }
        *p = *p -50;
       
        printf (" %d e %d \n", a, b);
        return 0;    
    }
