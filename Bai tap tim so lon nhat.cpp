#include <stdio.h>
int main(){
	int a;
	printf("Nhap a=");
	scanf("%d",&a);
	
	int b;
	printf("Nhap b=");
	scanf("%d",&b);
	
	int c;
	printf("Nhap c=");
	scanf("%d",&c);
	
	if(a>b){
		// yes
		if(a>c){
			//yes
			printf("Max: %d",a);
		}else{
			//no
			printf("Max: %d",c);
		}
	}else{
		// no
		if(b>c){
			//yes
			printf("Max: %d",b);
		}else{
			//no
			printf("Max: %d",c);
	    }
    }
}
