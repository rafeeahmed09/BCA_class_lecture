// # Find Length of String

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello, world!";
    int length = (str);
    printf("Length of the string is: %d\n", length);
    return 0;
}
// # W.A.P to initialised String Statically
#include <stdio.h>
#include <string.h>
int main()
{

    int a = 10, b = 20;

    printf("\n a= %d", a);
    printf("\n b= %d", b);
    swap(&a, &b);
    printf("\n a= %d", a);
    printf("\n b= %d", b);

    int c;
    c = a;
    a = b;
    c = a;

    printf("%d %d", a, b);
    return 0;
}
