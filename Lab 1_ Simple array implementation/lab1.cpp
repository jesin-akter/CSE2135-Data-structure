
#include<stdio.h>
main()
{
    int arr[100];
    int i,j,n;
   printf("Enter the size of the list: ");
    scanf("%d",&n);
     
    for(int i = 0; i<=n-1; i++){
        printf("Enter index %d: ", i);
        scanf("%d",&arr[i]);
    }
    printf("\n\nThe total data in the list is: \n");
    for( i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");

    printf("\nEnter the position you want to delete: ");
    scanf("%d",&j);
    while(j<n)
    {
        arr[j-1]=arr[j];
        j++;
    }
    n-=1;
    printf("\n\nAfter deletion the exist data in the list is: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n\n");
    return 0;
}