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
    int k = n;
    for(int i = 0 ; i < n ; i++){
        for(int j = k ; j != 0 ; j--){
        printf("*");
    }
    k-- ;
    printf("\n");
    }





    return 0;
}