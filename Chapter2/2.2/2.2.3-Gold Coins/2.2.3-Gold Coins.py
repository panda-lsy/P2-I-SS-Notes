while True:
    N=int(input())
    N_=N
    if N==0:
        break
    else:
        coins=0
        day=0
        while N!=0:
            day+=1
            if N-day<0:
                coins+=N*day
                N=0
            else:
                coins+=day*day
                N-=day
    print(f'{N_} {coins}')
