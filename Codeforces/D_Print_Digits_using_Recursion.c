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

void solve(int n){
    if(n == 0) return;
    int digit = n%10;
    
    solve(n/10);
    printf("%d ",digit);

}

int main(){
    int tc;
    scanf("%d",&tc);
    while(tc--){
        int n;
        scanf("%d",&n);
        solve(n);
        if(n == 0) printf("0");
        printf("\n");
    }

    

    return 0;
}