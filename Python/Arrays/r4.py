arr = list(map(int,input().split()))
key = int(input())
count =0;
for i in range(len(arr)):
    if(arr[i]==key):
        count+=1
    
print(count)
  
                

