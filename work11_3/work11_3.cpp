#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
using namespace std;

int main( )
{
	int i,k,j;
	char name[] = "",str1[50];
	FILE *fp1,*fp2;

	if ((fp1 = fopen("f1.txt", "r")) == NULL) {
		cout << "File could not be opened" << endl;
		exit(1);
	}
	if ((fp2 = fopen("f2.txt", "w")) == NULL) {
		cout << "File could not be opened" << endl;
		exit(1);
	}

	while (fgets(str1, 100, fp1) != NULL)
	{
		j = strlen(str1)-2;
		for (i = 0; str1[j-i] == ' ' ; i++);
		str1[j - i + 1] = '\n';
		str1[j - i + 2] = '\0';

		for (k = 0; str1[k] == ' '; k++);
		for (i = 0; str1[i] = str1[i + k]; i++);
		fputs(str1, fp2);
	}

	fclose(fp2);
	fclose(fp1);

	system("pause");
	return 0;

}