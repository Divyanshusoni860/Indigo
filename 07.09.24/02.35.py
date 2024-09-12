# a = int(input("Enter the number of elements: "))
# l = []
# i = 0
# while i<a:
#     if i==0:
#         print("Entee 1st element: ")
#         l.append(int(input()))
#     elif i==1:
#         print("Enter 2nd element: ")
#         l.append(int(input()))
#     else:
#         print("Enter ",i+1,"th element: ")
#         l.append(int(input()))
#     i = i+1
# print(l)


# a = 12654
# print(type(a))

# b  = str(a)
# print(b)
# print(type(b))


#{ 
 # Driver Code Starts
#Initial Template for Python 3

# } Driver Code Ends
#User function Template for python3

def pos(n):
    m = str(n)
    for i in range(n):
        m = m + (n-1)
        n = n-1
    return m
        
    
        
    
def neg(n):
    m = str(n)
    for i in range(n):
        m = m + (n+1)
        n = n-1
    return m

    ##Write the code
    

#{ 
 # Driver Code Starts.


def main():
    testcases=int(input()) #testcases
    while(testcases>0):
        n = int(input())
        if(n > 0):
            pos(n)
        elif(n < 0):
            neg(n)
        else:
            print("already Zero",end="")
        print()
        testcases-=1
        


if __name__=='__main__':
    main()
# } Driver Code Ends