#Write a function find_hypot which, given the length of two sides of a right-angled triangle, returns the length of the hypotenuse. (Hint: x ** 0.5 will return the square root.)
import turtle

#Draw screen
wn=turtle.Screen()

#Initialize tess, set attributes
tess = turtle.Turtle()

def find_hypot(a,b):
	"""Given sides a and b of a right sided triangle, calculate the hypotenuse."""	#Docstring
	a_squared = a**2			#Calculate a^2
	b_squared = b**2			#Calculate b^2

	c_squared = a_squared + b_squared	#Calculate c^2
	c = c_squared**0.5			#Calculate square root of c_squared

	draw_triangle(a,b,c,tess)

def draw_triangle(a,b,c,turtle):
	"""Draw the triangle described by the side lengths."""	#Docstring	
	turtle.forward(a)	#Draw side a
	turtle.left(90)
	turtle.forward(b)	#Draw side b
	turtle.left(120)
	turtle.forward(c)	#Draw side c

find_hypot(30,40)

wn.mainloop()
