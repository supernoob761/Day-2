#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int j;
    int total = 1;
    printf("pick a number for n (n!):");
    scanf("%d",&j);
    if(j==0)
    total = 1;
    else{
 for (int i = 1; i <= j; i++)
 {
    total *= i;
 }}
 printf("resault is : %d " , total);
    return 0;
}