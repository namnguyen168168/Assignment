#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int arr[n];
	printf("Nhap n so:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int i,min;
	for(i=0; i<n; i++){
		if(arr[i]>0){
			min = arr[i];
			break;
		}
	}
	printf("So nguyen duong nho nhat: %d",min);
}
