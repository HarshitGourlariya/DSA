arr = list(map(int,input().split()))
n = len(arr)
avg = (n+1)/2

for i in range(len(arr)):
    if(arr[i]>avg):
        print(arr[i], end=" ")