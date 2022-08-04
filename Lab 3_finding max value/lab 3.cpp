#include<stdio.h>

int main(){
    int arr[] = {10, 30, 15, 18, 20, 35};
    int max = arr[0];
    int i, j=6, loc=1;

    printf("Given array: \n");
    for(i=0; i<j; i++){
        printf("\tarr[%d] = %d\n", i, arr[i]);
    }

    for(i=1; i<j; i++){
        if(arr[i]>max){
            max = arr[i];
            loc = i;
        }
    }
    printf("\nMax value = %d,\tLocation = %d", max, loc);

    return 0;
}