// WAP to find length of string using string len function and without string function

//With strlen() function

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

// Wap to copy one string into another string with string function & without string function

// With strcpy Function

#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Junaid Alam";
    char str2[20];
    strcpy(str2,str);
    printf("String 1: %s \n" , str);
    printf("String 2: %s \n" , str2);
    return 0;
}

// Without strcpy Function
#include <stdio.h>

int main()
{
    char str[] = "Krish Singhaniya";
    char str2[20];
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        str2[i] = str[i];
    }
    str2[i] = '\0';
    printf("String 1: %s \n", str);
    printf("String 2: %s \n", str2);

    return 0;
}
