#include <stdio.h>

int main (void)
{
    float km = 1.6, milha, vel;

    printf ("Informe a velocidade em milhas:\n");
    scanf("%f",&milha);

    vel = (milha * km);

    if ((vel > 80) && (vel < 100))
    {
        printf("Velocidade de %f p/h.\n",vel);
        printf("Mantenha!");
    }
    else if (vel > 100)
    {
        printf("Velocidade de %f p/h.\n",vel);
        printf("Desacelere!");
    }
    else
    {
        printf("Velocidade de %f p/h.\n",vel);
        printf("Acelere!");
    }
    return 0;
}
