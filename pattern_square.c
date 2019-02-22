#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    // we can do counter of lines from 0 to n - 1 and then downgrade it to 0
    // so we can to do same thing with each line, when number position is equal
    // from 0 to n - 1 and then downgrades to 0
    // 
    // So, now we can think only about this part: 
    // | 4 4 4 4 --> lines
    // | 4 3 3 3
    // | 4 3 2 2
    // | 4 3 2 1
    // V
    // columns

    int n;
    // All flags became 1 after middle of columns or lines
    int col_flag = 0;
    int line_flag = 0;
    scanf("%d", &n);
    // Temporary value it is printable number in our matrix
    int temp = n;

    for (int line = 0; line >= 0; ) {
        for (int col = 0; col >= 0; ) {
            if (!col_flag) {
                if (col && line && col <= line)
                    temp--;
            } else {
                if (line && col < line)
                    temp++;
            }
            printf("%d ", temp);
            // after middle of line start to reverse value of column
            if (col == n - 1) col_flag = 1;
            if (col_flag) col--;
            else col++;
        }
        // after middle of line start to reverse value of line
        if (line == n - 1) line_flag = 1;
        if (line_flag) line--;
        else line++;
        // before next line set flag to 0
        temp = n;
        col_flag = 0;
        printf("\n");
    }
    return 0;
}
