#include <stdio.h>
#include <math.h>

int main(){
    int num;
    float a;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    a = sqrt(num);

    printf("A raiz de %d é %g", num, a);

    return 0;
}