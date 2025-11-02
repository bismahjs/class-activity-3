#include <stdio.h>
int main(){
    int a[3][3][3],i,j,k,same,l;
    printf("Enter 27 numbers for 3x3x3 matrix set:\n");
    for(i=0;i<3;i++)for(j=0;j<3;j++)for(k=0;k<3;k++)scanf("%d",&a[i][j][k]);
    for(i=0;i<3;i++)for(j=i+1;j<3;j++){
        same=1;
        for(k=0;k<3;k++)for(l=0;l<3;l++)if(a[i][k][l]!=a[j][k][l])same=0;
        if(same) printf("Layer %d and %d are identical\n",i+1,j+1);
        else printf("Layer %d and %d are distinct\n",i+1,j+1);
    }
    return 0;
}

