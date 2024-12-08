#超时
while True:
    try:
        i,j=map(int,input().split())
        if i>j:
            i,j=j,i
            ex=True
        else:
            ex=False
        ans=0
        for u in range(i,j+1):
            count=1#包含print
            while u!=1:
                count+=1
                if u%2==1:
                    u=3*u+1
                else:
                    u=u/2
            if count>ans:
                ans=count
        if ex==True:
            i,j=j,i
        print(f'{i} {j} {ans}')
    except:
        break