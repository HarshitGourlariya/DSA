arr = list(map(int,input().split()))
k = int(input())
count =0;
for i in range(len(arr)):
    if(arr[i]==k):
        count+=1;
    
print(count)