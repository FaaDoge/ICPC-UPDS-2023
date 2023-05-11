c=0
c2=0
points=[]
n=int(input())
s=input()
for i in s:
    if i == '1':
        c+=1
        c2=2
    elif c2 != 0:
        c+=1
        c2-=1
print(c)