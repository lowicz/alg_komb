#!/usr/bin/env python
# -*- coding: utf-8 -*-

STOP_A = 'Polonez'
STOP_B = 'Wojska Polskiego'
ACTUAL_TIME = 17
SCHEDULE = [[('Zamek', 2), ('Polonez', 7), ('Wojska Polskiego', 12), ('Słowiańska', 17), ('Solidarności', 21)], [('Zamek', 10), ('Polonez', 15), ('Wojska Polskiego', 21), ('Słowiańska', 24), ('Solidarności', 28)],[('Zamek', 17), ('Polonez', 22), ('Wojska Polskiego', 29), ('Słowiańska', 32), ('Solidarności', 36)], [('Zamek', 22), ('Polonez', 30), ('Wojska Polskiego', 37), ('Słowiańska', 40), ('Solidarności', 45)]]

def calculateRoadTime(stopA, stopB, actualTime, schedule):
	bufor = [y for x in schedule for y in x if stopA in y and y[1] >= actualTime]
	for i in schedule:
		if min(bufor) in i: workDict = dict(i); return workDict[stopB]

try:
	print calculateRoadTime(STOP_A, STOP_B, ACTUAL_TIME, SCHEDULE)
except: 
	print "Błędne parametry wejściowe"
