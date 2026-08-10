arr = list(map(int,input().split()))
n = len(arr)+1
sum = n*(n+1)//2
tsum =0
for i in range(len(arr)):
    tsum +=arr[i]
    
res = sum - tsum
print(res)
    



    