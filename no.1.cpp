#include <stdio.h>
#include <math.h>

int main()
{
	float alas, tinggi, sisi_miring, luas, keliling;
	
	printf("Masukan panjang alas segitiga (cm): ");
	scanf("%f", &alas);
	printf("Masukan tinggi segitiga (cm): ");
	scanf("%f", &tinggi);
	
	//menghitung luas
	luas = 0.5 * alas * tinggi;
	
	//menghitung sisimiring (menggunkan teorema pytagoras)
	sisi_miring = sqrt((alas / 2) * (alas / 2) + tinggi * tinggi);
	
	//menghitung keliling segitiga
	keliling = alas + 2 * sisi_miring;
	
	printf("Luas Segitiga: %.2f cm^2\n", luas);
	printf("Keliling Segitiga: %.2f cm^2\n", keliling);
	
	return 0;
}