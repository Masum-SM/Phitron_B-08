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
    int n,t1,t2;
    scanf("%d",&n);
    t1 = n%10;
    n = n/10;
    t2 = n%10;
    // printf("%d %d", t1,t2);
    if(t1%t2 == 0)printf("YES");
    else if(t2%t1 == 0)printf("YES");
    else printf("NO");




    return 0;
}