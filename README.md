# Lin-Algebra
Implementation of basic linear algebra in C (Gaussian elimination, matrix utilities)
# 🧮 Linear Algebra in C

A simple implementation of fundamental linear algebra operations written in pure C (C99).  
This project includes Gaussian elimination, elementary row operations, and matrix utility functions.

---

## 📂 Project Structure
| Folder | Description |
|--------|--------------|
| `src/` | Source code files (C implementations) |
| `header/` | Header files (.h definitions and declarations) |
| `bin/` | Compiled binaries and executables (excluded from Git) |
| `.vscode/` | VS Code build and debug configuration files |

---

## ✨ Features
- **Elementary Row Operations (ERO):** Swap, Scale, and Add operations  
- **Gaussian Elimination:** Convert matrices into REF (Row Echelon Form)  
- **Matrix Properties:** Check equality, symmetry, and near-zero values using EPSILON  
- **Utility Functions:** Formatted matrix printing, floating-point tolerance handling

---

## ⚙️ Build Instructions
```bash
gcc -std=c11 -O2 -Iheader src/*.c -o bin/app.exe
```
Compile the project using GCC (MinGW recommended on Windows).
Make sure that the header folder is included in the include path (-Iheader).

---

## 🚀 Future Improvements
- Implement **Gauss–Jordan elimination (RREF)**
- Add **LU decomposition** and **determinant calculation**
- Implement **matrix inversion** and **rank evaluation**
- Build a **CLI-based matrix calculator**
- Build a **GUI-based matrix calculator**

## 📘 License

This project is distributed under the MIT License.
Feel free to use, modify, and share it for educational or personal purposes.
