# Various-operations-on-Matrices-in-CPP

# Code-11

# Title:
C++ code to performing matrix addition for two 4x3 matrices, 'matrix1' and 'matrix2', and then printing the result in the form of another 4x3 matrix.

# Theory:
The code performs element-wise addition of two 4x3 matrices, `matrix1` and `matrix2`, and prints the result as another 4x3 matrix named `add`. This operation is a fundamental mathematical concept used in various applications, including data processing and scientific computing.

# Algorithm: 
Algorithm does the following:-
1)Initialize three 4x3 matrices: 'matrix1', 'matrix2', and 'add'. 2)Use nested loops to iterate through each row and column of the matrices:  a.For i from 0 to 3 (representing rows): i.For j from 0 to 2 (representing columns): - Calculate the sum of corresponding elements in matrix1 and matrix2 and store the result in add[i][j]. b. End inner loop (column iteration). 3)End outer loop (row iteration). 4)Print the contents of the add matrix: Use nested loops to iterate through each row and column of the add matrix. a. For i from 0 to 3 (representing rows): i. For j from 0 to 2 (representing columns): - Print the value of add[i][j], followed by a space.
b. Print a newline character to move to the next row. c. End inner loop (column iteration). d. End outer loop (row iteration). 5)End the algorithm.

# Explaination of the code:-
When we compile and run this code, the following happens:-
1)Declare and initialize two 4x3 matrices, matrix1 and matrix2, with integer values. 2)Declare a result matrix add, also 4x3, for storing the addition result. 3)Use nested loops to go through each element of matrix1 and matrix2. *For each element at position [i][j], calculate the sum of the corresponding elements from both matrices and store it in the add matrix at the same position. 4)Print the contents of the add matrix by iterating through its elements and formatting the output as a 4x3 matrix. 5)End the program.

**END OF CODE-11**

# Code-12

# Title: 
To perform matrix addition for two matrices.

# Theory:
The provided C++ code allows the user to input two matrices, performs element-wise matrix addition, and displays the original matrices along with the result matrix. This code demonstrates the fundamental concept of matrix addition.

# Algorithm:
Algorithm does the following:-
1)Initialize variables for the number of rows and columns (row and col) and two matrices (m1 and m2) with a maximum size of 10x10. Also, declare a matrix sum to store the result. 2)Prompt the user to input the number of rows and columns for the matrices. 3)Use nested loops to input elements for both m1 and m2 matrices. *For each element at position [i][j] in m1 and m2, read and store the input value. 4)Use nested loops to calculate the sum of the corresponding elements in m1 and m2, storing the result in the sum matrix. 5)Print the original matrices m1 and m2 using nested loops to format the output as matrices. 6)Print the result matrix sum using nested loops to format the output as a matrix. 7)End the algorithm.

# Explanation of the code:-
The code does the following: 1)Asks the user to input the dimensions and elements of two matrices, m1 and m2. 2)Adds the two matrices element by element and stores the result in the sum matrix. 3)Prints the original matrices and the result matrix.

**END OF CODE-12**

# Code-13

# Title:
To find the transpose of a matrix. 

# Theory:
The provided C++ code calculates the transpose of a matrix. It takes user input for a matrix, swaps its rows and columns, and displays both the original and transposed matrices.

# Algorithm:
This algorithm includes the following steps: 1)Declare variables and matrices for the original matrix a, its transpose transpose, and sizes (row and column). 2)Ask the user for the number of rows and columns in the matrix. 3)Input elements for the matrix a using nested loops. 4)Print the original matrix 'a'. 5)Compute the transpose by swapping rows and columns. 
6)Print the transpose transpose. 7)End the process.

# Explanation of Code:
The code does the following: 1)Takes user input for the dimensions and elements of a matrix. 2)Calculates the transpose of the matrix. 3)Prints both the original and transposed matrices.

**END OF CODE-13**
