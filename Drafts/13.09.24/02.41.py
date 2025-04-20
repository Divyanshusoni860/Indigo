a = [1,25,116,48,96,75,15,355,4,9]
print(a)

print("Append adds a element in last")
a.append(48)
print("List after append is: ",a)

print("Sorting the list")
a.sort(reverse=True)
print("Sorted list in reverse manner: ",a)

print("Reversing a list")
a.reverse()
print("List after reversal: ",a)

print("Display the index of given number")
print("Index of 25 is: ",a.index(25))

print("Count the no. of particular element in a list")
print("number of times 48 present in list is: ",a.count(48))

print("length shows th number of elements present in a list")
print("Number of elemenets are :", len(a))