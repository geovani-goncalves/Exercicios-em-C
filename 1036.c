#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define RAIZ_1	1
#define RAIZ_2	2

typedef struct{
double a, b, c;
} TEq2G;

void ler(TEq2G *p) {
    scanf("%lf %lf %lf", &p->a, &p->b, &p->c);
}
double delta(TEq2G d) {
     return d.b*d.b -4*d.a*d.c;
} 
double raiz(TEq2G R, int tipo){
    double del = sqrt(delta(R));
    if(tipo == RAIZ_1) 
        return (-R.b+del)/(2*R.a);
    else 
        return (-R.b-del)/(2*R.a);
}

int main()
{
	int n,i;
	TEq2G eq;
	ler(&eq);
	
	if (eq.a==0 || delta(eq)<=0)
	    printf("Impossivel calcular\n");
	else 
	   printf("R1 = %.5lf\nR2 = %.5lf\n",raiz(eq,RAIZ_1), raiz(eq,RAIZ_2));

	return 0;
}
