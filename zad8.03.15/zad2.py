n = int(raw_input("Podaj n: "))
k = int(raw_input("Podaj k: "))

x = [i+1 for i in xrange(k)]
print x

def next(x):
    return [i+1 for i in x]

while x[-1] != n:
    x = next(x)
    print x
