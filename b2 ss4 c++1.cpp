#include <stdio.h>
int main(){
	float c1,c2,c3;
	printf ("nhap cac canh cua hinh tam giac ");
	scanf ("%f %f %f",&c1,&c2,&c3);
	if(c1+c2>c3 && c2+c3>c1 && c1+c3>c2){
			if(c1==c2&&c2==c3){
				printf ("tam giac deu");
			}
			else if (c1==c2||c2==c3||c1==c3){
			if(c1*c1+c2*c2==c3*c3 || c2*c2+c1*c1==c3*c3 || c3*c3+c1*c1==c2*c2){
				printf ("tam giac vuong can");
			}else{
				printf("tam giac can");
			}
			}
			else if(c1*c1+c2*c2==c3*c3 || c2*c2+c3*c3==c1*c1 || c3*c3+c1*c1==c2*c2){
				printf ("tam giac vuong");
			}
			else{
				printf ("tam giac thuong ");
			}
			}
			else{
				printf ("khong co tam giac");
			}			
		}
		

			
			
		

		
		
	

