#include<stdio.h>
int main(){
    int num,temp,reminder,sum=0;
    printf("enter the number :");
    scanf("%d", &num);
    temp = num ;
while( temp!=0){
    reminder = temp%10;
    sum = sum + ( reminder*reminder*reminder);
    temp =temp/10;

}
   if ( sum == num)
   printf ( "%d is an Armstrong number.",num);
   else 
    printf(" %d is not an armstrong number .", num);
   return 0;
}