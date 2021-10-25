/*
1.	Write a program to construct the Pascal triangle with the given integer n.
Ex:
______________________________________
| Input: 3                           |
| Output:                            |
| 1                                  |
| 1 1                                |
| 1 2 1                              |
| 1 3 3 1                            |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int fact(int n){
   int a;
   int sum = 1;
   for (a = 1; a <= n; a++)
      sum = sum*a;
   return sum;
}

int main(int argc, char *argv[]) {
    int n = atoi(argv[1]);
	for (int i = 0; i < n; i++){
        //for (int j = 0; j <= (n - i - 2); j++){
        //    printf(" ");
        //}
        for (int j = 0 ; j <= i; j++){
            printf("%d ",fact(i)/(fact(j)*fact(i-j)));
        }
         
        printf("\n");
   }
   printf("\n");

   return 0;
}
int main (int argc, char *argv[]) {
    //testing variable, applying it to your algorithm for auto-evaluating
    int testcase = atoi(argv[1]);
    
    Ex1(testcase);
    return 0;
}
