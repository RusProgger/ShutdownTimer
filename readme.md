# ShutdownTimer

# ShutdownTimer

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
