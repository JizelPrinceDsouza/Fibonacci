n=int(input('Enter the number of iterations: '))
if(n<=0):
    print('Enter a number greater than 0')
first=0
second=1
for i in range (0,n):
    print(first)
    next=first+second
    first=second
    second=next
