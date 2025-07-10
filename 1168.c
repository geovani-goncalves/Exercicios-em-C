#include <stdio.h>
#include <string.h>

int main() {

    int i, j, casos, tam, quant;
    char leds[1001];

    scanf("%d", &casos);

    for(i=0;i<casos;i++){ 
        quant = 0; 
        scanf(" %s", leds); 
        tam = strlen(leds); 
        for(j=0;j<tam;j++){ 
            switch(leds[j]){ 
                case '1': quant += 2; break; 
                case '2': quant += 5; break;
                case '3': quant += 5; break;
                case '4': quant += 4; break;
                case '5': quant += 5; break;
                case '6': quant += 6; break;
                case '7': quant += 3; break;
                case '8': quant += 7; break;
                case '9': quant += 6; break;
                case '0': quant += 6; break;
            }
        }
        printf("%d leds\n", quant);
    }
    
    return 0;
}
