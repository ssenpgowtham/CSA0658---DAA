#include<stdio.h>
int main(){
	int n,i,j,a[100];
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the elements in array");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(a[i]>a[j]){
				int temp = a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("the sort array is : ");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\nThe largest element in the array is %d ",a[n-1]);
	return 0;
}