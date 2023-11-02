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
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a+b*c == d)printf("YES");
    else if(a-b*c == d)printf("YES");

    else if(a+b-c == d)printf("YES");
    else if(a-b+c == d)printf("YES");

    else if(a*b-c == d)printf("YES");
    else if(a*b+c == d)printf("YES");
    else printf("NO");



    return 0;
}