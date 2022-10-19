#include <stdio.h>

int main(int argc, char *argv[])
{
        int i = 0;

        printf("%d\n", argc);
        while (i < argc - 1)
        {
                printf("%s",argv[i]);
        }
        return (0);
}
