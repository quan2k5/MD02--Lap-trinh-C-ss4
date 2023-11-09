#include <stdio.h>
int main(){
	int n1,n2,n3;
	printf ("nhap vao cac so");
	scanf("%d %d %d",&n1,&n2,&n3);
	int max=n1;
	int min=n1;
	max= max>n2?max:n2;
	max= max>n3?max:n3;
	min=min<n2?min:n2;
	min=min<n3?min:n3;
    if(n2>min && n2<max){
    	printf("day so giam dan la %d%d%d",max,n2,min);
	}else if(n1>min && n1<max){
		printf("day so giam dan la %d%d%d",max,n1,min);
	}else{
		printf("day so giam dan la %d%d%d",max,n3,min);
	}	
}
