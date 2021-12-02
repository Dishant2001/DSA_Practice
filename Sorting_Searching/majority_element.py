#Majority element occurs more than N/2 times in an array of size N

def majorityElement(self, A, N):
        #Your code here
    majority=N//2
    d={}
    for i in A:
        d[i]=d.get(i,0)+1
    '''
    or
    for i in A:
        try:
            d[i]+=1
        except:
            d[i]=1
    '''
    for k in d:
        if d[k]>majority:
            return k
    return -1
