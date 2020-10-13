#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{

    int fd = open("/sys/class/leds/asus::kbd_backlight/brightness", O_WRONLY);
    if (fd == -1) {
        printf("No se puede abrir el archivo.\n");
        exit(1);
    } else {

      printf("Archivo abierto.\n");

      for (int i = 0; i < 100; i++) {
        if (write(fd, "3", 1) != 1) {
            perror("Error al escribir el archivo /sys/class/leds/asus::kbd_backlight/brightness");
            exit(1);
        }

        sleep(1);

        if (write(fd, "0", 1) != 1) {
            perror("Error al escribir el archivo /sys/class/leds/asus::kbd_backlight/brightness");
            exit(1);
        }

        sleep(1);
      }

    }

    close(fd);

    return 0;
}
