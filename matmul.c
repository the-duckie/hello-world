#include <stdio.h>
int main(){
    int r1,c1,r2,c2;
    printf("\nEnter number of rows and columns in matrix 1 ");
    scanf("%d %d",&r1,&c1);
    printf("\n");
    printf("\nEnter number of rows and columns in matrix 2 ");
    scanf("%d %d",&r2,&c2);
    printf("\n");
    if(c1!=r2){
        printf("Invalid number of rows and columns");
        return 0;
    }
    int num1,num2;
    int m1[r1][c1];
    int m2[r2][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d ",&num1);
            m1[i][j]=num1;
        }
        printf("\n");
    }
   
    printf("\n");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d ",&num2);
            m2[i][j]=num2;
        }
        printf("\n");
    }
    
    int temp=0;
    int m3[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<c1;k++){
                temp+=m1[i][k]*m2[k][j];
            }
            m3[i][j]=temp;
            temp=0;
        }
    }
    printf("Multiplied matrix is:\n");
    int temp2;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            temp2=m3[i][j];
            printf("%d ",temp2);
        }
        printf("\n");
    }

    
    
    return 0;
}
