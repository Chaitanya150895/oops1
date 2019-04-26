#include<stdio.h>

void sTime(int *, int *, int *);

    int main()
    {
        struct time
        {
            int hours, int minutes, int seconds;
        }t;

    int main()
    {
        struct time *pt;
        pt = &t;
        sTime(struct time);
    }

    void sTime(struct time *pt)
    {
        printf("%d", pt -> seconds)
    };

}