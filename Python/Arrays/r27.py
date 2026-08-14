n = int(input())
arr = list(map(int,input().split()))
k = n-1


for i in range(0,n,k):
    left=0;
    right = min(i+k-1,n-1);
    while(left<=right):
        temp = arr[left]
        arr[left] = arr[right]
        arr[right]=temp
        left+=1
        right-=1
        
print(arr)
    