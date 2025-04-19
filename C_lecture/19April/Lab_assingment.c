// WAP to find length of string using string len function and without string function
With strlen() function
#include <stdio.h>
#include <string.h>
int main()
{

    char str[] = "Junaid Alam";
    printf("String length : %d", strlen(str));
    return 0;
}

//Without strlen() function

#include <stdio.h>

int main()
{
    char str[] = "Krish Singhaniya";
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    printf("String length : %d", len);

    return 0;
}
