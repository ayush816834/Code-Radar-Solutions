#include<stdio.h>
#include<stdbool.h>
int main(){
    int n;
    scanf("%d",&n);
    bool increasing =true;
    bool decreasing =true;
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i-1]){
           increasing = false;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]<arr[i-1]){
           increasing = false;
        }
    if (increasing||decreasing){
        printf("YES");
    }
    else{
        printf("NO");
    }}
    return 0;
}
