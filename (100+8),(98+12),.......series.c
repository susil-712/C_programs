#include <stdio.h>
#include <math.h>
int main()
{
    int x;
    printf("Enter a number :");
    scanf("%d",&x);

    int arr[200];

    for (int y=0,z=100,a=8; y<=x; y++,z=z-2,a=a+4)
    {
        arr[y]=z+a;
        printf("%d,",arr[y]);
    }
    return 0;
}
