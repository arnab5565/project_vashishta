#from pytube import *
from tkinter.filedialog import *
from tkinter import *
from tkinter.messagebox import *


file_size=0

def startDownload():
    
    global file_size
    try:
        url = urlfield.get()
        print(url)

        dbtn.config(text="Please wait...")
        dbtn.config(state=DISABLED)


        path=askdirectory()
        
        print(path)

        if path is None:
            return
        #ob=YouTube(url)
        #strm = ob.streams.first()
        #strm.download(path)
        dbtn.config(text='Start Download')

        dbtn.config(state=NORMAL)
        showinfo("Download Finoshed", "succes fully downloaded !........")




    except Exception as e:
        print(e)
        print("some error...........")


main=Tk()

main.title("Pulastya Video Dealer")
main.geometry("600x600")

main.iconbitmap('icon.ico')



"""
file_img= PhotoImage(file='download.png')

"""

headingIcon=Label(main, text='Welcome to Pulastya ')
headingIcon.pack(side=TOP)
urlfield = Entry(main, font=("verdana" , 18) , justify=CENTER)
urlfield.pack(side=TOP, fill= X, padx=10)

dbtn=Button(main, text='Start Download ', font=("verdana", 18), relief='flat', command=startDownload)

dbtn.pack(side=TOP, pady=10)




main.mainloop()

