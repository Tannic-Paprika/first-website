#include<stdio.h>

int binary(int);

int main(){
    int d,b;
    printf("enter the decimal number:\n");
    scanf("%d",&d);

    b=binary(d);
    printf("the binary number is:%d\n",b);

    return 0;
}
int binary(int d){
    int b=0,rem,f=1;
    while(d!=0){

        rem=d%2;
        b=b+ rem*f;
        f=f*10;
        d=d/2;
    }
    return b;
}