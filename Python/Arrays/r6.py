arr = list(map(int,input().split()))
right = len(arr)-1; 
left =0
while(left<right):
    temp = arr[left];
    arr[left]=arr[right];
    arr[right]=temp
    left+=1;
    right-=1;

print(arr)
  