import os
d=open(r'Z:\Python\Module-4\file operation.txt','r')
print(d.read())
d.close()

#append
text="\nappended text"
d=open('file operation.txt','a')
d.write(text)
d.close()

#readlines
with open(r'file operation.txt','r') as d:
    #for reading N lines
    for i in range(3):
        print(d.readline())
d.close()

#lastreadlines
n=5
with open(r'file operation.txt','r') as d:
    #for reading N lines
    for i in range(3):
        print(d.readline())
d.close()

#as list
with open("file operation.txt") as f:
    content_list = f.readlines()

# print the list
print(content_list)

# remove new line characters
content_list = [x.strip() for x in content_list]
print(content_list)

#As variable
def file_read(fname):
        with open (fname, "r") as myfile:
                data=myfile.readlines()
                print(data)
file_read('file operation.txt')

#find longest word
def longest_word(filename):
    with open(filename, 'r') as infile:
              words = infile.read().split()
    max_len = len(max(words, key=len))
    return [word for word in words if len(word) == max_len]

print(longest_word('file operation.txt'))

#Count lines
with open(r"file operation.txt", 'r') as fp:
	lines = len(fp.readlines())
	print('Total Number of lines:', lines)

#Count frequency
from collections import Counter
def word_count(fname):
        with open(fname) as f:
                return Counter(f.read().split())

print("Number of words in the file :",word_count("file operation.txt"))

#write a list to a file 
items = ['Mango', 'Orange', 'Apple', 'Lemon']
file = open('file operation.txt','w')
for item in items:
	file.write(item+"\n")
file.close()


#Copy  content from second file
with open('file operation.txt','r') as firstfile, open('copy.txt','a') as secondfile:
# read content from first file
    for line in firstfile:
        # append content to second file
        secondfile.write(line)

