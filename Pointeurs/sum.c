#include <stdio.h>

double sum1 (double *tab, int size)
{
        double res;
        res=0;
        for(int i=0;i<size;++i){
                res+=tab[i];
        }
        return res;
}

double sum2 (double *tab2,int size2)
{
        double res2;
        res2=0;
        double *fin=tab2+size2;
        for(double *p = tab2;p<fin;++p){
                res2+=*p;
        }
        return res2;
}

int main (void) {
	double somme1;
	somme1=0;
	double somme2;
	somme2=0;
	double tab[5]={100, 10, 1, 0.1, 0.01};
	somme1=sum1(tab,5);
	somme2=sum2(tab,5);
	printf("%f ",somme1);
	printf("%f ",somme2);
}
