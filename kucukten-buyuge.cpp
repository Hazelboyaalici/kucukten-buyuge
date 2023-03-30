//BUBBLE SORT


#include<stdio.h>
int main(){
	
	int s1,s2,s3,yedek;
	
	printf("3 adet tamsayý giriniz:");
	scanf("%d%d%d",&s1,&s2,&s3);
	
	if(s1>s2){
		yedek=s1;
		s1=s2;
		s2=yedek;
	}
	if(s2>s3){
		yedek=s2;
		s2=s3;
		s3=yedek;
	}
	if(s1>s2){
		yedek=s1;
		s1=s2;
		s2=yedek;
	}
	printf("%d,%d,%d",s1,s2,s3);
	
	return 0;
}
