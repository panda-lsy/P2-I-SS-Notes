#Runtime ERROR
while True:
    a,b=map(str,input().split())
    if a=='0' and b=='0':
        break
    else:
        add_=0
        count=0
        for i in range(len(a)-1,-1,-1):
            num=int(a[i])+int(b[i])+add_
            while num>=10:
                count+=1
                add_+=1
                num-=10
    if count==0:
        print('No carry operation.')
    elif count==1:
        print(f'{count} carry operation.')
    else:
        print(f'{count} carry operations.')
    