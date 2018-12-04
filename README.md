[![pipeline status](https://gitlab.com/allnes/graph_partition/badges/master/pipeline.svg)](https://gitlab.com/allnes/graph_partition/commits/master)
[ ![Codeship Status for allnes/graph_partition](https://app.codeship.com/projects/b835dd10-d719-0136-841e-264e52b87e69/status?branch=master)](https://app.codeship.com/projects/317102)

# ITLab 2018
## <b><i>Тема</i></b>: Огрубление графов

### Обозначение модулей:

| **Модуль**     | **Обозначение**                                                          |
|----------------|--------------------------------------------------------------------------|
| algorithms     | Модуль основных алгоритмов (bfs, dfs, dijkstra, matching, partition ...) |
| application    | Модуль запуска проекта (main.cpp)                                        |
| common         | Модуль функций общего назначения (чтение/запись файла ...)               |
| data_structure | Модуль структур данных (в том числе структур хранения графов)            |
| generators     | Модуль алгоритмов генерации графов определнной структуры                 |
| tests          | Модуль google tests                                                      |
| benchmark      | Модуль google benchmark                                                  |

### Инструкция по сборке и запуску
```
Note:
- для построения компилятором clang нужно установить следующую библиотеку:
  sudo apt-get install libiomp-dev
- для проверки стиля кодирования нужно устновить python библиотеку:
  pip3 install cppcheck
  (использовать python: version 3)
```

`python3 build.py <команда>`


| Описание                            | Команда                  |
|-------------------------------------|--------------------------|
| Проверка стиля кодирования          | `lint`                   |
| Построение библиотеки               | `build <компилятор>`     |
| Запуск модульного тестирования      | `gtest <компилятор>`     |
| Запуск тестов на производительность | `benchmark <компилятор>` |
| Запуск main()                       | `run <компилятор>`       |

### Материалы:
* Ссылка на [Google drive](https://drive.google.com/drive/folders/1tVuATbCl1Kc5TMwlbntEZXAiG7QLDulV?usp=sharing)
