marks=[]




def Classmarks():
    n=int(input("Enter no. of students in Class"))
    for i in range(n):
        mks=int(input("Enter marks of students"))
        marks.append(mks)

    print(marks)
def selection_sort():
    for i in range(len(marks)):
        min=i
        for j in range(i+1,len(marks)):
            if marks[j]>marks[min]:
                min=j
            (marks[j],marks[min])=(marks[min],marks[j])
    print(marks)

def bubble_sort():
    for i in range(len(marks)):
        for j in range(len(marks)-i-1):
            if marks[j]>marks[j+1]:
                (marks[j],marks[j+1])=(marks[j+1],marks[j])
    print(marks)



Classmarks()
flag=1
while flag==1:
    ch=int(input('''
    Enter your choice
    1. Selection Sort
    2. Bubble'''))
    if ch==1:
        selection_sort()
    elif ch==2:
        bubble_sort()
    else:
        print("invalid")
        flag=0







