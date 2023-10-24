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

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n];
    int cnt[100000] = {0};
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0 ; i < n ; i++){
        cnt[arr[i]]++;
        
    }
    for(int i = 1 ; i <=m ; i++){
        printf("%d\n",cnt[i]);
    }



    return 0;
}