
#include <stdio.h>

int main() {
   int p;
   scanf("%d",&p);
   printf(p>=21?"%d has extra":"you need %d day lemon",p>=21?(p-21):(21-p));
    return 0;
}