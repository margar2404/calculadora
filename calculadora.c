#include <stdio.h>

int sumar(int x, int y)
{
return x + y;
}
int restar(int x, int y)
{
return x - y;
}
int multiplicar (int x, int y)
{
return x * y;
}
int dividir (int x, int y)
{
return x / y;
}
void main(){
int x,y, opcio;
printf("Introdueix el 1r operador: ");
scanf("%d" , &x);
printf("Introdueix el 2n operador: ");
scanf("%d" , &y);
printf("Què vols fer?? (1 -> +, 2 -> -, 3 -> * i 4 -> / ): ");
scanf("%d" , &x);
if(opcio==1) printf("La suma és: %d" , sumar(x,y));
                    if(opcio==2) printf("La resta és: %d" , restar(x,y));
                                        if(opcio==3) printf("La multiplicació és: %d" , multiplicar(x,y));
                                                            if(opcio==4) printf("La divisió és: %d" , dividir(x,y));
return;
}
