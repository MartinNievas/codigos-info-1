Si se define un puntero como FILE *fp, las expresiones
rewind(fp);
y
fseek(fp, 0, SEEK_SET);
son equivalentes.

rewind(fp);
Re inicializa el puntero del archivo, al inicio

fseek(fp, 0, SEEK_SET);
Desplaza el puntero fp 0 lugares a partir del inicio del archivo


Si se cuenta con un archivo de texto al que se quiere agregar información pero también leer, seleccione cual es el modo de apertura correcto

a+
wb+
rb+
r+
w+

