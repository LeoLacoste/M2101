double sum2 (double *tab,int size)
{
	double res;
	double res=0;
	double *fin=tab+size;
	for(double *p = tab;p<fin;++p){
		res+=*p;
	}
	printf("%f ",res);
}
