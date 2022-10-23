a=['a','e','i','o','u','A','E','I','O','U']
s=input("Enter the Character: ")
if(len(s)>1): print("Invalid Input")
elif (s>='a' and s<='z') or (s>='A' and s<='Z'):
    if(s in a): print("\n\"" +s+ "\" is a Vowel")
    else: print("\n\"" +s+ "\" is a Consonant")
else: print("\n\"" +s+ "\" is neither a Vowel nor a Consonant")
