arr = list(map(int,input().split()))
max =0;
smax =0;
for i in range(len(arr)):
    if(arr[i]>max):
        smax =max;
        max =arr[i]
    elif(arr[i]>smax):
        smax =arr[i]
print(smax)2