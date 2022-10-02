print("DO YOU NEED PASSWORDS ? ")
print("password generator is here! lets make new passwords that improve your security. ")
def script():
    def restart():
        return 
    import random
    chars="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
    chars1="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890"
    chars2="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*"
    print("Select password type.")  
    print("1.Standard")  
    print("2.Secure")  
    print("3.Ultra")
    choice = input("Enter your choice(1/2/3):")
    number=int(1)
    length=int(16)
    if choice == '1': 
        for p in range(number):
            password="INO_"
        for c in range(length):
                password += random.choice(chars)
        print(password)
    elif choice == '2':
        for p in range(number):
            password="INO_"
        for c in range(length):
                password += random.choice(chars1)
        print(password)
    elif choice == '3':
        for p in range(number):
            password="INO_"
        for c in range(length):
                password += random.choice(chars2)
        print(password)
    else:  
        print("Invalid input") 
    restart =input("Would you like to continue ")
    if restart == "yes" or restart == "y":            
             script()
    if restart == "n" or restart == "no":
            print ("Thank you for using me")
script()