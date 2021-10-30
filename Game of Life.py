class Solution:
    def gameOfLife(self, board: List[List[int]]) -> None:
        def decide_state(element,numberofones):
                if element==1 and 1<numberofones<4: return 1
                elif element==1 and (numberofones<2 or numberofones>3): return 0 
                elif element==0 and numberofones==3: return 1
                return element
            
        a=board
        a1=[['' for y in range(len(a[0]))] for x in range(len(a))]
        if len(a)==1 and len(a[0])>1:
            a1[0][0], a1[0][-1]=0,0
            for x in range(1,len(a[0])-1):
                a1[0][x]=decide_state(a[0][x],[a[0][x+1],a[0][x-1]].count(1))
            a[:]=a1
        elif len(a[0])==1 and len(a)>1:
            a1[0][0], a1[-1][0]=0,0 
            for x in range(1,len(a)-1):
                a1[x][0]=decide_state(a[x][0],[a[x+1][0],a[x+1][0]].count(1))
            a[:]=a1
        elif len(a)==1 and len(a[0])==1: 
            a[0][0]=0
        elif not (len(a)<2 or len(a[0])<2): 
          
            ior=len(a)-1
            ioc=len(a[0])-1
            
            
            for i in range((ior+1)):
                for j in range(ioc+1):
                    if i==0 or j==0 or i==ior or j==ioc:
                        b=[]
                        if i==0 and 1<=j<=ioc-1:b=[a[i][j-1],a[i][j+1],a[i+1][j-1],a[i+1][j], a[i+1][j+1]]
                        elif i==ior and  1<=j<=ioc-1: b=[a[i][j-1], a[i][j+1], a[i-1][j-1], a[i-1][j], a[i-1][j+1]]
                        elif j==0 and 1<=i<=ior-1:b=[a[i-1][j], a[i+1][j], a[i-1][j+1],a[i][j+1], a[i+1][j+1]]
                        elif j==ioc and 1<=i<=ior-1: b=[a[i-1][j],a[i+1][j], a[i-1][j-1], a[i][j-1], a[i+1][j-1]]
                        elif i==0 and j==0: b=[a[0][1], a[1][0], a[1][1]]
                        elif i==0 and j==ioc: b= [a[0][-2],a[1][-1], a[1][-2]]
                        elif i==ior and j==0: b=[a[-1][1],a[-2][0],a[-2][1]]
                        elif i==ior and j==ioc: b=[a[-1][-2],a[-2][-1],a[-2][-2]]
                        a1[i][j]=decide_state(a[i][j], b.count(1))
                    else:
                        c=[a[i-1][j-1], a[i-1][j], a[i-1][j+1], a[i][j-1], a[i][j+1], a[i+1][j-1], a[i+1][j],a[i+1][j+1]]
                        a1[i][j]=decide_state(a[i][j], c.count(1))
            board[:]=a1
