arr = list(map(int,input().split()))
brr =[0]*len(arr)

for i in range(0,len(arr)-1):
    brr[i]=arr[i+1]
    
brr[len(arr)-1]=arr[0]

print(brr)