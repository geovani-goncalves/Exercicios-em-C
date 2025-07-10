
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void lerVetor(int v[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
}


int compint(const void *a, const void *b) {
    int ia = *(int *)a;
    int ib = *(int *)b;
    return ib - ia; 
}

int main()
{
	int n,q,pos,i;	
	int notas[200];
	while ( scanf("%d %d",&n, &q)==2 ){
		lerVetor(notas,n);
		qsort(notas,n, sizeof(int), compint); 
		for ( i=0; i<=q - 1; i=i+1 ){
			scanf("%d",&pos);
			printf("%d\n",notas[pos-1]);
		}
	}
    return 0;
}
