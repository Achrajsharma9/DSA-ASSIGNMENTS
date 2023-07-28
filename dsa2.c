#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void){

char a ,random_char(int index);
    int num, index;
char a[18]= {'A','B','C','D','E','F','0','1','2','3','4','5','6','7','8','9'};
num = rand() %16;
printf("the randomly generated is %c\n", a[num]);
srand(time(NULL));
char a[18];
int i;
for (i = 0; i < 10; i++) {
   index = rand() % 16;
   a[i] = random_char (index);
}
a[i] = '\0';

printf("the randomly generated alphanumeric string is %c\n",a[num]);

}