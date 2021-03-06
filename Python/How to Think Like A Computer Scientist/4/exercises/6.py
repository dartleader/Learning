#Write a void function draw_poly(t,n,sz) which makes a turtle draw a regular polygon.
#Write a void function draw_equitriangle(t,sz) which calls draw_poly to draw an equilateral triangle.
import turtle
#Draw canvas, set attributes
wn = turtle.Screen()
wn.bgcolor("lightgreen")

#Initialize tess, set attributes
tess = turtle.Turtle()
tess.color("hotpink")
tess.pensize(2)

def draw_poly(t,n,sz):
	"""Draw a regular polygon with n sides of sz length."""#Docstring
	for i in range(int(n)):
		t.forward(sz)
		t.left(360/n)

def draw_equitriangle(t,sz):
	"""Draw using turtle t an equilateral triangle with sides sz length."""#Docstring
	draw_poly(t,3,sz)

draw_poly(tess,8,50)		#Call draw_poly to draw a octagon with tess.
draw_equitriangle(tess,50)	#Call draw_equitriangle to draw an equilateral triangle with tess.

wn.mainloop()
