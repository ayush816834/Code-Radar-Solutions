#include <stdio.h>
void bubblesort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            int c= arr[j];
            if(arr[j]>arr[j+1]){
                arr[j]=arr[j+1];
                arr[j+1]=c;
            }
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    bubblesort(arr,n);
  if(n>3){ printf("%d ",arr[n-2]);}
  else if(n>2)
  printf("%d ",arr[1]);
  else
  printf("-1");
    return 0;
}