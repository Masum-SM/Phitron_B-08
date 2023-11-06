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
    int A[row][col],B[row][col];
    
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            scanf("%d",&A[i][j]);
        }
    }
    
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            scanf("%d",&B[i][j]);
        }
    }
    
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            printf("%d ",A[i][j]+B[i][j]);
        }
        printf("\n");
    }




    return 0;
}