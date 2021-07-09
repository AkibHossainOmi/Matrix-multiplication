#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<conio.h>
int main()
{
    int i,j,k,l,c1,r1,c2,r2,x,y,p,q,s=0;
    printf("\n\t                        The number  of  rows  for matrix -1: ");
    scanf("%d",&r1);
    system("cls");
    printf("\n\t                        The number of columns for matrix -1: ");
    scanf("%d",&c1);
    system("cls");
    printf("\n\t                        The  number  of  rows for matrix -2: ");
    scanf("%d",&r2);
    system("cls");
    printf("\n\t                        The number of columns for matrix -2: ");
    scanf("%d",&c2);
    system("cls");
    if(c1!=r2) printf("\n\t                        The matrix is not possible\n");
    else
           {
        int m1[r1][c1],m2[r2][c2],m3[r1][c2];
        printf("\n\t                        Enter the matrix value row wise for the 1st matrix:\n\n\t                        ");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&m1[i][j]);
            }
            printf("\n\t                        ");
        }
        system("cls");
        printf("\t                        Enter the matrix value row wise for the 2nd matrix:\n\n\t                        ");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&m2[i][j]);
            }
            printf("\n\t                        ");
        }
        system("cls");
        printf("The multiplication of given two matrix is:\n\n\t                        ");
        x=-1;
        for(i=0;i<r1;i++)
        {
            s=0;
            y=-1;
            q=-1;
            p=-1;
            x++;
            for(j=0;j<c2;j++)
            {
                p++;
                q=-1;
                y=-1;
                s=0;
              for(k=0;k<c1;k++)
              {
                y++;
                q++;
                s=s+m1[x][y]*m2[q][p]; //the rules implimentation
                //printf("\n%d %d\n",m1[x][y],m2[q][p]);
                //printf("\n%d %d  %d %d\n",x,y,q,p);
              }
              //printf("\n");
              m3[i][j]=s;
              printf("%3d ",s);
            }
            printf("                        \n\n\t                        ");
        }
    }
    return 0;
}
