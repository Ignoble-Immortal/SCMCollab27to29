#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    int r,s=0,m=n,i=-1;
    while(m!=0){
        r=m%10;
        s+=r;
        m/=10;
        i++;
    }
    s=0;
    int p,k=i;
    int q;
    for(int j=0;j<=i;j++){
        q=1;
        p=pow(10,k);
        r=n/p;
        n%=p;
        n*=10;
        n+=r;
        for(int l=2;l<n/2;l++){
            if(n%l==0){
                q=0;
                break;
            }
        }
        if(q==1){
            printf("%d is a prime number\n",n);
        }
        else{
            printf("%d is not a prime number\n",n);
        }
    }
    return 0;
}