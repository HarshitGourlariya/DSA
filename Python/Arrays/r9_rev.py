arr = list(map(int,input().split()))
min = float('inf')
max = float('-inf')
smax = float('-inf')
smin = float('inf')
for i in range(len(arr)):
    if(arr[i]>max):
        tmax =smax
        smax =max
        max=arr[i]
    elif(arr[i]>smax & smax<max):
        tmax = smax
        smax =arr[i]
    else:
        tmax = arr[i]

print(tmax)