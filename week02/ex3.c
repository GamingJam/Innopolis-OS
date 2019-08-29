#include <stdio.h>

int main(){
    
    int choice;
    printf("0 - triangle\n");
    printf("1 - triangle\n");
    printf("2 - rectangle\n");
    printf("3 - triangle\n");
    printf("Choice number from 0 to 3:\n");
    scanf("%d", &choice);
    int n;
    printf("Enter N:\n");
    scanf("%d", &n);
    int max_width = 2 * n - 1;


    switch (choice)
    {
        case 0:
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < i + 1; j++)
                {
                    printf("*");
                }
                printf("\n");
            }
            break;
        case 1:
            for (int i = 0; i < n / 2; i++)
            {
                for (int j = 0; j < i + 1; j++)
                {
                    printf("*");
                }
                printf("\n");
            }

            for (int i = n / 2; i < n; i++)
            {
                for (int j = 0; j < n - i; j++)
                {
                    printf("*");
                }
                printf("\n");
            }

            break;
        case 2:
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    printf("*");
                }
                printf("\n");
            }
            break;
        case 3:
            for (int i = 0; i < n; i++)
            {
                int width = 2 * (i + 1) - 1;
                int offset = (max_width - width) / 2;
                char line[max_width + 1];

                int index = 0;

                for (int j = 0; j < offset; j++)
                {
                    line[index] = ' ';
                    index++;
                }

                for (int j = 0; j < width; j++)
                {
                    line[index] = '*';
                    index++;
                }

                for (int j = 0; j < offset; j++)
                {
                    line[index] = ' ';
                    index++;
                }

                line[max_width] = '\0';
                printf("%s\n", line);
            }
            break;
      }
}