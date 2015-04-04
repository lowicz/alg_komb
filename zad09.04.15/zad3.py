#!/usr/bin/python
# -*- coding: utf-8 -*-

""" Alorytm unrank dla generowania wszystkich podzbiorow dlugosci k
w porzadku leksykograficznym."""

def unrank(s, n):
    x = []
    mask = 1
    for i in xrange(n):
        if mask & s > 0:
            x.append(i+1)
        mask = mask << 1
    return x

def start():
    s = int(raw_input("Podaj range: "))
    n = int(raw_input("Podaj n: "))

    print unrank(s, n)

if __name__ == '__main__':
    start()