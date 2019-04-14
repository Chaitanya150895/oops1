#include <stdio.h>
void increament();
int main()
{
    increament();
    increament();
    increament();
    return 0;
}

void increament()
{
    auto int i = 1;
    static int j = 1;
    i = i + 1;
    j = j + 1;
    printf("%d %d\n", i, j);
}
