#include <stdio.h>
int main(){
    int a[3][3][3],i,j,k,layerSum,total=0;
    printf("Enter 27 numbers for 3x3x3 array:\n");
    for(i=0;i<3;i++)for(j=0;j<3;j++)for(k=0;k<3;k++)scanf("%d",&a[i][j][k]);
    for(i=0;i<3;i++){
        layerSum=0;
        for(j=0;j<3;j++)for(k=0;k<3;k++)layerSum+=a[i][j][k];
        printf("Sum of layer %d = %d\n",i+1,layerSum);
        total+=layerSum;
    }
    printf("Total of all layers = %d\n",total);
return 0;
}

