#include <stdio.h>
#include <string.h>

char *my_strcat(char *dest, const char *src) {
	char *cp = dest;
	while ( *cp)
		cp++;
	while (*cp++ = *src++);
	return dest;	 
}
int main(void){
	char mot[7] = "Bonjour";
	char mot2[5] = "salut";
	printf("%s", *my_strcat(mot, mot2));
}
