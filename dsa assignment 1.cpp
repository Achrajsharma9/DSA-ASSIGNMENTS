#include<stdio.h>
#include<stdlib.h>
int main(){
int num;

char str[17] = "1234567890ABCDEF"; // we have declared a string of 16 characters and one null character
num = rand() % 16; // it will generate a random numbers
printf("the randomly generated character is %c", str[num]);
return 0;
}
