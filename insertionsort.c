#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[10],i,temp,j,key;
    //enter values for array
    printf("Enter values for arr1-");
    for(i=0;i<10;i++)
        scanf("%d",&arr[i]);
    //display
    printf("Elements befor sort\n");
    for(i=0;i<10;i++)
        printf("%d ",arr[i]);
    //sort
    for(i=1;i<10;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    //display
    printf("elements after sort");
    for(i=0;i<10;i++)
        printf("%d ",arr[i]);

}
