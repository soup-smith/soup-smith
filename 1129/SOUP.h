#include<stdio.h>
#include<math.h>
#include<alg.h>

#ifndef ISPRIME_H
#define ISPRIME_H
//判断素数————————————————————————————————————————————————————————
int isprime(int i){
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
//输出数组————————————————————————————————————————————————————————
