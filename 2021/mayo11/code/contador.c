promedio = 0
contador = 0
contador_notas_mayores_10 = 0

mientras contador menor que 10 entonces
  Imprimir:”Ingrese nota: “
  Leer: nota
  promedio += nota
  contador = contador + 1

  fin

promedio = promedio / contador
imprimir: promedio
------------------------------------------
promedio|contador|contador menor que 10|nota|promedio|contador|
0       |       0|          si         |7   |7       |1       |
7       |       1|          si         |4   |11      |2       |
11      |       2|          si         |....
.......
##      |       9|          si         |##  |##      |10      |
##      |      10|          no

promedio = ## / 10




