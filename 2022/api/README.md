# Instrucciones
1. Instalar dependencias:
```bash
sudo apt update
sudo apt upgrade
sudo apt-get install libcurl4-openssl-dev
```

2. Compilar con gcc:
```bash
gcc httpget.c -lcurl -o httpget
```
## Probar Telegram:
```bash
$./httpget "https://api.telegram.org/bot<bot_token>/sendMessage?chat_id=<chat_ID>&text=Hola Mundo "
```
## Probar gatos:
```bash
./a.out "https://catfact.ninja/fact"
```
## Probar bondis:
```bash
./a.out "https://cordobus.apps.cordoba.gob.ar/tracking/api/internos-activos-ahora/?linea=43"
```

## Compilar desde zinjai
Agregar en las opciones las biblioteca `cJSON.c`, `-lcurl` y la api que queremos consultar:
![Captura de pantalla de 2022-10-28 08-16-22](https://user-images.githubusercontent.com/24465803/198575552-a85a436a-7215-42c3-9166-6ff5cf5494eb.png)
