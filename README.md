# pattern_square

It is challenge from https://www.hackerrank.com. But here the version for using on your own using any system.

## Description
In this problem, you need to print the pattern of the following form containing the numbers from to 1 to n.
```
                            4 4 4 4 4 4 4  
                            4 3 3 3 3 3 4   
                            4 3 2 2 2 3 4   
                            4 3 2 1 2 3 4   
                            4 3 2 2 2 3 4   
                            4 3 3 3 3 3 4   
                            4 4 4 4 4 4 4   
```
### Input Format
The input will contain a single integer n.
### Constraints
1 < n <= 1000
### Output Format
Print the pattern mentioned in the problem statement.
### Sample Input
```
5
```
### Sample Output
```
5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5
```
## Compilation
If you use gcc:
```sh
$ gcc pattern_square.c -o pattern_square
```
## Usage
```sh
$ ./pattern_square
Enter number from 1 to 1000:
```
Enter any number, as example 2:
```
2 2 2 
2 1 2 
2 2 2 
```
