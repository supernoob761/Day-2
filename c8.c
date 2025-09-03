#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n;
    int i;
    int first = 0; 
    int second = 1; 
    int next;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Sequence: ");

    for (i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d ", first);
        } else if (i == 1) {
            printf("%d ", second);
        } else {
            next = first + second;
            printf("%d ", next);
            first = second;
            second = next;
        }
    }

    return 0;
}
