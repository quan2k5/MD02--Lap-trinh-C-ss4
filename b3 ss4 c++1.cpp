#include <stdio.h>
int main (){
	int so_moi,so_cu;
	printf("nhap vao chi so moi va chi so cu");
	scanf ("%d%d",&so_moi,&so_cu);
	int so_dien=so_moi-so_cu;
	if(so_dien>=0 && so_dien<50){
		printf ("gia dien la%d", so_dien*10000);
		}else if(so_dien>=50 && so_dien<100){
			printf("gia dien la%d",so_dien*15000);
		}else if (so_dien>=100 && so_dien<150){
			printf("gia dien la %d",so_dien*20000);
		}else if (so_dien>=150 && so_dien<200){
			printf ("gia dien la %d",so_dien*25000);
		}else{
			printf ("gia dien la %d",so_dien*30000);
		}
}
		
	
