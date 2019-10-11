s = int(raw_input())
def count(s):
    d = 0
    for i in str(s):
        d += int(i)
    return d
d = count(s)
while d % 4 != 0:
    s += 1
    d = count(s)
print(s)