import random
print("Hello what is your name?")
name = raw_input()
secretNumber= random.randint(1,20)
print('Well, '+name+', I am thinking of a number between 1 and 20, can you tell me what it is?')
for guessesTaken in range(1,7):
	print('Take a Guess!!')
	guess=int (input())
	if guess<secretNumber:
		print('Your Number is too low! :(')
	elif guess>secretNumber:
	    print('Your Number is too high! :(')
	else:
	     break;

if guess==secretNumber:
	print("Youre right man good for you!")
else:
    print("Nope. THe number i was thinking of was" +str(secretNumber))	
