class places:
    def __init__(self):
        print("Places to must visit")
        print("1.Ahmedabad 2.Agra 3.Delhi 4.Banglore 5.Mumbai 6.Kolkata 7.Lonavala 8.Peris 9.Dubai 10.Switzerland")

class register:
    def __init__(self,x):
        self.x=x
    def reg(self,x):

        x=input("Do you want to Register?[y/n]")
        if x=="y" or x=="Y":
            print("Enter registration details")
        elif x=="n" or x=="N":
            print("THANK YOU")
class details:
    def __init__(dt,name,uname,pswd):
        dt.name=name
        dt.uname=uname
        dt.pswd=pswd
    def dtls(d):
        print("Enter username")
        d.uname=input()
        print("Enter password")
        d.pswd=input()      

class welcome(details):
    def __init__(dt,name,uname,pswd):
        dt.name=name
        dt.uname=uname
        dt.pswd=pswd
    def login(l,uname,pswd):
        print("Enter username")
        l.uname=input()
        print("Enter password")
        l.pswd=input()
        if l.uname==l.pswd:
            print("Access to account success")
        else:print("Access Denied")

places()
r=register("")
r.reg("")
dd=details("","","")
dd.dtls()
w=welcome("","","")
w.login("","")


    
