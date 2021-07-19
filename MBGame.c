#include <stdio.h>

int main()
{
    int array[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    int i, j, a, b, end = 0, m, X, Y, r = 0, t = 0;
    while (1)
    {
        printf("→行入力:");
        scanf("%d", &a);
        printf("↓列入力:");
        scanf("%d", &b);

        if (array[a-1][b-1] == 0 && t == 0)
        {
            array[a-1][b-1] = 1;
            t = 1;
            r++;
        }
        else if((array[a-1][b-1] == 1 && t == 1)){
            printf("既に〇が入ってます\nXの方は、もう一度入力してください\n\n");
            printf("→行入力1:");
            scanf("%d", &a);
            printf("↓列入力:");
            scanf("%d", &b);
            array[a-1][b-1] = 2;
            t = 0;
        }
        if (array[a-1][b-1] == 0 && t == 1)
        {
            array[a-1][b-1] = 2;
            t = 0;
            r++;
        }
        else if((array[a-1][b-1] == 2 && t == 0)){
            printf("既にXが入ってます\n〇の方は、もう一度入力してください\n\n");
            printf("→行入力2:");
            scanf("%d", &a);
            printf("↓列入力:");
            scanf("%d", &b);
            array[a-1][b-1] = 1;
            t = 1;
        }

        if (r < 10)
        {
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    if (array[i][j] == 0)
                        printf("　");
                    if (array[i][j] == 1){
                        printf("O");
                        if (array[0][j] == 1 && array[1][j] == 1 && array[2][j] == 1)
                            end = 1;
                        if (array[i][0] == 1 && array[i][1] == 1 && array[i][2] == 1)
                            end = 1;
                        if (array[0][0] == 1 && array[1][1] == 1 && array[2][2] == 1)
                            end = 1;
                        if (array[0][2] == 1 && array[1][1] == 1 && array[2][0] == 1)
                            end = 1;
                    }
                    if (array[i][j] == 2){
                        printf("×");
                        if (array[0][j] == 2 && array[1][j] == 2 && array[2][j] == 2)
                            end = 1;
                        if (array[i][0] == 2 && array[i][1] == 2 && array[i][2] == 2)
                            end = 1;
                        if (array[0][0] == 2 && array[1][1] == 2 && array[2][2] == 2)
                            end = 1;
                        if (array[0][2] == 2 && array[1][1] == 2 && array[2][0] == 2)
                            end = 1;
                    }
                }
                printf("\n");
            }
        }
        if (r == 9 || end == 1){
            printf("\nゲーム終了!!\n");
            break;
        }
    }
    return 0;
}
