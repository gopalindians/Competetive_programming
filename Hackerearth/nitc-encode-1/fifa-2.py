"""
    link    :- https://www.hackerearth.com/nitc-encode-1/algorithm/fifa-2/
    problem :- FIFA
"""
n=input()
a=[map(int,raw_input().split())for i in range(n)]
c=[0]*(8**6)
for i in range(n):c[a[i][0]]+=1
for i in range(n):print n-1+c[a[i][1]],n-1-c[a[i][1]]
