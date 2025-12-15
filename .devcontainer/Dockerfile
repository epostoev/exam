FROM gcc:latest

# Установка GDB и других полезных инструментов
RUN apt-get update && apt-get install -y \
    gdb \
    make \
    valgrind \
    && rm -rf /var/lib/apt/lists/*

# Рабочая директория
WORKDIR /workspace