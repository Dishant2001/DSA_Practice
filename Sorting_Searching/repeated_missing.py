#Find repeated and missing element
a,b=0,0
d={}
for i in range(1,n+1):
    d[i]=0
for i in arr:
    if d[i]!=0:
        a=i
    d[i]+=1
for k in d:
    if d[k]==0:
        b=k
        break
return a,b
