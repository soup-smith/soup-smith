#include"soup.h"

int main(){
	int a[9]={0,0,7,3,0,4,7,9,5};
	ArrOut(a,9);
	printf("\n");
	int b=1,c=2;
	swap(b,c);
	printf("%d %d",b,c);
	printf("\n");
	if(isPrime(a[6]))printf("derrr");
	printf("\n");
	sort(a,a+9);
	ArrOut(a,9);
	printf("\n");
	printf("cnt of zero:%d",count(a,a+9,0));
	printf("%d",isalpha(7));
	printf("\n");
	int t[10]={2,6,1,0,4,1,5,2,9,5};
	printf("t=");
	ArrOut(t,10);
	printf("\n");
	QuickSort(t,0,9);
	printf("Now t=");
	ArrOut(t,10);
}

