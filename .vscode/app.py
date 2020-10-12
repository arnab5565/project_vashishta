from tkinter import *
root=Tk()

root.title("Pulastya")
root.geometry("600x600")


def btn_1_func():

    label_1.config(text='who is the founder of apple')
    """
    docstring
    """
        



label_1=Label(root, text='welcome to the Pulastya', font=('verdana', 18))
label_1.pack(side=TOP)

btn_1=Button(root, text='start', bg='blue', relief='ridge' , font=("verdana", 18), command=btn_1_func)
btn_1.pack(side=TOP, pady=10)
root.mainloop()