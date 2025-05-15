#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int a, i;
    i = 1;
    srand(time(0));

    while (i <= 3)
    {
        a = rand();

        printf("%d \n", a);
        i += 1;
    }
    


    return 0;
}

    
