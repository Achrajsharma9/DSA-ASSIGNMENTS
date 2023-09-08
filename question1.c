// make an array dynamically of any size and store the elements randomly in it then 
// then you have to count odd and even elements 
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#define SHIFTING_FACTOR 2
#define SCALING_FACTOR  45
int main(){

int  arr[10], i;

for(i=0;i<10; i++){
 arr[i] = rand() % (SCALING_FACTOR - SHIFTING_FACTOR);

printf("%d\n",  arr[i]);
}
if(arr[i]%2==0){
    even_number++;
printf("the even numbers is", even_number);

}
else{
  odd_number++;
    printf("the odd numbers is", odd_number);
}

return 0;   
}
