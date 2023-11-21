# TimeMetric
Простая библиотека для замера времени выполнения различных операций в cpp

*note*: реализована на коленке и не претендует на высокую производительность. С другой стороны, вряд ли можно как-то упростить вычисления.

## Инструкция / instruction
Подключение через CMake. Автор (я) рекомендую подключать через CMake. В моей структуре проекта предполагается помещение всех библиотек в папку include:
```
/include
    /lib1
        /include
        /src
            header1.h
            header2.h
            source.cpp
        CMakeLists.txt
    /lib2
        ...
        ...
...
src/
    ...
    main.cpp
CMakeLists.txt
```

### Установка

1. Установка через терминал в линуксе

Install via intergrated linux terminal
```
cd <path to root project>
mkdir include && cd include
git clone https://github.com/bar2104y/TimeMetric.git
```
Или любым другим способом поместить файлы в `.../include/TimeMetric/`

2. Подключить библиотеку в корневом CMakeLists.txt
```
...
add_subdirectory(include/TimeMetric)
...
add_executable(<your exectable here>)
...
target_link_libraries(<your exectable here> PUBLIC
                TimeMetric)
target_include_directories(<your exectable here> PUBLIC
                include/TimeMetric/src)
```

3. Готово, можно собирать.

### Install and configure
1. Install via intergrated linux terminal
```
cd <path to root project>
mkdir include && cd include
git clone https://github.com/bar2104y/TimeMetric.git
```
You can put files of this repository to `.../include/TimeMetric/` by using another way

2. Include library t root CMakeLists.txt
```
...
add_subdirectory(include/TimeMetric)
...
add_executable(<your exectable here>)
...
target_link_libraries(<your exectable here> PUBLIC
                TimeMetric)
target_include_directories(<your exectable here> PUBLIC
                include/TimeMetric/src)
```

3. Ready, you can build project

## Контакты/Contacts
Всегда можно форкнуть или открыть issue, вроде как этот проект со мной надолго.

Актуальные контакты можно найти на [моем сайте](http://ybarichev.ru)

Actual contacts you can find on [my site](http://ybarichev.ru)