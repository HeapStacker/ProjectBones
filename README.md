![CPB Logo](logo.svg)

# ProjectBones - C++ starter pack

![License](https://img.shields.io/badge/license-MIT-blue.svg)  
  ![C++](https://img.shields.io/badge/C++-20-orange.svg)  
  ![Documentation](https://img.shields.io/badge/docs-Doxygen-blueviolet.svg)

## 📖 Overview

ProjectBones is a lightweight C++starter template configured with xmake, designed to accelerate the setup and bootstrap process for new C++ projects.

## 🚀 Features

- **xmake Ready:** Pre-configured `xmake.lua` for fast and clean builds out of the box.
- **Clean Project Structure:** Well-organized source and header directories for quick bootstrapping.
- **Modern C++ Setup:** Configured with modern C++ standards and best practices.
- **Lightweight Starter:** Minimal footprint, giving you total freedom to build your project.

## ⚙ Best practices

Use Conan2 prebuilt libraries if xrepo packages encounter C++ version compatibility issues.

## 📦 Installation

### Using xmake

```bash
# Install **xmake** and a **C++ toolchain** (MSVC recommended on Windows). If you encounter xrepo compatibility issues, install **Conan 2** (see Best Practices).

# Build project and documentation
xmake

# Run the application
xmake run

# Clean build
xmake clean
```

## 🤝 Contributing

Contributions are welcome! Please feel free to submit a Pull Request.

## 📄 License

This project is licensed under the MIT License - see the LICENSE file for details.
