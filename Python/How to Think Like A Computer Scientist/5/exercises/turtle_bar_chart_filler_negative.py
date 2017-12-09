import turtle

#Draw canvas, set attributes
wn = turtle.Screen()
wn.bgcolor("lightgreen")

#Declare tess, set attributes
tess = turtle.Turtle()
tess.color("blue")
tess.pensize(2)

def draw_bar(t,h):
	"""Draw a bar of height h using turtle t."""#Docstring
	t.pendown()			#Put pen on canvas
	set_fill_colour(t,h)
	t.begin_fill()			#Start filling in the bar
	t.left(90)			#Turn and face upwards
	t.forward(h)			#Move h units forward
	if(h<0):			#If number negative
		t.penup()		#Lift pen from canvas
		t.forward(-15)		#Move below bar to stage to write value of h
		t.write(str(h))		#Write value of h
		t.forward(15)		#Return to original position
		t.pendown()		#Put pen back on canvas
	else:				#If number is NOT negative
		t.write(str(h))		#Print as normal
	t.right(90)			#Turn and face 90 degrees right
	t.forward(30)			#Move 30 units forward
	t.right(90)			#Turn and face downwards again
	t.forward(h)			#Move h units forward (back to origin)
	t.end_fill()			#Stop filling in the bar
	t.left(90)			#Face back towards the right
	t.penup()			#Lift pen from canvas
	t.forward(10)			#Advance to the next bar position

xs = [-48,117,-200,240,-169.9,260,220]	

def set_fill_colour(t,h):
	"""Set the fill colour of the turtle depending on the height."""#Docstring
	if(abs(h) >= 200):
		t.color("blue","red")
	elif((abs(h) >= 100) and (abs(h) < 200)):
		t.color("blue","yellow")
	else:
		t.color("blue","green")
for i in xs:
	draw_bar(tess,i)

wn.mainloop()
