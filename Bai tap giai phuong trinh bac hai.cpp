#include <stdio.h>
#include <math.h>
int main(){
	float a;
	printf("Nhap a=");
	scanf("%f",&a);
	
	float b;
	printf("Nhap b=");
	scanf("%f",&b);
	
	float c;
	printf("Nhap c=");
	scanf("%f",&c);
	
	float delta = b*b - 4*a*c;
	
	float x1;
	
	float x2;
	
	if(delta < 0){
		// chay vao day neu Yes
		printf("Phuong trinh vo nghiem");
	}else{
		if(delta == 0){
			// chay vao day neu Yes
			x1 = x2 = -b/(2*a);
			printf("Phuong trinh co nghiem kep: %.2f", x1);
		}else{
			if(delta > 0){
				// chay vao day neu Yes
				x1 = (-b + sqrt(delta))/(2*a);
                x2 = (-b - sqrt(delta))/(2*a);
                printf("Phuong trinh da cho co hai nghiem phan biet: %.2f %.2f", x1, x2);
			}
		}
	}
}
