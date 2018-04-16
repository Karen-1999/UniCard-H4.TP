# UniCard-H4.TP- 
                             Задание 4
                          Структурные паттерны
                        Дедлайн 08.04 20:59 UTC

Вы разрабатываете ПО для обслуживания универсальной электронной карты: она
имеет функции паспорта, страхового полиса, банковской карты и так далее на ваше
усмотрение. Ваш заказчик хочет получить от вас библиотеку, написанную на С++, которая в
дальнейшем будет использована в считывателях таких универсальных карт. Таким образом,
клиенту важно, чтобы вы предоставили простое и задокументированное API.
Задание необходимо выполнить с использованием пройденных структурных паттернов
(порождающие на ваше усмотрение). Для сборки должен быть написан соответствующий
CMakeLists, который также генерирует doxygen-документацию.
Должна быть возможность собрать проект в следующих режимах:
- с тестами в debug режиме
- с тестами в release режиме
- без тестов в debug режиме
- без тестов в release режиме
Также, обязательным требованием является соблюдение чистоты кода и следование
выбранному codestyle. И помните о покрытии тестами. Заказчик хочет получить качественный
код!

Скоуп работ:

использован хотя бы один паттерн: Proxy/Decorator 5%
сборка с помощью CMakeLists (не забудьте про генерацию доков!) 5%
в CMakeLists присутствует возможность собрать во всех требуемых
режимах 5%
тесты 15%
уместность применения Proxy/Decorator 10%
уместность применения остальных паттернов 25%
прозрачность и простота разработанного API 35%
