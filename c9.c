#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int j;
    int amount=0;
    
        printf("Enter a number: ");
    scanf("%d", &j);
    if(j==0)
    amount=1;
    while (j!=0)
    {
    amount +=1;
    j =j / 10;

    }
    printf("it has %d digits" , amount);

     

    return 0;
}
