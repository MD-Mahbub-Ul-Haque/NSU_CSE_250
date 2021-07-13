#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n;
    printf("enter the value of n");
    scanf("%d", &n);

    int m=5;
    int a=4;
    int s=0;
    int w=0;
    int range=1;

    while(range<=n){
        s= pow(m,2);
        w=w+s;
        m=m+a;
        a=a+2;
        range++;
    }
    printf("the sum is : %d", w);

}
