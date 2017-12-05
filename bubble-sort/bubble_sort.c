#include <stdio.h>
int main()
{
    int array[20],i,n,j,temp;
    printf("Enter the number of elements to be sorted: ");
    scanf("%d",&n);
    for(i=0;i<n;++i)
    {
        printf("%d Enter element: ",i+1);
        scanf("%d",&array[i]);
    }

    for(i=0;i<n-1;i++)
    for(j=0;j<n-i-1;j++)
    {
        if(array[i]>array[i+1])   /* To sort in descending order, change > to < in this line. */
        {
            temp=array[i];
            array[i]=array[i+1];
            array[i+1]=temp;
        }
    }
    printf("The sorted array is: ");
    for(i=0;i<n;++i)
         printf("%d  ",array[i]);
    return 0;
}