#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int amount=0;
    int j;
    
    printf("Enter a number: ");
    scanf("%d", &j);
    if(j!=0){
    while (j!=0)
    {
    j =j / 10;
    amount++;}}
    else
    amount=0;
    printf("it has %d digits" , amount);

     

    return 0;
}
