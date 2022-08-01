#include <stdio.h>
int main(){
int i,n;
int max;
max = 0;
do{
	printf("Nhap n= ");
	scanf("%d", &n);
}while(n < 0 && printf("\nSo n phai lon hon hoac bang 0 !"));
if(n == 0)
max = 0;
do{
	i = n % 10;
	if(i > max){
		max = i;
	} 
	}while(n /= 10);
	printf("\nChu so lon nhat la %d", max);
}
