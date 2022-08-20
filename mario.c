#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height; //завчасно викликаємо зміну, а потім присвюємо значення
    do
    {
        height = get_int("Height: ");
    }
    while (height <= 0 || height >= 9);

    for (int i = 1; i < height + 1; i++) //зациклюється висота пірамідок
    {
        //зациклюється пустий проміжок - місце під саму пірамідку
        for (int j = 0; j < height - i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < i; k++) //зациклюється місце під саму пірамідку
        {
            printf("#");
        }
        printf("  "); //вставляється пусте місце між пірамідками
        for (int k = 0; k < i; k++) //створюється аналогічна пірамідка
        {
            printf("#");
        }
        printf("\n");
    }
}

