import os
from time import *


arr = [[' ',' ',' '],[' ',' ',' '],[' ',' ',' ']]
counter = 1
while not False:
    os.system('cls')
    print("     |     |     ")
    print(" ", arr[0][0], " | ", arr[0][1], " | ", arr[0][2])
    print("_____|_____|_____")
    print("     |     |     ")
    print(" ", arr[1][0], " | ", arr[1][1], " | ", arr[1][2])
    print("_____|_____|_____")
    print("     |     |     ")
    print(" ", arr[2][0], " | ", arr[2][1], " | ", arr[2][2])
    print("     |     |     ")


    if counter%2==1:
        counter+=1
        x = int(input("PLAYER X, ENTER YOUR COORDINATES\nrow(0-2): "))
        y = int(input("column(0-2): "))
        if arr[x][y]==' ':
            arr[x][y] = 'X'
        else:
            print("WARNING! USE UNPOPULATED SLOTS ONLY")
            x = int(input("PLAYER X, ENTER YOUR COORDINATES\nrow(0-2): "))
            y = int(input("column(0-2): "))
            if arr[x][y]==' ':
                arr[x][y] = 'X'
    
        os.system("cls")
        print("     |     |     ")
        print(" ", arr[0][0], " | ", arr[0][1], " | ", arr[0][2])
        print("_____|_____|_____")
        print("     |     |     ")
        print(" ", arr[1][0], " | ", arr[1][1], " | ", arr[1][2])
        print("_____|_____|_____")
        print("     |     |     ")
        print(" ", arr[2][0], " | ", arr[2][1], " | ", arr[2][2])
        print("     |     |     ")

        if (arr[0][0]==arr[0][1]==arr[0][2]=='X' or
            arr[1][0]==arr[1][1]==arr[1][2]=='X' or
            arr[2][0]==arr[2][1]==arr[2][2]=='X' or
            arr[0][0]==arr[1][0]==arr[2][0]=='X' or
            arr[0][1]==arr[1][1]==arr[2][1]=='X' or
            arr[0][2]==arr[1][2]==arr[2][2]=='X' or
            arr[0][2]==arr[1][1]==arr[2][0]=='X' or
            arr[0][0]==arr[1][1]==arr[2][2]=='X') :
            print("PLAYER X WINS")
            sleep(3)
            os.system("cls")
            arr = [[' ',' ',' '],[' ',' ',' '],[' ',' ',' ']]
            counter = 1
            continue
        
        elif (  arr[0][0]!=' ' and
                arr[0][1]!=' ' and
                arr[0][2]!=' ' and
                arr[1][0]!=' ' and
                arr[1][1]!=' ' and
                arr[1][2]!=' ' and
                arr[2][0]!=' ' and
                arr[2][1]!=' ' and
                arr[2][2]!=' '):
            print("NOBODY WINS")
            sleep(3)
            arr = [[' ',' ',' '],[' ',' ',' '],[' ',' ',' ']]
            counter = 1
            continue

    if counter%2==0:
        counter+=1
        x = int(input("PLAYER O, ENTER YOUR COORDINATES\nrow(0-2): "))
        y = int(input("column(0-2): "))
        if arr[x][y]==' ':
            arr[x][y] = 'O'
        else:
            print("WARNING! USE UNPOPULATED SLOTS ONLY")
            x = int(input("PLAYER O, ENTER YOUR COORDINATES\nrow(0-2): "))
            y = int(input("column(0-2): "))
            if arr[x][y]==' ':
                arr[x][y] = 'O'


        os.system("cls")
        print("     |     |     ")
        print(" ", arr[0][0], " | ", arr[0][1], " | ", arr[0][2])
        print("_____|_____|_____")
        print("     |     |     ")
        print(" ", arr[1][0], " | ", arr[1][1], " | ", arr[1][2])
        print("_____|_____|_____")
        print("     |     |     ")
        print(" ", arr[2][0], " | ", arr[2][1], " | ", arr[2][2])
        print("     |     |     ")

        if (arr[0][0]==arr[0][1]==arr[0][2]=='O' or
            arr[1][0]==arr[1][1]==arr[1][2]=='O' or
            arr[2][0]==arr[2][1]==arr[2][2]=='O' or
            arr[0][0]==arr[1][0]==arr[2][0]=='O' or
            arr[0][1]==arr[1][1]==arr[2][1]=='O' or
            arr[0][2]==arr[1][2]==arr[2][2]=='O' or
            arr[0][2]==arr[1][1]==arr[2][0]=='O' or
            arr[0][0]==arr[1][1]==arr[2][2]=='O') :
            print("PLAYER O WINS")
            sleep(3)
            os.system("cls")
            arr = [[' ',' ',' '],[' ',' ',' '],[' ',' ',' ']]
            counter = 1
            continue

        elif (  arr[0][0]!=' ' and
                arr[0][1]!=' ' and
                arr[0][2]!=' ' and
                arr[1][0]!=' ' and
                arr[1][1]!=' ' and
                arr[1][2]!=' ' and
                arr[2][0]!=' ' and
                arr[2][1]!=' ' and
                arr[2][2]!=' '):
                    print("NOBODY WINS")
                    sleep(3)
                    arr = [[' ',' ',' '],[' ',' ',' '],[' ',' ',' ']]
                    counter = 1
                    continue
  


