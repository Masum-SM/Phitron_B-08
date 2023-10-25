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
    char chr[100003];
    fgets(chr,100003,stdin);
    int len = strlen(chr);
    for(int i = 0 ; i < len ; i++){
        if(chr[i] == ',') chr[i] = ' ';
        if(chr[i]>='a' && chr[i]<='z'){
            chr[i] = chr[i]-32;
        }
        else if(chr[i]>='A' && chr[i]<='Z'){
            chr[i] = chr[i]+32;
        }
    }
    printf("%s",chr);



    return 0;
}