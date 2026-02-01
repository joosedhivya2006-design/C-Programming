#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int temp;
    int closest;
    if(n > 0)
    {
        scanf("%d", &closest);
    }
    for(int i = 1; i < n; i++)
    {
        scanf("%d", &temp);

        if(abs(temp) < abs(closest))
        {
            closest = temp;
        }
        else if(abs(temp) == abs(closest) && temp > closest)
        {
            closest = temp;
        }
    }
    printf("%d", closest);
    return 0;
}
