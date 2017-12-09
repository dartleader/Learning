import turtle

wn = turtle.Screen()
wn.bgcolor("lightgreen")

#Initialize tess and set attributes
tess = turtle.Turtle()
tess.color("hotpink")
tess.pensize(3)

#Draw a five-pointed star
def draw_star(t,sz):
	"""Draw a five-pointed star of sz arm length with turtle t."""#Docstring
	for i in range(5):
		t.forward(sz)
		t.right(144)
	move_turtle(t)

def move_turtle(t):
	"""Move the turtle to the beginning of the next star"""#Docstring
	t.penup()
	t.forward(350)
	t.right(144)
	t.pendown()

for i in range(5):	#Draw a star, 5 times
	draw_star(tess,100)

wn.mainloop()
