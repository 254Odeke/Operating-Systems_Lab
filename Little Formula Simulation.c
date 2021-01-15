#include<stdio.h>

void main(){
	int n,i,j;
	float a;
	printf("Enter the time to be predicted [T(n+1)]:");
	scanf("%d",&n);
	float T[n],t[n];//array for predicted and actual times
	printf("Enter smoothing factor [Alpha]:");
	scanf("%f",&a);//float because alpha ranges from 0 to 1
	if(a<0 || a>1){
		printf("Smoothing factor should be in range of 0<=alpha<=1");
		close(1);
	}
	printf("Enter the previous times [t1,t2...]:\n");
	for(i=0;i<n-1;i++){
		printf("t%d=",i+1);
		scanf("%f",&t[i]);
	}
	printf("Give the predicted value [T1]:");
	scanf("%f",&T[0]);
	for(i=1;i<n;i++){
		T[i]=(a*t[i-1])+((1-a)*T[i-1]);
		printf("\nT[%d]=%f",i+1,T[i]);
	}
	printf("\nPredicted value for T[%d]=%f",n,T[n-1]);
}
