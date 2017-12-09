import turtle

#Draw canvas and set attributes
wn = turtle.Screen()
wn.bgcolor("lightgreen")

#Initialize tess, set attributes
tess = turtle.Turtle()
tess.color("blue","red")
tess.pensize(3)

def draw_bar(t, height):
	"""Get turtle t to draw one bar of height."""#Docstring
	t.pendown()		#Put pen on canvas
	t.begin_fill()
	t.left(90)
	t.forward(height)	#Draw up the left side
	t.write(" " + str(height))
	t.right(90)
	t.forward(40)		#Width of bar, along the top
	t.right(90)
	t.forward(height)	#And down again!
	t.left(90)		#Leave the turtle facing the way we found it.
	t.end_fill()
	t.penup()		#Lift pen from canvas
	t.forward(10)		#Leave small gap after each bar.

xs = [48,117,200,240,160,260,220]

for a in xs:
	draw_bar(tess,a)

wn.mainloop()
