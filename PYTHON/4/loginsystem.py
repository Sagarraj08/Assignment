<<<<<<< HEAD:4/loginsystem.py
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
        d.pswd=str(input())
              

# places()
# r=register("y")
# r.reg("y")
dd=details("s","s","s")
dd.dtls()



=======
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
        d.pswd=str(input())
              

# places()
# r=register("y")
# r.reg("y")
dd=details("s","s","s")
dd.dtls()



>>>>>>> a3f02e25d4cb515e0b8ee8cf4bb5544801fce6f1:4/3/loginsystem.py
    