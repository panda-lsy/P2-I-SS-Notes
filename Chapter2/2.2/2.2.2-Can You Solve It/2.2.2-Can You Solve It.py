n=int(input())
for i in range(n):
    x0,y0,x1,y1=map(int,input().split())
    steps0,steps1=0,0
    lays0=x0+y0#判断层数
    lays1=x1+y1
    for u in range(lays0):
        steps0+=u+1
    steps0+=x0
    for u in range(lays1):
        steps1+=u+1
    steps1+=x1
    print(f'Case {i+1}: {steps1-steps0}')