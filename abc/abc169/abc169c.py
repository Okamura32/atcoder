from decimal import Decimal
import math

a,b=[float(x) for x in input().rstrip().split()]
a = Decimal(str(a))
b = Decimal(str(b))
print(math.floor(a*b))
