arr = list(map(int,input().split()))
brr =[0]*len(arr)
j=0;
for  i in range(len(arr)):
    if(arr[i]%2!=0):
        brr[j]=arr[i]
        j+=1;

for i in range(len(arr)):
    if(arr[i]%2==0):
        brr[j]=arr[i]
        j+=1
        
print(brr)