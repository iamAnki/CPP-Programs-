#Guess the number
from termcolor import colored
from pyfiglet import Figlet

import random

import msvcrt as m
def wait():
    m.getch()




print('''
#######################################################
#                                                     #
#            Welcome to the guessing game             #
#                                                     #
#######################################################
''')

print('''
#######################################################
#  The number is between 1 to 100. You get 6 guesses  #
# If you guess the number right. You'll get a surprise#
#                        gift!!!                      #
#######################################################
''')

i = 0
predefined_num = random.randint(1, 100)
while i < 6:
    #Take input or guess from the user
    num = int(input(f'''Guess No. {i + 1}
                    Guess the number:
    '''))

    #ifelse tree for the game
    if num == predefined_num:
        print("Congratulations!! You win!")
        name = input("What's your name?")
        text = Figlet(font='banner3-D')
        print(colored(text.renderText(f"You Win! {name}"), 'red'))
        break
    elif num > predefined_num and i != 5:
        print("Enter a smaller number")
    elif num < predefined_num and i != 5:
        print("Enter a larger number")
    else:
        print("Sorry!!")

    #increment guess counter variable by one
    i += 1

m.getch()
#end of program