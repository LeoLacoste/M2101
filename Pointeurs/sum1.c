double sum (double *tab, int size)
{
	double res;
	res=0;
	for(int i=0;i<size;++i){
		res+=tab[i];
	}
	printf("%f ",res);
}
