#include<stdio.h>
int main()
{
    int a , b ;
    printf("enter the number a : \n");
    scanf("%d",&a);
    printf("enter the number b :\n");
    scanf("%d",&b);
    int x ;
    x=a;
    a=b;
    printf("afer swapping nos new no. a: %d \n",a);
    b=x;
    printf("afer swapping nos new no. b:%d \n",b);
    return 0 ;

}
