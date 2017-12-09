#Draw a twisted spiral
import turtle
#Draw canvas
wn = turtle.Screen()
wn.bgcolor("lightgreen")

#Initialize tess, set attributes
tess = turtle.Turtle()
tess.color("blue")
tess.speed(8)

#Turn tess to begin drawing
tess.right(180)

def draw_spiral(t,ln):
	"""Draw a spiral with initial arm length of ln."""	#Docstring
	for i in range(50*2):
		t.right(90)
		t.forward(ln*i)
		t.right(1)

draw_spiral(tess,2)

wn.mainloop()		#Preserve canvas
