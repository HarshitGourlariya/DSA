arr = list(map(int,input().split()))
brr = [0]*len(arr)
for i in range(len(arr)-1):
    brr[i+1] = arr[i]

brr[0]=arr[len(arr)-1]

print(brr)
    