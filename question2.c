// given an array of size N of integers your task is to find minimum and maximum in array

#include<stdio.h>
#include<stdlib.h>
int main(){

int arr[7], i, max, min;
arr[7] = {15,65,89,60,56,43,78};
arr[0] = max;
for(i=0;i<7;i++){
    scanf("%d", arr[i]);

    if(arr[i]>max){
        arr[i]= max;
    }
    
}
printf("the maximum value is :", max);
return 0;

}