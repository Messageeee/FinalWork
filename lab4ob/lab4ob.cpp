#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

int main()
{
    system("chcp 1251");
    srand(time(NULL));
    //printf("Для a\n");
    /*int A[10];
    for (int i = 0; i < 10; i++) {
        A[i] = (rand() % (12 - (-15) + 1))-15;
        printf(" %d ", A[i]);
    }
    printf("\n");


    printf("Номера элементов оканчивающихсяя на 0 : \n");

    for (int j = 0; j < 10; j++) {
        if (A[j] % 10 == 0) {
            printf("%d\n", j);
        }
    }
    printf("Для b\n");
    int M[6][5];
    for (int i = 0; i < 6; i++) {
        int sum = 0;
        for (int j = 0; j < 5; j++) {
            M[i][j] = rand() % 100;
            sum += M[i][j];
            printf(" %d ", M[i][j]);
        }
        printf(" | %d", sum);
        printf("\n");
    }
    int B[6];
    int s = 0;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 5; j++) {
            s = s + M[i][j];
        }
        B[i] = s;
        s = 0;
        printf("%d ", B[i]);
    }
    
    int min = B[0], max = B[0];;
    for (int i = 1; i < 6; i++) {
        if (B[i] < min) {
            min = B[i];
        }
    }
    for (int i = 1; i < 6; i++) {
        if (B[i] > max) {
            max = B[i];
        }
    }
    printf("\n");
    printf("Колличество баллов, которое набрал спортсмен победитель : %d\n", max);
    printf("Колличество баллов, которое набрал спортсмен, занявший последнее место : %d\n", min);
    */
    int M[15][15];
    int count = 0;
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 15; j++) {
            M[i][j]= rand() % (15 - (-10) + 1) - 10;
        }
    }
    for (int i = 1; i < 15; i++) {
        for (int j = i + 1; j < 15; j++) {
            if (M[i][j] > 0) {
                count++;
            }
        }
    }
    printf("Матрица:\n");
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 15; j++) {
            printf("%3d ", M[i][j]);
        }
        printf("\n");
    }
    printf("Количество положительных элементов выше главной диагонали: %d\n", count);
    return 0;
}
