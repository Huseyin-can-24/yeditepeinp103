konto=1000
while True :
  menu=int(input('1.Einzahlen,2.Auszahlen'))
  
  if menu==1:
    geld=int(input('Wie viel Geld?'))
    konto=konto+geld
    print(konto)
    print('Karte entnehmen')
    break
  elif menu==2:
    geld=int(input('Wie viel Geld?'))
    if geld<=konto:
     konto=konto-geld
     print(konto)
     print('Karte entnehmen')
     break
    else:
      print('Konto Negativ')
      continue
      
  else:
    print('Ungultig')
    continue
print('Ende')
