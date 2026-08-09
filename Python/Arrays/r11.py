arr = list(map(int,input().split()))


def check(arr):
    j = len(arr)-1;
    for i in range(len(arr)):
        if(arr[i]!=arr[j]):
            return False;
        j-=1;
    
    return True;

res = check(arr);
print(res)
    
    

        
    
    
        