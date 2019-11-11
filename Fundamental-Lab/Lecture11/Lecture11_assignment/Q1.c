#include <stdio.h>
float rateUSD = 1/32.86;
float rateJPY = 1/0.29;

float thb2usd(float THB)
{
    return  THB*rateUSD;
}

float thb2jpy(float THB)
{
    return THB*rateJPY;
}

int main()
{
    int n;
    scanf("%d" ,&n);
    
    float baht[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%f" ,&baht[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
    printf("%.2f " ,thb2usd(baht[i]));
    printf("%.2f\n" ,thb2jpy(baht[i]));

    }
    


    return 0;
}