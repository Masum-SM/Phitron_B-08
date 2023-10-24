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
    char str[10000000];
    scanf("%s",str);
    int arr[10000000];
    for(int i = 0 ; i < strlen(str) ; i++){
        arr[str[i]-'a']++;
    }

    for(int i = 'a' ; i <='z' ; i++){
        if(arr[i-'a']>0)
        printf("%c : %d\n",i,arr[i-'a']);
    }



    return 0;
}