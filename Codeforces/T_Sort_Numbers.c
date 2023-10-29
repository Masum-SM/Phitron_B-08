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

int solve(int a, int b, int c){
    for(int i = 0 ; i < 3 ; i++){
        if(a>b){
            int temp = a;
            a = b;
            b = temp;
        }
        if(b>c){
            int temp = b;
            b = c;
            c = temp;
        }
    }
    printf("%d\n%d\n%d\n\n",a,b,c);

}

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    solve(a,b,c);
    printf("%d\n%d\n%d",a,b,c);
    return 0;
}