#include <stdio.h>

using namespace std;

int sum_array(int tmp[], int n)
{
    int tmpSum = 0;

    for (int i = 0; i < n; ++i)
    {
        printf("%d\n", tmp[i]);
        tmpSum += tmp[i];
    }

    return tmpSum;
}

int main()
{

    return 0;
}