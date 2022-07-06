#include<stdio.h>
#include<math.h>
int main(){
    double a,b;
     do {
        printf("nhap a "); scanf("%d",&a);
        printf("nhap b "); scanf("%d",&b);
        if((a<0 && b<0) || (a>0 && b>0) || (a==0) || (b==0))
            printf("nhap lai");
    } while ((a<0 && b<0) || (a>0 && b>0) || (a==0) || (b==0));
     printf("nhap a "); scanf("%d",&a);
        printf("nhap b "); scanf("%d",&b);
    
    if(abs(a)>abs(b))
    printf("%f", b);
    else
        if(abs(a)<abs(b))
            printf("%f", a);
       
    return 0;
}
