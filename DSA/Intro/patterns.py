def square(a,b):
    for i in range(a):
        for j in range(1,b):
            print(j,end ="")
        print()




a = int(input("Enter a : "))
b = int(input("Enter b : "))
pattern = str(input("Enter Pattern: "))
if(pattern=="s"):
    square(a,b)