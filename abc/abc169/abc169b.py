import sys
n=int(input())
a=[int(x) for x in input().rstrip().split()]
a.sort()
if a[0]==0:
  print(0)
else:
  ans=1
  for i in a:
    ans*=i
    if 10**18<ans:
      print(-1)
      sys.exit()
  print(ans)
