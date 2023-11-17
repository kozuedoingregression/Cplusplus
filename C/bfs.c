#include <stdio.h>
#include <stdlib.h>
int visited[7];
int a[7][7];

void dfs(int i, int n)
{
    int j;
    printf("%d", i);
    visited[i] = 1;
    for (int j = 0; j < n; j++)
    {
        if a[i][j]==1 &&!visited[j])
        {
                dfs(j);
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
}
