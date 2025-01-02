x1=int(input('x1='))
y1=int(input('y1='))
x2=int(input('x2='))
y2=int(input('y2='))
if (x2-x1)**2==4 and (y2-y1)**2==1 :
  print('ja')
elif (x2-x1)**2==1 and (y2-y1)**2==4 :
  print('ja')
else:
  print('Nein')