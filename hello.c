#include<stdio.h>
void main(){
   int n,t,r,s=0;
   printf("enter a number :");
   scanf("%d", &n);
   t = n;
   while(n > 0)
{
    r = n % 10;
    s = s +(r * r * r);
    n = n / 10;

}
if(t == s){
printf("armstrong number");
}
else{
    printf("Not armstrong number");
}
}