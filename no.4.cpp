#include <stdio.h>

int main()
{
	int bilangan;
	
	printf("Masukan sebuah bilangan bulat positif: ");
	scanf("%d", &bilangan);
	
	//pemeriksa ganjil apa genap?
	if (bilangan % 2 == 0){
		printf("GENAP\n");
	} else {
		printf("GANJIL\n");
	}
	
	return 0;
}