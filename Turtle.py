import turtle
tina=turtle.Turtle()
tina.shape("turtle")
tina.color("red")
seite=int(input("seitenlaenge"))
for i in range(4):
  tina.forward(seite)
  tina.right(90)
for i in range(3):
  tina.forward(seite)
  tina.left(120)
  


