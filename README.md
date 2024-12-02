
# **Ft_printf**

## **Description**

The `ft_printf` project is part of the 42 School curriculum, where you are tasked with recreating the functionality of the standard C library function `printf`. The project focuses on understanding variadic functions, formatted output, and efficient string manipulation.

---

## **Features**

The `ft_printf` function replicates the behavior of `printf` for the following format specifiers:
- **`%c`**: Prints a single character.
- **`%s`**: Prints a string.
- **`%p`**: Prints a pointer address in hexadecimal format.
- **`%d`**: Prints a decimal (base 10) number.
- **`%i`**: Prints an integer (base 10).
- **`%u`**: Prints an unsigned decimal (base 10) number.
- **`%x`**: Prints a hexadecimal number (lowercase).
- **`%X`**: Prints a hexadecimal number (uppercase).
- **`%%`**: Prints a percent sign.

---

## **Files**

1. **`ft_printf.c`**  
   - Contains the main implementation of the `ft_printf` function.
   - Parses the format string and handles the specified format specifiers.

2. **`ft_printf.h`**  
   - Header file with function prototypes and required includes.

3. Other utility functions for common tasks like converting numbers to strings or printing characters.
     
---

## **Implementation Details**

### **Function Prototype**
```c
int ft_printf(const char *format, ...);
```
- **Parameters**:
  - `format`: A format string containing the text and format specifiers.
  - `...`: Variadic arguments corresponding to the format specifiers.
- **Return Value**:
  - The total number of characters printed.

### **Variadic Functions**
- The project uses variadic functions via the `<stdarg.h>` library:
  - `va_start`: Initializes the argument list.
  - `va_arg`: Retrieves the next argument.
  - `va_end`: Cleans up the argument list.

---

## **Key Features**

1. **Norm Compliance**  
   The code strictly adheres to the 42 Norm.

2. **Custom Implementations**  
   - Handles base conversions (decimal, hexadecimal).
   - Works with pointers and unsigned integers.

3. **Error Handling**  
   - Ensures correct behavior for invalid or unsupported format specifiers.

---

## **Testing**

### **Example Test Cases**
1. **Basic Output**
   - Test with simple strings and characters.
   - Example: `ft_printf("Hello, %s!", "world");`

2. **Numbers**
   - Test with signed and unsigned integers.
   - Example: `ft_printf("Number: %d", 42);`

3. **Edge Cases**
   - Handle null pointers and empty strings.
   - Example: `ft_printf("%s", NULL);`

4. **Comparison with `printf`**
   - Validate the output and return values against the standard `printf`.

### **Third-Party Testers**
Use community-created testers such as:
- [printf-tester](https://github.com/Tripouille/printfTester)

---

## **Challenges**

1. **Variadic Functions**  
   Understanding and managing variadic arguments effectively.

2. **Precision and Width Handling**  
   Managing width, precision, and flags (if implemented as a bonus).

3. **Performance**  
   Ensuring efficient memory usage and minimizing unnecessary computations.

---

## **Acknowledgments**

This project is part of the 42 School curriculum. It builds a strong foundation for understanding advanced C concepts, including variadic functions and formatted output.

---

