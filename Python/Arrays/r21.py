arr = list(map(int, input().split()))

def repeating(arr):
    for i in range(len(arr)):
        for j in range(i + 1, len(arr)):
            if arr[i] == arr[j]:
                return arr[i]

res = repeating(arr)
print(res)                    
                       

        
           
   

            
            
           
        