arr = list(map(int, input().split()))
def check(arr):
    for i in range(1,len(arr)):
          if(arr[i]<arr[i-1]):
              return False
    
    return True;
  
res = check(arr)
print(res)
            
    