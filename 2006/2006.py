# Goes from 1 to 4
true_type = input()
guesses_list = input().split(' ')

correct_answers = 0

for guess in guesses_list:
    if guess == true_type:
        correct_answers += 1

print(correct_answers)
