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
    char chr[1000000];
    gets(chr);

    int len = strlen(chr);
    for(int i = 0 ; i <len ; i++){
        if(chr[i] == '\\')break;
        printf("%c",chr[i]);
    }




    return 0;
}