#student: Esmeralda Amado
#written on sep 2, 2025
#creating a program that checks if user input is even or odd

#checking if number is even or odd
def evenOdd(num):
  
  #using if - else to see what the user input is
  if num % 2 == 0:
  	print("is an even number")
  else:
  	print("is an odd number")

#asking user for input. Needs to be outside the function for it to work
intNum = int(input("Input a number to determine if its even or odd: "))
evenOdd(intNum)
