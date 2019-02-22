#include <stdio.h>

// Function returns number entered by user
int enter_number();

int main() 
{
    // We can count lines from 0 to (n - 1) 
    // and then smoothly back to 0.
    // So, we can use the same scenario for indexes of lines.
    // 
    // Thus, now we can think only about 1/4 of our matrix.
    // It is top left corner for n = 4: 
    // | 4 4 4 4 --> lines
    // | 4 3 3 3
    // | 4 3 2 2
    // | 4 3 2 1
    // V
    // columns
    
    int n = enter_number();
    printf("\n");
    
    // Flags become 1 after middle of line or lines, respectively
    int col_flag = 0;
    int line_flag = 0;
    
    // Number for print in our matrix
    // First number will be n, therefore:
    int print = n;
    
    // Start loops, values change later in code, 
    // they depends on position in matrix
    for (int line = 0; line >= 0; ) {
        for (int col = 0; col >= 0; ) {
            if (!col_flag && col && line && (col <= line)) print--;
            else if (col_flag && line && (col < line)) print++;
            
            printf("%d ", print);
            
            // In middle of line set flag
            // to downgrade value of column
            if (col == n - 1) col_flag = 1;
            
            if (col_flag) col--;
            else col++;
        }
        
        // In middle of lines set flag
        // to downgrade value of line
        if (line == n - 1) line_flag = 1;
        
        if (line_flag) line--;
        else line++;
        
        // Before next line must set value for print 
        // and reset flag
        print = n;
        col_flag = 0;
        
        printf("\n");
    }

    return 0;
}
    
int enter_number() {
    int num = 0;
    printf("Enter number from 1 to 1000: ");
    scanf("%d", &num);
    
    if (num < 1 || num > 1000) {
        printf("\nYou entered wrong number. It has to be from 1 to 1000.\n");
        return enter_number();
    } else return num;

}
