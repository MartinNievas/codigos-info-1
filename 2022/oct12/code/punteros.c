
char* punteros[3] = {"primera", "segunda", "otra"};
char nombre[20] = "martin";

printf("%s\n", punteros[1]);
printf("%s\n", nombre);

for (int i = 0;  nombre[i] != '\0' ; i++){
  printf("%c", nombre[i]);
}

----- |
0x00  | punteros[0]
----- |
0x09  | punteros[1]
----- |
      | punteros[2]
----- |
      |
----- |
  .
  .
  .
----- |
p     | 0x00
----- |
r     | 0x01
----- |
i     | 0x02
----- |
...
----- |
a     |
----- |
\0    | 0x08
----- |
s     | 0x09
----- |
e     |
----- |
g     |
----- |


