#include <stdio.h>#include <stdio.h>

int main ()
{
   
    float peso, altura, IMC;
    printf("\n\n Calderon Vázquez Adolfo Angel");
    printf("\n\n Programa 4");
    printf("\n\n Calcular el indice de masa corporal");
    printf("\n\n Dame el peso");
    scanf("%f", &peso);
    printf("\n\n Dame la altura");
    scanf("%f", &altura);
    IMC= peso /(altura*altura);
    printf("\n lA MASA MUSCULAR ES %f", IMC);
    
    return 0;