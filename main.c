#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a,const void *b)
{
    int x = *(int*) a;
    int y = *(int*) b;
    return y-x;
    /* 
        x > y  回傳任意傳正整數，
        x == y 回傳0，
        x < y  回傳任意負整數。
    */
}

int main(void)
{
    int length = 0;
    scanf("%d",&length);
    int *array = calloc(length,sizeof(int));

    for(int i = 0;i < length;i++)
    {
        scanf("%d",&array[i]);
    }

    qsort(array,length,sizeof(int),cmp);

    for(int i = 0;i < length;i++)
    {
        printf("%d ",array[i]);
    }

    return 0;
}