/*#include<stdio.h>
int main
{
	
	return0;
}*/ 


/**//*#include<stdio.h> 
int main()
{
     ��˫�����м�����Hello World
    printf("Hello World");
    return 0; 
}*/ 


/*#include <stdio.h>
#define POCKETMONEY 10    //���峣��������ֵ
int main()
{
    // POCKETMONEY = 12;  //С��˽�������㻨Ǯ����
    printf("С�������ֵõ�%dԪ�㻨Ǯ\n", POCKETMONEY);
    return 0;  
}*/

/* #include <stdio.h>
int main()
{
    //����С�ඵ���Ǯ
    double money =12.0      ; 
    //����򳵻ؼҵķ���
    double cost =11.5       ;  
    printf("С���ܲ��ܴ򳵻ؼ��أ�"); 
    //���yС��ʹ򳵻ؼ��ˣ����nС��Ͳ��ܴ򳵻ؼ�
    printf("%c\n",money>=cost?'y':'n'                        );
    return 0;
}/**/

#include <stdio.h>
int main()
{
    int i, j, k;
    for(i=1; i<5; i++)
    {
        /* �۲�ÿ�еĿո���������ȫѭ������ */
        for(j=i; j<5; j++)  
        {
            printf(" ");    //����ո�
        }
        /* �۲�ÿ��*�ŵ���������ȫѭ������ */
        for( k=0;k<2*i-1;k++) 
        {
            printf("*");   //ÿ�������*��
        }
        printf("\n");     //ÿ��ѭ������
    }
    return 0;
}
 

