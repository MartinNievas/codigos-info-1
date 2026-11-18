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

## Probar consulta clima:
```bash
gcc consulta_api_clima.c -lcurl -o httpget
$./a.out
```

## Probar gatos:
Reemplazar `<bot-token` y `<chat-id>` con los valores del bot:
```bash
gcc httpget_cats.c cJSON.c -lcurl -o a.out
./a.out "https://catfact.ninja/fact" "https://api.telegram.org/bot<bot-token>/sendMessage?chat_id=<chat-id>=&text="
```

## Compilar desde zinjai
Agregar en las opciones las biblioteca `cJSON.c`, `-lcurl` y la api que queremos consultar:
![Captura de pantalla de 2022-10-28 08-16-22](https://user-images.githubusercontent.com/24465803/198575552-a85a436a-7215-42c3-9166-6ff5cf5494eb.png)
