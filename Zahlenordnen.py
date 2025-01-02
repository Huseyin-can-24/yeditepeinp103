while True:
  z1=int(input("Zahl1"))
  z2=int(input("Zahl2"))
  if z1<z2:
    for i in range(z1,z2+1): 
      print(i)
  elif z1>z2:
    for i in range(z2,z1+1): 
      print(i)
  else:
    print("Ungültige Eingabe")
print("Ende")