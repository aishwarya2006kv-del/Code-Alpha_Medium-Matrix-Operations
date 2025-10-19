#include<stdio.h>
#include<conio.h>
void readMatrix(int matrix[MAX][MAX],int rows,int cols);
void printMatrix(int matrix[MAX][MAX],int rows,int cols);
void addMatrices(int A[MAX][MAX],int B[MAX][MAX],int result[MAX][MAX],int rows,int cols);
void multiplyMatrices(int A[MAX][MAX],int B[MAX][MAX],int result[MAX][MAX],int r1,int c1,int c2);
void transposeMatrix(int matrix[MAX][MAX],int result[MAX][MAX],int rows,int cols);
int main() {
int A[MAX][MAX],B[MAX][MAX],result[MAX][MAX];
int rows1,cols1,rows2,cols2,choice;
printf("enter number of rows and columns of matrix A:");
scanf("%d%d",&rows1,&cols1);
printf("enter elements of Matrix B:\n");
readMatrix(A,rows1,cols1);
printf("enter number of rows and columns of Matrix B:");
scanf("%d%d",&rows2,cols2);
printf("enter elements of Matrix B:\n");
readMatrix(B,rows2,cols2);
do {
printf("\n---Matrix OPERATIONS---\n");
printf("1. addition\n");
printf("2. Multiplication\n");
printf("3. Transpose\n");
printf("4. Exit\n");
printf("enter your choice:");
scanf("%d",&choice);
switch(choice){
case1:
if(rows1==rows2 && cols1==cols2)
{
addMatrices(A,B,result,rows1,cols1);
printf("result of Matrix Addition:\n");
printMatrix(result,rows1,cols1);
} else{
printf("Matrix addition not possible (different dimensions)\n");
}
break;
case2:
if (cols1==rows2)
{
multiplyMatrices(A,B, result,rows1,cols1,cols2);
printf("result of Matrix Multiplication:\n");
printMatrix(result,rows1,cols2);
}
else
{
printf("Matrix multiplication not possible(incompatible dimensions)\n");
}
break;
case3:
printf("transpose of Matrix A:\n");
transposeMatrix(A,result,rows1,cols1);
printMatrix (result,cols1,rows1);
printf("transpose of Matrix B:\n");
transposeMatrix(B,result,rows2,cols2);
printfMatrix(result,cols1,rows1);
break;
case4:
printf("extisting program.\n");
break;
default:
printf("invalid choice! try again.\n");
}
}while (choice!=4);
return 0;
}
void readMatrix(int matrix[MAX][MAX],int rows,int cols)
{
for(int i=0;i<rows;i++)
{
for(int j=0;j<cols;j++)
scanf("%d",&matrix[i][j]);
}
void printMatrix(int matrix[MAX][MAX],int rows,int cols){
for(int i=0;i<rows;i++)
{
for(int j=0;j<cols;j++)
printf("%d",matrix[i][j]);
printf("\n");
}
}
void addMatrices(int A[MAX][MAX],int B[MAX][MAX], int reult[MAX][MAX],int rows,int cols){
for(int i=0;i<rows;i++)
for(int j=0;j<cols;j++)
result[i][j]=A[i][j]+B[i][j];
}
void multiplyMatrices(int A[MAX][MAX],int B[MAX][MAX],int result[MAX][MAX],int r1,int c1,int c2){
for(int i=0;i<r1;i++)
{
for(int j=0;j<c2;j++)
{
result[i][j]=0;
for(int k=0;k<c1;k++)
result[i][j]+=A[i][k]*B[k][j];
}
}
}
void transposeMatrix(int matrix[MAX][MAX],int result[MAX][MAX],int rows,int cols){
for(int i=0;i<rows;i++)
for(int j=0;j<cols;j++)
result[j][i]=matrix[i][j];
}


