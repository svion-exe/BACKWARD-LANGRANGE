#include <stdio.h>
#include <math.h>

int main()
{
    printf("Input number of terms.\n");
    int n;
    scanf("%d", &n);
    printf("Input x and y values.\n");
    float x[n], y[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%f %f", &x[i], &y[i]);
    }
    printf("Input point of interpolation.\n");
    float a;
    scanf("%f", &a);
    float ans = 0;
    for (int i = 0; i < n; i++)
    {
        float p = 1;
        for (int j = 0; j < n; j++)
        {
            if (j != i)
            {
                p = p * (a - x[j]) / (x[i] - x[j]);
            }
        }
        ans = ans + p * y[i];
    }
    printf("Value of interpolation = %f", ans);
}
