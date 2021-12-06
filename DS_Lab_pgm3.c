#include<stdio.h>

int main(){
    long long a, b;
    // a and b contains atleast 10 digits each. 
    scanf("%lld %lld", &a, &b);

    printf("SUM --> %lld\n", a+b);
    printf("DIFFERENCE --> %lld\n", a-b);
}