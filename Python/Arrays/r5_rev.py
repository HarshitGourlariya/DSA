arr = list(map(int,input().split()))
max =0;
for i in range(len(arr)):
    if(arr[i]>arr[max]):
        max =i;

print(max)
        