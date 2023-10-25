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
    int n, c = 0;
    scanf("%d",&n);

    long long arr[n];

    for(int i = 0 ; i < n ; i++){
        scanf("%lld",&arr[i]);
    }
    long long a;
    scanf("%lld",&a);

    for(int i = 0 ; i < n ; i++){
        if(arr[i] == a){
            printf("%d",i);
            c=1;
            break;
        } 
    }
    if(c==0) printf("-1");





    return 0;
}