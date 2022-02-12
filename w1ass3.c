#include<stdio.h>
int main(){
    int a,b;
    printf("Entr a number\n");
    scanf("%d",&a);
    b=a%2;
    switch (b)
    {
    case 0:
    printf("number is even\n");
        break;
    
    default:
    printf("number is odd\n");
        break;
    }
}