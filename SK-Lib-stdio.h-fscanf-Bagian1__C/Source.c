#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
	Source by CPlusPlus
	Modified For Learn by RK
	I.D.E : VS2019
*/

int main() {
	char str[80];
	float f;
	FILE* pFile;

	pFile = fopen("myfile.txt", "w+");

	fprintf(pFile, "%f %s", 3.1416, "PI");
	rewind(pFile);
	fscanf(pFile, "%f", &f);
	fscanf(pFile, "%s", str);
	fclose(pFile);
	printf("I have read: %f and %s \n", f, str);

	_getch();
	return 0;
}