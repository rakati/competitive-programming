import sys

n = int(input())
a = int(input())
b = int(input())
if a > b:
    c = 0
    while c * a <= n:
        if (n - (c * a)) % b == 0:
            print("YES")
            print(str(c) + ' ' + str((n - (c * a)) / b))
            sys.exit()
        c += 1
else:
    c = 0
    while c * b <= n:
        if (n - (c * b)) % a == 0:
            print("YES")
            print(str((n - (c * b)) / a) + ' ' + str(c));
            sys.exit()
        c += 1
print ("NO")