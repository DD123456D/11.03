#include<stdio.h>
main()
{
	int w,h,t=0;
	printf("����������أ���ߣ�");
	scanf ("%d%d",&w,&h);
	t=w/(h*h);
	 if (t<18) 
		printf("������");
	else if("18<t<24")	
		printf("��������");
	else if("24<t<27")
		printf("��������") ;
	else if("t>=27")
		printf("����"); 
}  

