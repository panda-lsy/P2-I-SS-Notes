a,b,n=map(int,input().split())
pos1,pos2=a,b   #短，长
movement=0
while not (pos1==n and pos2==n):
    if pos1!=n:
        pos1+=b-a
        movement+=1
    if pos1>=n:
        pos1=n
    if pos2!=n:
        pos2+=b-a
        movement+=1
    if pos2>=n:
        pos2=n
print(movement)