# ShutdownTimer

# 🇬🇧  ShutdownTimer

A lightweight command-line utility for Windows that allows you to schedule a system shutdown or restart after a specified period of time.

## ✨ Features

* ⏳ Schedule a system shutdown.
* 🔄 Schedule a system restart.
* ⌛ Built-in countdown timer.
* 🔔 Optional audible notification using the Windows API (`Beep()`).
* ❌ Cancel a scheduled operation.
* ⚡ Fast, lightweight, and dependency-free.

## 📦 Requirements

* Windows 10 / Windows 11
* C++17 or later
* Microsoft Visual Studio (or any compiler with WinAPI support)

## 🚀 Usage

Schedule a shutdown after 10 minutes:

```bash
ShutdownTimer 10m --shutdown
```

Schedule a restart after 1 hour:

```bash
ShutdownTimer 1h --restart
```

Schedule a shutdown after 30 seconds:

```bash
ShutdownTimer 30s --shutdown
```

Cancel the active timer:

```bash
ShutdownTimer cancel
```

## ⏱ Supported Time Formats

| Format  | Example |
| ------- | ------- |
| Seconds | `30s`   |
| Minutes | `15m`   |
| Hours   | `2h`    |

## 📖 Example

```text
> ShutdownTimer 15m --shutdown

Shutdown scheduled.
Action      : Shutdown
Remaining   : 15m 00s
Press Ctrl+C to exit.
```

## 🛠 Technologies

* C++
* Windows API (WinAPI)
* Console Application

## 📂 Project Goals

ShutdownTimer was created as a learning project to practice:

* Command-line application development
* Windows API programming
* Time management and countdown timers
* System-level programming
* Clean and maintainable C++ code

## 📄 License

This project is licensed under the MIT License.

See the `LICENSE` file for more information.

## 👤 Author

Developed by **Ruslan Voronenko**.

---

<br>

# 🇷🇺 ShutdownTimer

Лёгкая консольная утилита для Windows, позволяющая запланировать выключение или перезагрузку компьютера через заданный промежуток времени.

## ✨ Возможности

* ⏳ Планирование выключения компьютера.
* 🔄 Планирование перезагрузки системы.
* ⌛ Встроенный таймер обратного отсчёта.
* 🔔 Звуковое уведомление с использованием Windows API (`Beep()`).
* ❌ Отмена запланированного действия.
* ⚡ Быстрая, лёгкая и не требующая сторонних библиотек.

## 📦 Требования

* Windows 10 / Windows 11
* C++17 или новее
* Microsoft Visual Studio (или любой компилятор с поддержкой WinAPI)

## 🚀 Использование

Запланировать выключение через 10 минут:

```bash
ShutdownTimer 10m --shutdown
```

Запланировать перезагрузку через 1 час:

```bash
ShutdownTimer 1h --restart
```

Запланировать выключение через 30 секунд:

```bash
ShutdownTimer 30s --shutdown
```

Отменить активный таймер:

```bash
ShutdownTimer cancel
```

## ⏱ Поддерживаемые форматы времени

| Формат  | Пример |
| ------- | ------ |
| Секунды | `30s`  |
| Минуты  | `15m`  |
| Часы    | `2h`   |

## 📖 Пример работы

```text
> ShutdownTimer 15m --shutdown

Выключение запланировано.
Действие    : Выключение
Осталось    : 15м 00с
Для выхода нажмите Ctrl+C.
```

## 🛠 Используемые технологии

* C++
* Windows API (WinAPI)
* Консольное приложение (CLI)

## 📂 Цель проекта

Проект **ShutdownTimer** создан в образовательных целях для практики:

* разработки консольных приложений;
* работы с Windows API;
* реализации таймеров и управления временем;
* системного программирования;
* написания чистого и поддерживаемого кода на C++.

## 📄 Лицензия

Проект распространяется по лицензии **MIT**.

Подробности можно найти в файле `LICENSE`.

## 👤 Автор

Разработано **Руслан Вороненко**.
