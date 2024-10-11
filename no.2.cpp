#include <stdio.h>

int main()
{
	int celcius;
	float fahrenheit, reamur;
	
	//input suhu dlm celcius
	printf("Masukan suhu dalam Celcius: ");
	scanf("%d", &celcius);
	
	//menghitung suhu dlm fahrenheit
	fahrenheit = (celcius * 9.0 / 5.0) + 32;
	
	//menghitung suhu dlm reamur
	reamur = celcius * 4.0 / 5.0;
	
	//menampilkan hasil
	printf("Suhu dalam Fahrenheit: %.2f derajat\n", fahrenheit);
	printf("Suhu dalam Reamur: %.2f derajat\n", reamur);
	
	return 0;
}