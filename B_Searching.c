#include <stdio.h>
int main()
{
    int N, X;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &X);
    int pos = -1;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == X)
        {
            pos = i;
            break;
        }
    }

    printf("%d", pos);

    return 0;
}