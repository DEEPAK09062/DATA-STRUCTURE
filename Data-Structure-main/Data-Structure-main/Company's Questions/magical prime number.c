#include <stdio.h>

int main() {
    int n, temp;
    int sum = 0, rev = 0;
    scanf("%d", &n);
    for (int i=1;i<n;i++) {
        if (n%i==0) {
            sum=sum+i;
        }
    }
    temp=n;
    while (temp) {
        rev=rev*10+temp%10;
        temp=temp/10;
    }
    printf((n%sum==0) ? " %i is Magical Prime Number \n" : " %d is not a Magical \n",n);

    return 0;
}