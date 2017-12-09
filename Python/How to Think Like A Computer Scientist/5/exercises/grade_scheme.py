def translate_grade(num):
	"""Takes a grade as an integer and prints the equivalent grade score."""#Docstring
	if (num >= 75):
		print("Your grade was " + str(num) + " you got first grade!")
	if ((num >= 70) and (num <75)):
		print("Your grade was " + str(num) + " you got upper second grade!")
	if ((num >= 60) and (num <70)):
		print("Your grade was " + str(num) + " you got second grade!")
	if ((num >= 50) and (num <60)):
		print("Your grade was " + str(num) + " you got third grade!")
	if ((num >= 45) and (num <50)):
		print("Your grade was " + str(num) + " you got F1 Supp grade!")
	if ((num >= 40) and (num <45)):
		print("Your grade was " + str(num) + " you got F2 grade!")
	if (num <40):
		print("Your grade was " + str(num) + " you got F3 grade!")

xs = [83, 75, 74, 9, 65, 60, 59, 9, 55, 50, 49.9, 45, 44.9, 40, 39.9, 2, 0]

for i in xs:
	translate_grade(i)
