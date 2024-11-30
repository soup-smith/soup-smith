#include<stdio.h>
#include<math.h>//pow,sqrt
#include<ctype.h>//isalpha
#include<stdlib.h>//qsort
#include<algorithm>//sort,count
using namespace std;

//void sort(arr,arr+n);
//double pow(double base, double exponent);
//count(arr,arr+n,element);
//int isalpha(int c);

#ifndef ISPRIME_H
#define ISPRIME_H
int isPrime(int i){
	int temp;
	int ret=1;
    if(i==1){
        ret=0;
        return ret;
    }
	if (i==2){
		return ret;
	}
		if (i!=2 && i%2==0){
			ret=0;
			return ret;
		}
	for(temp=3;temp<sqrt(i)+1;temp=temp+2){
		if(i%temp==0){
			ret=0;
			return ret;
		}
	}
	return ret;
}
#endif//判断素数——————————————————————————————————————————————————

#ifndef ARROUT_H
#define ARROUT_H
void ArrOut(int *arr,int len){
	for(int i=0;i<len;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
#endif//输出数组——————————————————————————————————————————————————

#ifndef UPX_H
#define UPX_H
int upx(int i){
	int ret=1;
	while(i>1){
		ret=ret*i;
		i--;
	}
	return ret;
}
#endif//阶乘——————————————————————————————————————————————————————

#ifndef QUICKSORT_H
#define QUICKSORT_H
int Part(int *a,int low,int high){
	int i=low,j=high,pivot=a[low];
	while (i<j){
		while(i<j && a[j]>pivot){
			j--;
		}
		if(i<j){
			swap(a[i++],a[j]);
		}
		while(i<j && a[i]<pivot){
			i++;
		}
		swap(a[i],a[j--]);
	}
	return i;
}
void QuickSort(int *a,int low,int high){
	int mid;
	if(low<high){
		mid=Part(a,low,high);
		QuickSort(a,low,mid-1);
		QuickSort(a,mid+1,high);
	}
	
}
#endif//快速排序————————————————————————————————————————————————————
