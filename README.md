# ChatApp
> To ensure clarity, the following text is provided in both English and Russian!

This is simple app, that use local network (e.g. mobile hot-spot) to communication between tho devices. Repository include Client and Cerver file that you can execute via g++ if you have SFML libriry. In order to correct working Client have to write Server local IP Address in string
```
sf::Socket::Status status = socket.connect("192.168.0.101", 5001, timeout);
```
In order to received IP Address server's can use 
```
localhost -I
```
Repository include `run.sh` file that help once execute executable files ``sh run.sh Filename.cpp``. 

-----------

If once want just send apply Client possible compile Client.cpp from ChatApp folder 

``` 
g++ ../Client.cpp -o Client.my -lsfml-network -lsfml-system
``` 

and send only this folder. Now client can just execute ```sh run.sh``` w/o g++ compiler and SFML lib. 
>Be shure that client has actual IP Addresses of Server, in over way conection is't able.
>Client can have problem with permission, that can be solved the next way
>```
>chmod +x Client.my
>chmod +x run.sh
>```
## Attention 
In latest version Client ads Server have to send messange in the order (send messenge only then see `` "You: `` in command shell.

## Additionaly
The purpose this project is overview the transport layer by OSI system and obtain initually performance about socket, TCP, UDP and network connection in general. The project was complited on 2 course of MIPT in the end of 2025 year.

# ChatApp
> Для ясности, следующий текст представлен на английском и русском языках!

Это простое приложение, которое использует локальную сеть (например, мобильную точку доступа) для общения между двумя устройствами. Репозиторий включает файлы Клиента и Сервера, которые вы можете скомпилировать через g++, если у вас есть библиотека SFML. Для корректной работы Клиенту нужно прописать локальный IP-адрес Сервера в строке:
```
sf::Socket::Status status = socket.connect("192.168.0.101", 5001, timeout);
```
Чтобы получить IP-адрес сервера, можно использовать команду:
```
hostname -I
```
Репозиторий включает файл `run.sh`, который помогает сразу запустить исполняемые файлы: ``sh run.sh Filename.cpp``.

---

Если хочется просто отправить приложение Клиенту, можно скомпилировать `Client.cpp` из папки `ChatApp`:
```
g++ ../Client.cpp -o Client.my -lsfml-network -lsfml-system
```

и отправить только эту папку. Теперь клиент может просто выполнить ```sh run.sh``` без компилятора g++ и библиотеки SFML.
>Убедитесь, что у клиента актуальный IP-адрес Сервера, иначе соединение не установится.
>У клиента могут быть проблемы с правами доступа, которые можно решить следующим образом:
>```
>chmod +x Client.my
>chmod +x run.sh
>```
## Внимание
В последней версии Клиент и Сервер должны отправлять сообщения по очереди (отправлять сообщение только тогда, когда видишь `` "You: `` в командной строке).
## Additionaly
The purpose this project is overview the transport layer by OSI system and obtain initually performance about socket, TCP, UDP and network connection in general. The project was complited on 2 course of MIPT in the end of 2025 year.
