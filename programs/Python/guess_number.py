
import random

user_guess = int(input("Guess the number Im thinking of(0-10): "))
loop = 0
random_num = random.randint(0, 10)
while loop < 5:
  if user_guess == random_num:
    print("You guess it!")
    break
  else:
    user_guess = int(input("Guess again:"))
    loop += 1

print(f"I was thinking of {random_num}")

