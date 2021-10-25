/*
2.	Write a program to input an array of m x n.
Sort the odd column in increasing order and the
even column in decreasing order.
Ex:
___________________________________________________________________________________
| Input: 5(row) 4(col) 10 21 12 53 64 53 86 72 68 99 10 11 12 13 14 15 16 17 18 19 |
| The converted 2D array will be like this:                                        |
| 10 21 12 53                                                                      |
| 64 53 86 72                                                                      |
| 68 99 10 11                                                                      |
| 12 13 14 15                                                                      |
| 16 17 18 19                                                                      |
| Output:                                                                          |
| 68 13 86 11                                                                      |
| 64 17 18 15                                                                      |
| 16 21 14 19                                                                      |
| 12 53 12 53                                                                      |
| 10 99 10 72                                                                      |
|__________________________________________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int row = atoi(argv[1]);
	int col = atoi(argv[2]);
	argc-=3;
	int rows[argc/col][argc/col];
    int i = 3;

    // Build 2D array
    for(int r = 0; r < row; r++){
		for(int c = 0; c < col; c++){
            rows[r][c] = atoi(argv[i]);
            i++;
        }
	}

    // Sort odd acs
    int current, next, temp;
    for(int i = 0; i < row; i ++){
        for(int r = 0; r < row - 1; r++){
            for(int c = 0; c < col; c++){
                current = rows[r][c];
                next = rows[r+1][c];
                
                if(c%2 == 0){
                    // sort even desc
                    if(next > current)
                    {
                        temp = rows[r][c];
                        rows[r][c] = next;
                        rows[r+1][c] = temp;
                    }
                }else{
                    // sort odd acs
                    if(next < current)
                    {
                        temp = rows[r][c];
                        rows[r][c] = next;
                        rows[r+1][c] = temp;
                    }
                }
                
            }
        }
    }

    for(int r = 0; r < row; r++){
		for(int c = 0; c < col; c++){
            printf("%d ", rows[r][c]);
        }
        printf("\n");
	}
	
    printf("\n");
	return 0;
}