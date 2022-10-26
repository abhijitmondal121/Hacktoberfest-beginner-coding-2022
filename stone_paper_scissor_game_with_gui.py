from tkinter import *
import tkinter.messagebox
import random
root = tkinter.Tk()
root.title("STONE__PAPER__SCISSORS")
root.geometry('350x200+600+300')
root.config(bg='white')
def Stone():
    rand=random.randint(1,3)
    if rand==1:
        tkinter.messagebox.showinfo("Result","you choose stone and computer choose stone \n\n Match Tie") 
    elif rand==2:
        tkinter.messagebox.showinfo("Result","you choose stone and computer choose paper \n\n computer wins and you lose")          
    elif rand==3:
        tkinter.messagebox.showinfo("Result","you choose stone and computer choose scissor \n\n you wins and computer lose")
def Paper():
    rand=random.randint(1,3)
    if rand==1:
        tkinter.messagebox.showinfo("Result","you choose Paper and computer choose stone \n\n you wins and computer lose")
    elif rand==3:
        tkinter.messagebox.showinfo("Result","you choose paper and computer choose scissor \n\n computer wins and you lose")
    if rand==2:
        tkinter.messagebox.showinfo("Result","you choose paper and computer choose Paper \n\n Match Tie") 
def Scissors():
    rand=random.randint(1,3)
    if rand==3:
        tkinter.messagebox.showinfo("Result","you choose scissor and computer choose scissor \n\nMatch Tie") 
    elif rand==1:
        tkinter.messagebox.showinfo("Result","you choose scissor and computer choose stone \n\n computer wins and you lose")          
    elif rand==2:
        tkinter.messagebox.showinfo("Result","you choose scissor and computer choose Paper \n\n you wins and computer lose")
lab1= Label(root,bg='white', text="THIS IS STONE PAPER SCISSORS GAME",height=1)
lab2=Label(root,bg='white',text="your Turn",height=1)
lab3=Label(root,bg='white',text="please choose any of the one",height=1)
Button1 = Button(root,bd=0,text="Stone",width=15,height=5,bg='white',activebackground='red', command=Stone)
Button2 = Button(root, text="Paper",bd=0,width=15,height=5,bg='white',activebackground='red', command=Paper)
Button3 = Button(root, text="Scissors",bd=0,width=15,height=5,bg='white',activebackground='red', command=Scissors)
lab1.pack(side=TOP)
lab2.pack(side=TOP)
lab3.pack(side=TOP)
Button1.pack(side=LEFT,fill="both",expand="True")
Button2.pack(side=LEFT,fill="both",expand="True")
Button3.pack(side=LEFT,fill="both",expand="True") 
root.mainloop()
