t=int(input())
for _ in range(t):
    n=int(input())
    s=input()
    count=0
    for i in range(n//2):
        if s[i]!=s[n-1-i]:
            count=count+1 
    if (count%2==1 and n%2==1) or (count%2==0):
        print("YES")
    else:
        print("NO")
        