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
    char c;
    scanf("%c",&c);
    if(c>='a' && c<'z') printf("%c",c+1);
    else if(c == 'z')printf("a");



    return 0;
}