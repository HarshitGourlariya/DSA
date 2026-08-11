arr = list(map(int,input().split()))
brr =list(map(int,input().split()))

if(len(arr)!=len(brr)):
    print("false")
for i in range(len(arr)):
    if(arr[i]!=brr[i]):
        print("false")
        break;
    else:
        print("True")
        break;