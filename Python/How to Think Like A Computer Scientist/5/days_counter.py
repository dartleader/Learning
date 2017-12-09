days=["Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"]

#Declare variables
str current_day = " "
int current_day_int

def ask_date():
	"""Ask what day it is, assign it to the according integer."""#Docstring
	current_day = input("What day is it today? ")
	if (current_day == ("Sunday" or "sunday"):
		current_day_int = 0
	elif (current_day == ("Monday" or "monday"):
		current_day_int = 1
	elif (current_day == ("Tuesday" or "tuesday"):
		current_day_int = 2
	elif (current_day == ("Wednesday" or "wednesday"):
		current_day_int = 3
	elif (current_day == ("Thursday" or "thursday"):
		current_day_int = 4
	elif (current_day == ("Friday" or "Friday"):
		current_day_int = 5
	elif (current_day == ("Saturday" or "saturday"):
		current_day_int = 6
	else:
		print("Error; no day understood!")
	return current_day

print(ask_date())
