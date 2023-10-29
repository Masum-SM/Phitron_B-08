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
    int k = 1,s=n;
    for(int i = 0 ; i < n ; i++){
        for(int j = s-1 ; j > 0 ; j--){
            printf(" ");
        }
        for(int j = 0 ; j < k ; j++){
            printf("*");
        }
        k=k+2;
        s--;
        printf("\n");
    }
    for(int i = 0 ; i < n ; i++){


        for(int j = 0 ; j < s ; j++){
            printf(" ");
        }
        for(int j = k-2 ; j > 0 ; j--){
            printf("*");
        }
        k=k-2;
        s++;
        printf("\n");
    }


    return 0;
}