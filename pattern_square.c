#include <stdio.h>

int enter_number();

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
    
    int n = enter_number();
    printf("\n\n");
    
    // All flags became 1 after middle of columns or lines
    int col_flag = 0;
    int line_flag = 0;
    
    // Temporary value it is printable number in our matrix
    int temp = n;

    for (int line = 0; line >= 0; ) {
        for (int col = 0; col >= 0; ) {
            if (!col_flag)
                if (col && line && col <= line) temp--;
            else
                if (line && col < line) temp++;
            
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
        
        // before next line set flag to 0 and temp back to n
        temp = n;
        col_flag = 0;
        
        printf("\n");
    }
    return 0;
}
    
int enter_number() {
    int num = 0;
    printf("Enter number from 1 to 1000: ");
    scanf("%d", &num);
    
    if (n < 1 || n > 1000) {
        printf("\nYou entered wrong number. It has to be from 1 to 1000.\n\n")
        enter_number();
    }
    
    return num;
}
