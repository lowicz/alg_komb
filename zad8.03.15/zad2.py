print "Podaj n i k: "
n = int(raw_input())
k = int(raw_input())

x = [i+1 for i in xrange(k)]
print x

def next(x):
    return [i+1 for i in x]

while x[-1] != n:
    x = next(x)
    print x
