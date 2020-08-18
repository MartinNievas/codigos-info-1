 Español
=========

Este proyecto está configurado para utilizar OpenGL con GLUT. En la configuración 
para Windows se utiliza freeglut y se enlaza estáticamente (no requiere ningún 
dll). Para realizar un enlace dinámico hay que cambiar el nombre de la librería 
a enlazar freeglut_static por freeglut y quitar la definición de la macro
FREEGLUT_STATIC (ejecucion->limpiar antes de volver a compilar).

La biblioteca glew se incluye en su versión para Windows, pero el proyecto no 
está configurado para utilizarla. Si así lo requiere, debe añadir glew32s a la lista 
de bibliotecas a enlazar y GLEW_BUILD y GLEW_STATIC a la lista de macros a definir 
en las opciones de compilación y enlazado del proyecto. Si prefiere enlazado dinámico
utilice glew32 en lugar de glew32s, y no agregue GLEW_STATIC.

Los archivos de estas bibliotecas (cabeceras, objetos, y dlls) se encuentran en 
la carpeta OpenGL dentro de MinGW. Si va a utilizar enlazado dinámico recuerde 
copiar bin/freeglut.dll y cin/glew32.dll al directorio de su programa para o 
agregar este directorio bin a la variable PATH (esto hace ZinjaI) para ejecutarlo 
por fuera de ZinjaI. 



 English
=========

This project is set to use OpenGL with GLUT. In the Windows' configuration
freeglut is used and linked statically (so it won't require any dll file).
To perform a dynamic linkage you must change the name of the library to link from
freeglut to freeglut_static, an delete the macro FREEGLUT_STATIC definition.
(use Run->Clean before recompiling). 

Glew library is included in the Windows' version, but the project is not configured 
to use. If you need it, you must add glew32s to the list libraries to link and 
GLEW_BUILD and GLEW_STATIC to the list of macros to define in the compile and 
link options for the project. If you prefer dynamic linkage, use glew32 instead of
glew32s, and do not add GLEW_STATIC. 

Files for these libraries (headers, objects, and DLLs) are located in an OpenGL 
folder within MinGW folder. If you are using dynamic linking remember copying 
freeglut.dll and glew32.dll to your project's working director, or append that
bin folder to the PATH env variable (that's what ZinjaI's do).