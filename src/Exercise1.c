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

//  C++ code for Pascal's Triangle
#include <stdio.h>

int binomialCoeff(int n, int k);
 
// Function to print first
// n lines of Pascal's
// Triangle
void printPascal(int n)
{
    // Iterate through every line and
    // print entries in it
    for (int line = 0; line < n; line++)
    {
        // Every line has number of
        // integers equal to line
        // number
        for (int i = 0; i <= line; i++)
            printf("%d ",
                    binomialCoeff(line, i));
        printf("\n");
    }
}

int binomialCoeff(int n, int k)
{
    int res = 1;
    if (k > n - k)
    k = n - k;
    for (int i = 0; i < k; ++i)
    {
        res *= (n - i);
        res /= (i + 1);
    }
    printf ("\n1 \n1 1 \n1 2 1 \n1 3 3 1 \n1 4 6 4 1\n");
     return res;
}
 
// Driver program
int main()
{
    int n = 4;
    printPascal(n);
    return 0;
}