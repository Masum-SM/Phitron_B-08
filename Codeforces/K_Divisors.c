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
    int n;
    scanf("%d",&n);
    for(int i = 1 ; i <= n ; i++){
        if(n%i==0)printf("%d\n",i);
        
    }



    return 0;
}