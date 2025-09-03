#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int j;
    int i=0;
    int total=0;
    
        printf("Enter a number: ");
    scanf("%d", &j);
    while (i!=j)
    {
     total+=i*(i+1)/2;

    }
    printf("%d",total);
    return 0;
}