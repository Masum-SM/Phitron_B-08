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
    int a,b;
    scanf("%d %d",&a,&b);
    if(a-b<=0)printf("0");
    else printf("%d",a-b);
    return 0;
}