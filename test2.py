import serial
import pygame
import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BOARD)
pygame.init()
f4 = pygame.mixer.Sound('rock.wav')


ser = serial.Serial('/dev/ttyACM2',9600)
s = [0]
while True:
	read_serial=ser.readline()
	s[0] = str(int (ser.readline(),16))
	f4.play()
	
