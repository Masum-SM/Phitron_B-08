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

int solve(char str[], int c, int i){
    if(str[i] == '\0') return c;
    if(str[i]>='A' && str[i]<='Z') str[i]= str[i]+32;
    if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') c++;
    solve (str,c,i+1);

}

int main(){
    char str[202];
    fgets(str,202,stdin);
    int c = 0;

    int ans = solve(str,c,0);
    printf("%d",ans);

    return 0;
}