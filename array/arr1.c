#include<stdio.h>;

int size(int arr[]) {
    int size = sizeof(arr)/sizeof(arr[0]);
    return size;

}

int main(){
    int arr[] = {12,3,4,4,5,5,4,4,3};
    int ans = size(arr);
    
    printf("%d", ans);
return 0;
}