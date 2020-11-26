#include<stdio.h>
main()
{
	int w,h,t=0;
	printf("输入你的体重，身高：");
	scanf ("%d%d",&w,&h);
	t=w/(h*h);
	 if (t<18) 
		printf("低体重");
	else if("18<t<24")	
		printf("正常体重");
	else if("24<t<27")
		printf("超重体重") ;
	else if("t>=27")
		printf("肥胖"); 
}  

