#include<stdio.h>
int main()
{
     int i,j, n=5, arr[100];
     printf("Enter the size of the Array: ");
    scanf("%d",&n);
    for(int i = 0; i<=n-1; i++){
        printf("Enter values %d: ", i);
    scanf("%d",&arr[i]);
    }
    
    printf("The total given array data is: ");
     for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n\nEnter the data to search: ");
    scanf("%d",&j);
    for(i=0;i<n;i++)
        if(j==arr[i])
    {
       printf("\nFound\n");
       
    }
    printf("\nNot Found\n");
    return 0;
}