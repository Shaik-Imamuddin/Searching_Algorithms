n=int(input())
l=[]

for i in range(n):
    i=int(input())
    l.append(i)

s=int(input())

#Make sure the list is sorted 
#else you need to use the below instruction
l.sort()

low=0
high=n-1

while(low <= high):
    mid= (low+high)//2
    if(s==l[mid]):
        print(s,"Found at Index",mid)
        break
    elif(s>l[mid]):
        low=mid+1
    else:
        high=mid-1
else:
    print("Not Found")