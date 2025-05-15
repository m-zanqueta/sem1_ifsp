int maior(a, b){
    if (a > b){
        printf("%d", 1);
    } else {
        printf("%d", -1);
    }
    return 0;
}

int main(){
    int a, b;

    printf("Digite o número inteiro A: ");
    scanf("%d", &a);
    printf("Digite o número inteiro B: ");
    scanf("%d", &b);
    
    maior(a, b);

    return 0;
}