#include<stdio.h>
int fib(int n){
 	if(n==1){
		return 0;
	}else if(n==2){
		return 1;
	}else{
		return fib(n-1) + fib(n-2); 
	}
}
int main(){
	int n,i;
	printf("enter the n value");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("%d",fib(i));
	}
	printf("\n");
	return 0;
}