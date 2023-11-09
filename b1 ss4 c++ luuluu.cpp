#include <stdio.h>
int main(){
	int number;
	printf ("nhap vao 1 so bat ky");
	scanf ("%d",&number);
	if(number%3==0){
		if(number%5==0){
			printf("ket qua la %d",number);
		}
	}
}
