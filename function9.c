#include <stdio.h>
void area(void)
{
    int w, h, z;
    printf("Height:");
    scanf("%d", &h);
    printf("width:");
    scanf("%d", &w);
    z = h * w;
    printf("Area of rectangle = %d", z);
}
int main()
{
    area();
    return 0;
}