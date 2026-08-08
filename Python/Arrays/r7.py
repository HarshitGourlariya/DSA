arr = list(map(int,input().split()))
temp = arr[0]
arr[0]=arr[len(arr)-1]
arr[len(arr)-1]=temp
print(arr)
    