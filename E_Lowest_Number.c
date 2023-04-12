#include <stdio.h>
#include <limits.h>

int main()
{
    int N, pos;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    int mn = INT_MAX;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] < mn)
        {
            mn = arr[i];
            pos = i + 1;
        }
    }
    printf("%d %d", mn, pos);

    return 0;
}