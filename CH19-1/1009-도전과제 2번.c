// **********************************************
// 제 목 : CH19-1장 도전과제 2번
//
// 날 짜 : 2026년 10월 09일
// 작성자 : 2401486 신재명
// **********************************************


#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

#define MAX 100

int change_dir(int dir)
{
    return (dir + 1) % 4;
}

void make_array(int n, int arr[MAX][MAX])
{
    int i, j, num = 1;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            arr[i][j] = num++;
    }
}

void make_snail(int n, int arr[MAX][MAX])
{
    int dr[4] = { 0, 1, 0, -1 };
    int dc[4] = { 1, 0, -1, 0 };
    int r = 0, c = 0, dir = 0;
    int num, nr, nc;

    for (num = 1; num <= n * n; num++)
    {
        arr[r][c] = num;

        if (num == n * n)
            break;

        nr = r + dr[dir];
        nc = c + dc[dir];

        if (nr < 0 || nr >= n || nc < 0 || nc >= n ||
            arr[nr][nc] != 0)
            dir = change_dir(dir);

        r += dr[dir];
        c += dc[dir];
    }
}

void print_array(int n, int arr[MAX][MAX])
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%4d", arr[i][j]);

        printf("\n");
    }
}

int main(void)
{
    int n;
    int arr[MAX][MAX] = { 0 };

    printf("배열 크기 (1~100): ");

    if (scanf("%d", &n) != 1 || n < 1 || n > MAX)
    {
        printf("잘못된 입력입니다.\n");
        return 1;
    }

    make_array(n, arr);

    printf("\n일반 배열\n");
    print_array(n, arr);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            arr[i][j] = 0;
    }

    make_snail(n, arr);

    printf("\n달팽이 배열\n");
    print_array(n, arr);

    return 0;
}