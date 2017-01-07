#include <stdio.h>

int main () {
int max=0, n=0, number,i;
for (i=0;i<n;i++) {
    scanf("%d",&number);
    if (number>max) {
        max=number;
    }
}
printf("%d is the biggest number",&max);
return 0;
}
