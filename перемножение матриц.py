#вызов библеотеки?
import random
m,n=map(int,input().split())
a1=[]
for i in range(m):
    b1=[random.randint(0,10) for x in range(n)]
    a1.append(b1)
for i in range(n):
    a1[0][i],a1[m-1][m-i-1]=a1[m-1][m-i-1],a1[0][i]
mi=min(a1[0]);m1=0;n1=a1[0].index(mi)
for i in range(m):
    if mi>min(a1[i]):
        mi=min(a1[i])
        m1=i
        n1=a1[i].index(mi)
#????????????????????????????????
print(a1)
a2=[]
x='0';m2=0;n2=0
while x[len(x)-1]!=".":
    x=input().split();b2=[];n2=0
    while x[n2]!=',' and x[n2]!='.':
        b2.append(x[n2])
        n2+=1
    a2.append(b2)
    m2+=1
print(a2,n2)
if n==m2:
    a12=[]
    for i in range(m):
        b12=[]
        for j in range (n2):
            c=0
            for k in range(n):
                c+=int(a1[i][k])*int(a2[k][j])
            b12.append(c)
        a12.append(b12)
    print(a12)
else:print('no')   