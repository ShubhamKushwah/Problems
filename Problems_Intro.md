#Problems
==============
```
#include <stdio.h>

int main() {
    int a=0, b=1, c=0, len;
    printf("Enter the length of Fibonacci Series : ");
    scanf("%d", &len);
    len=len-2;
    printf("%d %d ", a, b);
    while(len){
    c=a+b;
    a=b;
    b=c;
    printf("%d ", c);
    len--;
    }
    return 0;
}

```
