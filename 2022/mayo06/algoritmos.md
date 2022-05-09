# Ejercicio 5
En un local se hace un descuento del %20 cuando la compra supera los $ 1000. Escribir un
algoritmo que calcule el precio a pagar por el cliente teniendo como dato el valor de la compra.

En pseudocódigo no se definen las variables
```
Imprimir: "Ingrese el valor de la compra: "
Leer: valor_compra

Si valor_compra > 1000 entonces
  descuento = valor_compra * 0.2
  precio_final = valor_compra - descuento
  Imprimir: "El precio a pagar es: " precio_final
sino
  Imprimir: "El precio a pagar es: " valor_compra
fin
```

100 ------- valor_compra
20  -------

20*valor_compra/100
(20/100)*valor_compra
0.2*valor_compra


                  (Inicio)
                     |
                     V
[ Imprimir: "Ingrese el valor de la compra: "]



```
Imprimir: "Ingrese el valor de la compra: "
Leer: valor_compra

Si valor_compra > 1000 entonces
  descuento = valor_compra * 0.2
  precio_final = valor_compra - descuento
sino
  precio_final = valor_compra
fin

Imprimir: "El precio a pagar es: " precio_final
```
