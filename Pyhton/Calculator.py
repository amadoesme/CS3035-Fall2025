# Class: CS 3035 - 03
# Date: September 11 2025
# Student: Esmeralda Amado
# Description: Creating a python program were a calculator
# has four functions; add, subtract, multiply and divide.

#creating functions for the operations
#addition function
def add(x,y,z):
    return x + y + z
    
#subtraction function
def subtract(x,y,z):
    return x - y - z
   
#multiplication function
def multiply(x,y):
    return x * y
    
#divide function
def divide(x,y):
    if y == 0:
       return "ZeroDivisionError!"
    return x / y
    
#user input for the calculator to work
x = int(input("Enter value a number: "))
y = int(input("Enter another number: "))
z = int(input("Enter your last number: "))

#using the expression in the prompt so we can divide
topDividend = multiply(add(x, y, z), x)
bottomDividend = multiply(subtract(x, y, z),y)

#checking to see that the bottom dividend is not being divided by zero
if bottomDividend == 0:
   print("You can't divide by zero")
else:
   answer = divide(topDividend, bottomDividend)
   print("The answer is: ", answer)
   
   
# ------ OUTPUT -------
#eamado3@eamado3-vm:~/test_directory$ touch Calculator.py
#eamado3@eamado3-vm:~/test_directory$ python3 Calculator.py
#Enter value a number: 10
#Enter another number: 5
#Enter your last number: 3
#The answer is:  18.0
#eamado3@eamado3-vm:~/test_directory$ python3 Calculator.py
#Enter value a number: 7
#Enter another number: 0
#Enter your last number: 1
#You can't divide by zero
