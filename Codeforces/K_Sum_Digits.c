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
    int n,sum=0;
    scanf("%d",&n);

    char num[n];
    scanf("%s",num);
    
    for(int i = 0 ; i < strlen(num) ; i++){
        sum += num[i]-'0';
        // printf("%d\n",num[i]-'0');
    }
    printf("%d",sum);

    return 0;
}