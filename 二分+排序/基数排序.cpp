#include <stdio.h>
#include <stdlib.h>
 
 
void QS(int a[],int low,int high){
    int i = low;
    int j = high;
    int temp = a[i];
    if(low<high){
        while(i<j){
            while(a[j]>=temp && (i<j)){
                j--;
            }
            a[i] = a[j];
            while(a[i]<=temp && (i<j)){
                i++;
            }
            a[j] = a[i];
        }
        a[i] = temp;
        QS(a,low,j-1);
        QS(a,i+1,high);
    }else {
        return;
    }
}
 
 
#define N 10
 
void showArray(int *p, int length){
    for(int i=0;i<length;i++){
        printf("%4d",p[i]);
    }
    printf("\n");
}
 
void DistributionSort(int *p){
    int a[N][N]={0};
 
    /* ��ʼ�� */
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            a[i][j] = 0;
        }
    }
 
    for(int i=0;i<N;i++){
        a[p[i]/N][p[i]%N] = p[i];
    }
 
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
 
    int abak[N];
    int k = 0;
 
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(a[i][j]!=-1){
                abak[k++]= a[i][j];
            }
        }
    }
 
    printf("\nshowArray:\n");
    showArray(abak,N);
 
 
}
int main(){
    int a[N] = {12,34,2,9,0,45,77,21,32,8};
    showArray(a,N);
    printf("\n\n\n");
    DistributionSort(a);
    printf("\nQsshowArray:\n");
    QS(a,0,9);
    showArray(a,N);
    return 0;
}
 
