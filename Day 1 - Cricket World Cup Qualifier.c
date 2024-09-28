#include <stdio.h>
int main() {
    int X;
    printf("Enter the points: ");
    scanf("%d", &X);

    if(X >= 12) {
        printf("The team has qualified");
    } else {
        printf("The team has not qualified");
    }
    return 0;
}