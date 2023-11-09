#include <stdio.h>
int main (){
	int day,month,year;
	printf ("nhap vao ngay thang nam");
	scanf ("%d %d %d",&day,&month,&year);
		switch(month){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if(year>0 && day>0 && day<=31){
				printf ("hop le");
				}else{
				printf ("ko hop le");
				}
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			if(year>0 && day>0 && day<=30){
			printf ("hop le");
			}else{
			printf ("ko hop le");
			}
			break;
		case 2:
			if( year>0 && year%4==0 && day>0 && day<=29){
			printf("hop le");
			}else if( year>0 && year%4!=0 && day>0 && day<=28){
			printf (" hop le");
			}else{
				printf("khong hop le");
			}
			break;
			default:
				printf("ko hop le");
			}
}
				
				
		
		
	
