#include <stdio.h>
int arr[5], lastptr = 0;
int main(){
    arr[0] = 1; lastptr++;
    arr[1] = 2; lastptr++;
    arr[2] = 3; lastptr++;
    arr[3] = 4; lastptr++;
    arr[4] = 5; lastptr++;
    for(int i = 0; i <  lastptr; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    // for delete
    int item;
     printf("Which item should delete: ");
     scanf("%d", &item);
     int i, j, isFound = 0, foundIndex;
     for(i = 0; i < lastptr; i++){
        if(arr[i] == item){
            isFound = 1;
            foundIndex = i;
            break;
        }
     }
     if(isFound){
        for(i = foundIndex; i < lastptr; i++){
            arr[i] = arr[i+1];
        }
        lastptr--;
     }else{
        printf("\nItem does not found\n");
     }
    printf("\n");
    for(int i = 0; i <  lastptr; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
