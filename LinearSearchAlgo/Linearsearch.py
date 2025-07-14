n=int(input())
l=[]
for i in range(n):
    i=int(input())
    l.append(i)
s=int(input())
for i in range(len(l)):
    if(l[i]==s):
        print(s,"Element found at index",i);
        break
else:
    print("Not Found")
    