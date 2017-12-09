import turtle

wn = turtle.Screen()
wn.bgcolor("white")

#Initialize tess and set attributes
tess = turtle.Turtle()
tess.color("black")
tess.pensize(3)

#Draw a five-pointed star
def draw_star(t,sz):
	"""Draw a five-pointed star of sz arm length with turtle t."""#Docstring
	for i in range(5):
		t.forward(sz)
		t.right(144)

draw_star(tess,100)

wn.mainloop()
