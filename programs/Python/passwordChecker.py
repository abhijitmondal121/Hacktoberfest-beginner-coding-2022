# Following are the criteria for checking the password:

# At least 1 letter between [a-z]
# At least 1 number between [0-9]
# At least 1 letter between [A-Z]
# At least 1 character from [$#@]
# Minimum length of transaction password: 6
# Maximum length of transaction password: 12

# Example 
# If the following passwords are given as input to the program: ABd123@1,a, F1#,2w3E*,2We3345 
# Then, the output of the program should be: ABd123@1

import re

s = input()
passwords = s.split(',')
correctPs = []

for password in passwords:
    if(len(password) < 6 or len(password) > 12):
        continue
    else:
        pass

    if not re.search("[a-z]", password):
        continue
    elif not re.search("[A-Z]", password):
        continue
    elif not re.search("[0-9]", password):
        continue
    elif not re.search("[$#@]", password):
        continue
    else:
        pass
    
    correctPs.append(password)

print(",".join(correctPs))
