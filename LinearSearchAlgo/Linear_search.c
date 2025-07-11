#include<stdio.h>
int main(){
    int n,s,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&s);
    for(i=0;i<n;i++){
        if(s==arr[i]){
            printf("%d Found at index %d",s,i);
            return 0;
        }
    }
    printf("Not Found");
    return 0;
}