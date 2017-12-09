#Write a fruitful function sum_to(n) that returns the sum of all integer numbers up to and including n.
def sum_to(n):
	"""Sum all numbers up to and including n, and return the total."""#Docstring
	#Declare local variable total, to hold the total
	total = 0
	for i in range(int(n)+1):	#The 1 must go outside the int(n) bracket.
		total = total+i
	return total

print(sum_to(input("What integer would you like to sum up to?")))
