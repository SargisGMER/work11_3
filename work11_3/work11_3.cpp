#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
using namespace std;

int main( )
{
	int i,j;
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


	for (i = 1; i <= 5; i++)
	{
		fgets(str1, 50, fp1);
		cout << str1 << endl;
		int k = strlen(str1)-1;
		for (j = 0; (str1[j] = str1[j+1]) && (str1[k-1] = '\n') && (str1[k]='\0'); j++);
		fputs(str1, fp2);
	}

	fclose(fp2);
	fclose(fp1);

	system("pause");
	return 0;

}