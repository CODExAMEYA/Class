#include<stdio.h>
int main()
{
    //int aaray[5];
    int a[3][2],b[3][2],sum[3][2];
    /*int array[5] ={10,2,3};
    int array[5] ={10,2,3,15,0,22,23};
    int array[] ={10,2,3,15,0,22,23};*/
//taking input
    printf("Enter 6 aluse for matrix 1st");
    for(int r= 0; r<3;r++)
    {
        for(int c=0; c<2;c++)
        {
            scanf("%d",&a[r][c]);
        }
    }
//taking input
printf("Enter 6 value for matrix 2nd");
    for(int r= 0; r<3;r++)
    {
        for(int c=0; c<2;c++)
        {
            scanf("%d",&b[r][c]);
        }
    }
//processing
    for(int r= 0; r<3;r++)
    {
        for(int c=0; c<2;c++)
        {
            sum[r][c]=a[r][c]+b[r][c];
        }
    }
//printing
    for(int r= 0; r<3;r++)
    {
        for(int c=0; c<2;c++)
        {
            printf("%d  ",sum[r][c]);
        }
        printf("\n");
    }
}
