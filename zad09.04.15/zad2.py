#!/usr/bin/python
# -*- coding: utf-8 -*-

""" Alorytm rank dla generowania wszystkich podzbiorow dlugosci k
w porzadku leksykograficznym."""

def get_bin_vector(t):
    bin_vector = 0
    for i in t:
        bin_vector |= 1 << i - 1
    return bin_vector


def start():
    t = raw_input("Podaj liste: ").split(' ')
    t = sorted([int(x) for x in t])

    n = int(raw_input("Podaj n: "))

    result = get_bin_vector(t)
    print result if result < 1 << n else "Wrong data"

if __name__ == '__main__':
    start()