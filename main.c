#include <stdio.h>

int sum(int n[],int size){
    if(size==0)return ;
    int small_sum=sum(n,size-1);
    return small_sum + n[size-1];}

int main()
{
    int a[5]={1,2,3,4,5};
    printf("Total : %d",sum(a,5));

    return 0;
}
