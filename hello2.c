//wap to enter a number display that is pallindrome or not
#include <stdio.h>
void main(){
    int n,t,r,rev = 0;
    printf("enter a number :");
    scanf("%d", &n);
    t = n;
    while(n >0)
    {
        r = n % 10;
        rev = (rev * 10)+r;
        n = n / 10;
 }
 if(t == rev){
    printf("pallindrome");
 }
 else {
    printf("not pallindrome");
 }
 
 


}