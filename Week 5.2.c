#include <stdio.h>
int main()
{
    int num[10],temp;
    for (int i=0;i<10;i++)
    {
        scanf("%d", &num[i]);
    }
    for (int i=0;i<10;i++)
    {
        for (int j=0;j<10-i;j++)
        {
            if (num[j]>num[j+1])
            {
                temp = num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }
    printf("min = %d\n",num[0]);
    printf("max = %d",num[9]);
    return 0;
}