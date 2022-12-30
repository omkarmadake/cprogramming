#include <stdio.h>
void main(){
    int n,i,m=0,flag=0;
    printf("Enter a number check a prime");
    scanf("%d", &n);
    m = n/2;
    for(i=2;i<=m;i++){
        if(n%10 == 0)
    {
    printf("Number is not prime");
    flag = 1;
    break;
    }
    }
    if(flag==0){
        printf("number is prime");
    }
}

