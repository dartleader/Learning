#Write a function area_of_circle(r) which returns the area of a circle with radius r.
def area_of_circle(r):
	"""Calculate area of a circle with radius r and return it."""	#Docstring
	#Declare temporary variable to hold the area.
	area = 0
	#Calculate area.
	area = 3.14159 * r
	#Return area.
	return area

print(input(area_of_circle("What is the radius of the circle?")))
