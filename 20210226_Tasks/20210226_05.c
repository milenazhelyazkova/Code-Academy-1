/*Задача 5 Дефинирайте потребителски тип
към масив. Инициализирайте масива, изведете на
конзолата.*/
#include <stdio.h>

typedef int ARR[3];
int main()
{
    ARR a[3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};
    for (int i = 0; i < 3; i++)
    {
        printf("[%d] {%d, %d, %d}\n", i, a[i][0], a[i][1], a[i][2]);
    }
    return 0;
}
