# 🔐 Password Strength Checker

A simple C++ application that evaluates password strength based on common security rules.

---

## 📌 Overview

This project analyzes a password and classifies it as **Weak**, **Medium**, or **Strong** based on the following criteria:

- Password length (8+ characters)
- Uppercase letters
- Lowercase letters
- Numbers
- Special characters

The project was built to practice **C++ programming** and apply a basic **cybersecurity concept**.

---

## ✨ Features

- ✅ Check password length
- ✅ Detect uppercase letters
- ✅ Detect lowercase letters
- ✅ Detect numbers
- ✅ Detect special characters
- ✅ Calculate a security score (0-5)
- ✅ Display password strength
- ✅ Show missing security requirements

---

## 🛠️ Built With

- C++
- Object-Oriented Programming (OOP)
- Standard Library
  - iostream
  - string

---

## ▶️ How to Run

### Compile

```bash
g++ main.cpp -o PasswordChecker
```

### Run

```bash
./PasswordChecker
```

---

## 💻 Example

### Input

```text
Enter password:
Cyber123!
```

### Output

```text
=============================
 Password Analysis Result
=============================
Score: 5/5
Strength: STRONG

Missing Requirements:
None. Your password meets all basic requirements.
=============================
```

---

## 📷 Program Screenshot

> Add a screenshot of the program running here.

Example:

![Program Screenshot](images/screenshot.png)

---

## 📚 What I Learned

Through this project I practiced:

- Classes and Objects
- Functions
- Loops
- Conditional Statements
- String Processing
- Password Validation Logic
- Clean Code Organization

---

## 🚀 Future Improvements

- Estimate password entropy
- Detect common passwords
- Support multiple password checks
- Improve password recommendations
- Build a graphical user interface (GUI)

---

## 👨‍💻 Author

**Ramez Alsaade