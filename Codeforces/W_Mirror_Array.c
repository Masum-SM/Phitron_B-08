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
    int row,col;
    scanf("%d %d",&row,&col);
    int arr[row][col];
    
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i = 0 ; i < row ; i++){
        for(int j = 0, k=col-1 ; j < k ; j++,k--){
            int tmp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = tmp;
        }
    }
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}