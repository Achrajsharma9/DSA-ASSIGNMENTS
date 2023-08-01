#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>  // for using boolean function
#include<time.h>    // used so that function do not give same result

#define max_alpha_ASCII 65  // ASCII code for A 
#define min_alpha_ASCII 70  // ASCII code for f

#define max_num_ASCII 57    // ASCII code for 9
#define min_num_ASCII 48   // ASCII code for 0

#define max_length 10    // max length of alphanumeric string
#define min_length 3    // min length of  alphanumeric string

char random_char();  // function declaration

char random_char()
 {
   char ch;        // function definition
   bool toss;

   if(toss==0){    // if bool returns false then random function will generate alphabetic character
   ch = rand() % ((max_alpha_ASCII  - min_alpha_ASCII )+1) + min_alpha_ASCII;
 } else {
    ch = rand() %((max_num_ASCII - min_num_ASCII) +1) + min_num_ASCII; // random function will generate number
     }
   return ch ;
 }
int main(void) {
char alphanum_str[max_length]; 
 size_t length, i,j; // 
int highest_base ;  // declaring highest base variable

srand((time NULL));

length = rand() % (max_length - min_length) + min_length ; // random function will generate string of length
for ( i=0; i<length ; i++){

    alphanum_str[i]= random_char(); // generating string
    

   highest_base = alphanum_str[j];
   highest_base = ((max_alpha_ASCII +1)); // max ASCII +1

}
 printf("the randomly generated alphanumeric string is ");

for(j=0; j<length; j++){  // RUNNING loop of maximum length of 10
    printf("%c", alphanum_str[j]);
    
}
  printf("the highest base of alphanumeric string is %d", highest_base); // this function is printing highest base
  // after calculation

}