arr = list(map(int,input().split()))
n = len(arr)

temp = arr[0]
arr[0]=arr[n-1]
arr[n-1]=temp

print(arr)