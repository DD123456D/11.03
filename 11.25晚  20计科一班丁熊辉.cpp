/*#include<stdio.h>
int main
{
	
	return0;
}*/ 


/**//*#include<stdio.h> 
int main()
{
     在双引号中间输入Hello World
    printf("Hello World");
    return 0; 
}*/ 


/*#include <stdio.h>
#define POCKETMONEY 10    //定义常量及常量值
int main()
{
    // POCKETMONEY = 12;  //小明私自增加零花钱对吗？
    printf("小明今天又得到%d元零花钱\n", POCKETMONEY);
    return 0;  
}*/

/* #include <stdio.h>
int main()
{
    //定义小编兜里的钱
    double money =12.0      ; 
    //定义打车回家的费用
    double cost =11.5       ;  
    printf("小编能不能打车回家呢："); 
    //输出y小编就打车回家了，输出n小编就不能打车回家
    printf("%c\n",money>=cost?'y':'n'                        );
    return 0;
}/**/

#include <stdio.h>
int main()
{
    int i, j, k;
    for(i=1; i<5; i++)
    {
        /* 观察每行的空格数量，补全循环条件 */
        for(j=i; j<5; j++)  
        {
            printf(" ");    //输出空格
        }
        /* 观察每行*号的数量，补全循环条件 */
        for( k=0;k<2*i-1;k++) 
        {
            printf("*");   //每行输出的*号
        }
        printf("\n");     //每次循环换行
    }
    return 0;
}
 

