#include<stdio.h>
int  main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++){
        scanf("%d",&arr);
    }
    int c;
    for (int i=0;i<a;i++){
        if(arr[i]>arr[i+1]){
         arr[i]=arr[i+1];
            arr[i+1]=c; 
            printf("%d\n",c); 
}
    }
    return 0;
}