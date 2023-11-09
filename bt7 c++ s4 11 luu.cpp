#include <stdio.h>
int main (){
	float real_date,salary1;
	const float date= 26;
	printf("nhap vao ngay cong thuc te va luong co ban ");
	scanf ("%f %f",&real_date,&salary1);
    float date2 = (real_date-date)*1.5;
    float date3 = date-real_date;
    if(real_date>= date){
    	printf("luong cua nhan vien la %f",salary1*(date+date2)/date);
    }else{
    	printf("luong cua nhan vien la %f",salary1*(date-date3)/date);
	}
}

