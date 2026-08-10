arr = list(map(int,input().split()))
n = len(arr)
n = n*(n+1)//2
for i in range(len(arr)):
    arr[i] = n - arr[i]
    
print(arr)
    