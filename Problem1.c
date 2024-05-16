#include <stdio.h>
int main(){
    int size, i, target;
    scanf("%d", &size);
    int arr[size];
    for(i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &target);
    int low = 0, high = size - 1, mid;
    while(low <= high){
        mid = (low + high) / 2;
        if(arr[mid] == target){
            printf("Index of target: %d", mid);
            return 0;
        }
        else if(arr[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    printf("Value Missing");
    return 0;
}