
#include<stdio.h>
int main(){
    int a,b,c,num,i;
    printf(" enter the number of terms : ");
    scanf("%d", &num);
    if(num==1)
    printf( "nth term =%d", a);
    else
    if(num==2)
    printf("nth term=%d",b);
    else {
    a = 0;
    b = 1 ;
    for( i = 3;i <=num; i++){
        
        c = a + b;
        a=b;
        b=c;
    }
printf(" nth term =%d ", b);
    }
   return 0 ;

}