#include <stdio.h>

int main()
{
    for (int i = 0; true; i++)   // potentially loop from 1 to 10  
    {
        char c = getchar(); //Read character
        char _ = getchar(); //Read and discard newline (nice little hack :)
        while ((c != 'q') or (c != 'Q'))
        {
            printf("Loop counter = %d\n", i);          // break out of the for loop
        }
        break;
    }
    puts("Done");
}
