#include<stdio.h>
int main(){
    int n;
    int max = -1;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){ 
        if (arr[i]%2==0){
        if(max=-1||arr[i]>max){
            max=arr[i];
            }
        }
        
    }printf("%d",max);
    return 0;
}