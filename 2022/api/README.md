# Instrucciones
1. Instalar dependencias:
```bash
sudo apt update
sudo apt upgrade
sudo apt-get install libcurl4-openssl-dev
```

2. Compilar con:
```bash
gcc httpget.c -lcurl -o httpget
```

3. Probar:
```bash
$./httpget "https://api.telegram.org/bot<bot_token>/sendMessage?chat_id=<chat_ID>&text=Hola Mundo "
```
