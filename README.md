<div align="center">
  <img src="logo.svg" alt="CPB Logo" width="100" height="100">
  
  # CPB - C++ Utility Library
  
  ![License](https://img.shields.io/badge/license-MIT-blue.svg)
  ![C++](https://img.shields.io/badge/C++-17-orange.svg)
  ![Documentation](https://img.shields.io/badge/docs-Doxygen-blueviolet.svg)
</div>

## 📖 Overview

CPB is a lightweight C++ utility library providing common functionality for everyday programming tasks.

## 🚀 Features

- **Box**: Template container for single values
- **Counter**: Simple counter with instance tracking
- **Math**: Basic mathematical operations
- **Color**: Enumeration for common colors

## 📦 Installation

### Using xmake
```bash
# Build project and documentation
xmake

# Run the application
xmake run

# Generate documentation only
xmake build docs

# Open documentation in browser
xmake build open-docs

# Clean build
xmake clean
```

## 📚 Documentation

Complete API documentation is available in the [Doxygen generated documentation](html/index.html).

## 🛠️ Quick Start

```cpp
#include "cpb/box.hpp"
#include "cpb/counter.hpp"
#include "cpb/math.hpp"
#include <iostream>

int main() {
    std::cout << cpb::add(2, 3) << '\n';  // 5
    
    cpb::Box<int> box = cpb::Box<int>::make(7);
    std::cout << box.get() << '\n';  // 7
    
    cpb::Counter counter;
    counter.bump();
    std::cout << counter.value() << '\n';  // 1
    
    return 0;
}
```

## 📁 Project Structure

```
CPB/
├── include/cpb/     # Public headers
│   ├── box.hpp
│   ├── counter.hpp
│   ├── math.hpp
│   └── color.hpp
├── src/            # Implementation
├── build/          # Build output
└── xmake.lua       # Build configuration
```

## 🤝 Contributing

Contributions are welcome! Please feel free to submit a Pull Request.

## 📄 License

This project is licensed under the MIT License - see the LICENSE file for details.