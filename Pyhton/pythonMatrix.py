#Created: Sep 18 2025
#Name: Esmeralda Amado
#Desxcription: creating a python program where we make 3 x 3 matrices.
#Also called multi-dimensional arrays. We then add the matrices

#function for adding matrices
def matrixAdd(A, B):
    SUM = [[0]*3 for _ in range(3)] #TA gave us hint like this
    
    #nested for loops prompt asks for
    for row in range(3):
        for col in range(3):
            SUM[row][col] = A[row][col] + B[row][col]
    return SUM

#function for adding the matrices as a string. concatinating the numbers
def matrixAddAsString(A, B):
    SUM = [[""]*3 for _ in range(3)] #TA gave us hint like this
    
    #nested for loops pronpt asks for
    for row in range(3):
        for col in range(3):
            SUM[row][col] = str(A[row][col]) + str(B[row][col])
    return SUM
    
# making the matrices like TA showed us in example
A = [[1,2,3],[4,5,6],[7,8,9]]
B = [[9,8,7],[6,5,4],[3,2,1]]

#calling the functions
SUM_add = matrixAdd(A, B)
SUM_string  = matrixAddAsString(A, B)

#getting the final results
print("Matrix A:", A)
print("Matrix B:", B)
print("Numeric Addition:", SUM_add)
print("String Concatenation:", SUM_string)
    
