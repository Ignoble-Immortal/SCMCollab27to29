#include <stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int a;
    a=n;
    int div1,div2,sum1=0,sum2=0;
    while(a!=0){
        div1=a%10;
        a=a/10;
        sum1=sum1+div1;
        if(sum1>9){
            div2=sum1%10;
            sum1=sum1/10;
            sum2=sum2+div2;
        }
    }
    if(sum1<=9)
    printf("%d",sum1);
    else
    printf("%d",sum2);
}