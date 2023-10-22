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
    long long n,sum = 0;
    scanf("%lld",&n);
    long long arr[n+1];
    for(int i = 0 ; i < n ; i++){
        scanf("%lld",&arr[i]);
    }
    for(int i = 0 ; i < n ; i++){
        sum = sum+arr[i];
    }
    if(sum<0) sum *= -1;
    printf("%lld",sum);


    return 0;
}