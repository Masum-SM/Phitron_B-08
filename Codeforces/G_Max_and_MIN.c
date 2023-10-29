/* 
    |-----------------------------------------|
    |   Md.Unus Masum                         |
    |   Competitive Programmer                |
    |   GitHub : https://github.com/Masum-SM  |
    |-----------------------------------------|
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

void solve(int n, int arr[]){
    int min = arr[0];
    int max = arr[0];
    for(int i = 0 ; i < n ; i++){
        if(min>arr[i]) min = arr[i] ;
        if(max<arr[i]) max = arr[i];
    }
    printf("%d %d",min,max);
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }

    solve(n,arr);

    return 0;
}