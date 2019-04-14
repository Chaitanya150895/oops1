extern int i;
int fun1()
{
   int x = i;
x++;
printf("in fun1 %d\n",x);
printf("in fun1 %d\n",i);
return 0;
}

int fun2()
{
    int x = i;
    x--;
    printf("in fun2  %d\n",x);
    printf("in fun2  %d\n",i);
    return 0;
}