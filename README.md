
# 📦 BigInt C++ Library

Библиотека для работы с целыми числами произвольной длины.  
Поддерживает все базовые операции, доступные для стандартных целых типов.

## ✨ Возможности
- Арифметика: `+`, `-`, `*`, `/`, `+=`, `-=`, `*=`, `/=`
- Сравнения: `==`, `!=`, `<`, `<=`, `>`, `>=`
- Инкремент/декремент: `++`, `--` (префикс/постфикс)
- Ввод/вывод через `cin` / `cout`
- Конструкторы из `long long`, `std::string` и `std::vector<int>`

## 📂 Структура
- `include/BigInt/BigInt.h` — заголовок
- `src/BigInt.cpp` — реализация

```bash
BigIntProject/
 ├── include/BigInt/BigInt.h  
 ├── src/BigInt.cpp           
 ├── CMakeLists.txt           
 └── README.md
```


## 🚀 Сборка и установка
```bash
git clone https://github.com/bequ1nG0/BigInt.git
cd BigInt
cmake -S . -B build
cmake --build build
sudo cmake --install build
```
