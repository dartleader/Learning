import turtle

#Draw canvas with lightgreen background
wn = turtle.Screen()
wn.bgcolor("lightgreen")

#Initialize Tess, set attributes
tess = turtle.Turtle()
tess.color("blue")
tess.pensize(2)
tess.speed(10)

def draw_quarter(t,sz):
	"""Draw a small square which is a quarter of a large square.""" #Docstring
	for i in range(4):
		t.forward(sz/4)
		t.left(90)
	#After drawing a quarter, rotate to position self to draw next quarter
	t.left(90)

def draw_square(t,sz):
	"""Draw a square composed of four quarters."""	#Docstring
	for i in range(4):
		draw_quarter(t,sz)
	#After drawing a square, rotate 360/5 degrees to position self to draw next square
	t.left(360/5)

#Call draw_square function to draw a square
for i in range(5):	#Call it 5 times
	draw_square(tess,300)

wn.mainloop()		#Preserve canvas after drawing
