#include <stdio.h>

int main()
{
    double av1, av2;
    int i, y = 0, opcao;

    while(y == 0){ 

        i = 0;
        while(i == 0){
            scanf("%lf", &av1);
            if(av1 < 0 || av1 > 10){
                printf("nota invalida\n");
            }
            else{
                i++;
            }
        }

        i = 0;
        while(i == 0){
            scanf("%lf", &av2);
            if(av2 < 0 || av2 > 10){
                printf("nota invalida\n");
            }
            else{
                i++;
            }
        }
        printf("media = %.2lf\n", (av1 + av2) / 2);

        do {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &opcao);
        } while(opcao != 1 && opcao != 2);

        if(opcao == 1) {
            y = 0;
        } else {
            y = 1;
        }

    }
    return 0;
}
