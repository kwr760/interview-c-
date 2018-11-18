// Test.cpp : Defines the entry point for the console application.
//
#include <stdio.h>
#include <stdlib.h>

extern "C" {
extern void hasUniqueChars(char *testString);
extern int reverse(char *toReverse);
extern int reverseBetter(char *toReverse);
extern bool IsPermutation(const char *first, const char *second);

extern char *compressString(const char *string);
extern void rotateImage(int **a, int size);
extern int **Crossify(int **array, int m, int n, int a, int b);
extern void testCrossify();
extern bool isSubString(const char *s1, const char *s2);
extern bool isRotation(const char *s1, const char *s2);
extern char *addURLSpace(const char *);
}

int main(int argc, char ** argv)
{
	hasUniqueChars((char *)"abcedsdf");
	hasUniqueChars((char *)"abced");
	reverseBetter((char *)"a");
	reverseBetter((char *)"ab");
	reverseBetter((char *)"abcedsdf");
	reverse((char *)"abced");
	printf("%s\n", addURLSpace("This is Kevin    "));
	printf("%s\n", compressString("abc"));
	printf("%s\n", compressString("aaabbbbbccde"));
	int m = 10;
	int n = 5;
	int **a=(int **)malloc(m*sizeof(int *));
	for(int i=0;i<m;i++)
		a[i]=(int *)malloc(n*sizeof(int));
	for(int i=0;i<m;i++) {
		int k = 0;
		for (int j = 0; j < n; j++) {
			k++;
			a[i][j] = k;
		}
	}
	rotateImage(NULL, 4);
	testCrossify();
	isRotation("waterbottle","erbottlewat");
	return 0;
}