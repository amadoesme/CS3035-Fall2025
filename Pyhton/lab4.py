#converting celsius to farenheit

#function definition
def celsiusToFarenheit(celsius):
	return celsius * 9.0 / 5.0 + 32
	
#getting lower bounds (help from TA)
minValue = int(input("Please enter the lower bound: "))

#getting the upper bound
maxValue = int(input("Please enter the upper bound: "))

#creating table
print("Celsius Farenheit")

#for loop to get the values
for celsius in range(minValue, maxValue + 1):
	farenheit = celsiusToFarenheit(celsius)
	
	#for this part in the code i searched up how to align a row
	#I used stack overflow, ^ means center align, < right, > left
	print(celsius, farenheit)
