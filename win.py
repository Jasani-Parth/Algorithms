import os
import argparse

WEBSITES = []
USER = []

parser = argparse.ArgumentParser()

# Adding Argument
parser.add_argument("--path1",help = "Enter Path For web_list.txt")
parser.add_argument("--path2",help = "Enter Path For uid_list.txt")
parser.add_argument("--output",help = "Enter Path For Creating Winner.txt File")

argc = parser.parse_args()

webpath = argc.path1
uidpath = argc.path2
output = argc.output

# Task 1 

f = open(webpath,'r')

WEBSITES = f.read().split('\n')
      
for link in WEBSITES :

      print(link.split('/')[2])

f.close()      

# Task 2

f = open(uidpath,'r')

L = f.read().split('\n')
L.pop(len(L)-1)

for ele in L :

      USER.append([ele.split('||')[0],ele.split('||')[2],ele.split('||')[3]])

count = int(0)   

# Creating New File In Given Path Folder
os.chdir(output)
new_file = os.open("winner.txt",os.O_RDWR|os.O_CREAT) # if file doesn't exists it create and open for only writing

for user in USER :

      for link in WEBSITES :

            if( link.endswith(user[2]) ) :

                  count += 1 
                  print(f"user_name - {user[0]} : Winner - lucky draw!!! - {link}")
                  line = str.encode(f"{user[0]}||{user[1]}||{link}\n")
                  os.write(new_file,line)

print(count)                            