""" Bijekcja w moim przykladzie, przyporzadkowuje
kazdemu podzbiorowi ciag binarny, w ktorym 1 oznacza obecnosc
elementu zbioru o tym samym indeksie"""

n = int(raw_input("Podaj n: "))

def next(s, n):
    x = []
    mask = 1
    for i in xrange(n):
        if mask & s > 0:
            x.append(i+1)
        mask = mask << 1
    return x

for s in xrange(2**n):
    print next(s, n)
