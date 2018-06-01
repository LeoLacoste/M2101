#include <stdio.h>
#include <stdlib.h>

int *create_array(int size){
	int *array = malloc (100* sizeof(int));
	for(int i=size;i>0;--i){
		array[size-i]=i;
	}
	return array;
}

void display_array(int *array, int size){
	for(int j=0;j<size;++j){
		printf("%d | ",array[j]);
	}	
}

int main(void){
	int *tab=create_array(6);
	display_array(tab,6);
}
