# include < stdio .h >
# define CANT_ALU 3
struct alumno {
  int legajo ;
  char nombre [20];
  char apellido [20];
  char curso [3];
  int notas [4];
  float promedio ;
  char estado ;
};

int main ( void )
{
  struct alumno alumnos [ CANT_ALU ];

  return 0;
}
