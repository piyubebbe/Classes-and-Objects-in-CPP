# C++ Programs – Cuboid Class Implementations

## Aim
To understand the use of **classes**, **member functions**, **access specifiers**, and **object-oriented programming concepts** in C++ by calculating the volume of a cuboid.

## Software Used
- Mingw compiler  
- Visual Studio Code  
- Online C++ compiler  

---

## Program 1 – Cuboid Class with Public Data Members (Direct Calculation in `main()`)

**Explanation & Theory:**  
In this program, the `cuboid` class has three **public** data members: `height`, `width`, and `length`. An object `c1` is created, and its volume is calculated directly in the `main()` function by multiplying these values.

**Algorithm:**
1. Start  
2. Create `cuboid` class with public data members  
3. Initialize height = 2, width = 3, length = 5  
4. Create an object of the class  
5. Calculate volume in `main()` as `height * width * length`  
6. Display the volume  
7. End  

## Program 2 – Cuboid Class with Member Function for Volume Calculation

### Explanation & Theory
This version encapsulates the volume calculation inside a **public member function** called `volume()`.  
The function returns the computed volume, keeping the logic organized within the class.

### Algorithm
1. **Start**  
2. Create `cuboid` class with public data members and a `volume()` method  
3. Initialize `height`, `width`, and `length` with fixed values  
4. Create an object of the class and call the `volume()` method  
5. Display the volume  
6. **End**

## Program 3 – Cuboid Class with Private Data Members

### Explanation & Theory
This version demonstrates **data hiding** by making the dimensions private.  
The `volume()` method is public and accesses the private members to compute the result.  
This enforces **encapsulation** and ensures that the dimensions cannot be directly modified from outside the class.

### Algorithm
1. **Start**  
2. Create `cuboid` class with private `height`, `width`, and `length`  
3. Create a public `volume()` method to compute the volume  
4. Create an object and call the `volume()` method  
5. Display the volume  
6. **End**

## Program 4 – Cuboid Class with User Input

### Explanation & Theory
In this version, the cuboid dimensions are entered by the user using an `input()` method.  
The `volume()` method then calculates and displays the result.  
This approach makes the program more dynamic by allowing user-defined values.

### Algorithm
1. **Start**  
2. Create `cuboid` class with public `height`, `width`, and `length` variables  
3. Create an `input()` method to take dimensions from the user  
4. Create a `volume()` method to calculate and display the result  
5. In `main()`, create an object and call `input()` followed by `volume()`  
6. **End**

### Conclusion
Through these four programs, we:  

- Learned how to create a class and define data members and member functions.  
- Understood **public** vs **private** access specifiers in C++.  
- Saw how to calculate volume directly in `main()` and using member functions.  
- Learned how to take user input for object properties.


