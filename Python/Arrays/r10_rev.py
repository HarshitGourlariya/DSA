arr =  list(map(int,input().split()))
res = []
for i in range(len(arr)):
    count =0
    for j in range(len(arr)):
        if(arr[i]==arr[j]):
            count+=1
            
        
    
    if arr[i] not in res:
        
        res.append(arr[i])
    
print(res)
        

        