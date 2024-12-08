t=int(input())
for i in range(t):
    As=list(input().split())
    count=4-As.count('0')
    if count==0:
        print('Typically Otaku')
    elif count==1:
        print('Eye-opener')
    elif count==2:
        print('Young Traveller')
    elif count==3:
        print('Excellent Traveller')
    else:
        print('Contemporary Xu Xiake')

