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
    char str1[100],str2[100];
    scanf("%s %s",str1,str2);
    int ans = strcmp(str1,str2);
    if(ans == 0) printf("%s",str1);
    else if(ans > 0) printf("%s",str2);
    else if(ans<0) printf("%s",str1);
 
 
    return 0;
}