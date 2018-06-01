#include <stdio.h>

void print_hello(){
	static int i;
	++i;
	printf("Bonjour numéro %d !\n",i);
}

int main(void){
	for (int k=0;k<10;++k){
		print_hello();
	}
} 
