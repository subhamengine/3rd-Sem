#include<stdio.h>

1. Sum upto n

int help(int n){
	if(n == 0) return; 
	else return(n + help(n-1));
}
void main(){
	int n;
	printf("enter the number:\n");
	scanf("%d",&n);
	int ans = help(n);
	printf("Sum= %d",ans);
}
