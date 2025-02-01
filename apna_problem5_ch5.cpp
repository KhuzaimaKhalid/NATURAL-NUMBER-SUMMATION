#include<stdio.h>
int sum(int n);

int main()
{
	printf("\t NATURAL NUMBER SUMMATION \n");
	int j;
	printf("\n enter an integer: ");
	scanf("%d", &j);
	printf("the sum of %d to n natural number is %d",j,sum(j));

	return 0;
}
int sum(int n){
	if(n == 1){
		return 1;
	}
   int sumN1 = sum(n-1);
   int sumN = sumN1 + n;
   return sumN;
}
