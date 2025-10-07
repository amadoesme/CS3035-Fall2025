#Created: Sep 16, 2025
#Name: Esmeralda Amado
#Description: creating a python program where we practice basic string operations

#prompt says to import math with floor
from math import floor

#function that accepts an input string and an index value as input parameters.
def findElement(string, index):
    return string[index]
    
#concatinating strings
def concatStrings(s1, s2):
    return s1 + s2 #sum operator also concatenates
    
#function that works with the library imported
def divideString(string):
    divide = floor(len(string) / 2 ) #computation to get half the string
    return string[0: divide] #starts from zero ends at half
    
#find substring to return boolean values
def findSubstring(inputString, otherString):
    return otherString in inputString #used google for this line
    
#prompt code to test functions
inputString1 = "This is a test string"
inputString2 = "...it tests your functions"
inputString3 = "functions"

print(findElement(inputString1, 0))
print(concatStrings(inputString1, inputString2))
print(divideString(inputString1))
print(findSubstring(inputString2, inputString3))
print(findSubstring(inputString1, inputString3))
