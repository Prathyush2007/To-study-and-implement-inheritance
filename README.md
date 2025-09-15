To Study and Implement Inheritance

Name: Prathyush Nimmagadda

PRN: 24070123064

Batch: ENTC A3

Overview

Inheritance in C++ is one of the core concepts of Object-Oriented Programming (OOP).
It enables a derived class (child class) to acquire the properties and behaviors of an existing base class (parent class).
This promotes code reuse, extensibility, and a hierarchical class structure.

Benefits of inheritance:

Eliminates code repetition.

Makes programs easier to maintain and extend.

Types of inheritance covered in this experiment:

Single Inheritance

Multiple Inheritance

Multilevel Inheritance

Hierarchical Inheritance

Access Specifier Inheritance

1. Single Inheritance

In single inheritance, one base class passes its features to a single derived class.

It represents a direct parent–child relationship.

This is the simplest and most common form of inheritance.

Example: A Pet class derived from Animal, reusing attributes like type and sound.

Analogy: A Car deriving basic features from a Vehicle.

Output:
Type: Dog
Name: tommy
Barks

2. Multiple Inheritance

In multiple inheritance, a class is derived from two or more base classes.

It allows combining features of different classes into a single derived class.

A challenge is ambiguity (the diamond problem), which can be resolved using virtual inheritance.

Example: A Car class inheriting brand and color from Vehicle, and horsepower from Engine.

Analogy: A Smartphone having functionalities of both a Camera and a Phone.

Output:
Brand: Ford
Model: Mustang
Year: 2024
Horsepower: 450
Color: Red
Engine Type: V8

3. Multilevel Inheritance

In multilevel inheritance, a class is created from another derived class, forming a chain.

Features of the base class flow through intermediate classes down the hierarchy.

Example: LivingBeing → Animal → Dog

LivingBeing defines general traits,

Animal specifies further characteristics,

Dog provides detailed specialization.

Analogy: Grandparent → Parent → Child.

Output:
French Bulldog
Animals eat food
Dog colour
black

4. Hierarchical Inheritance

In hierarchical inheritance, several derived classes share a single base class.

Each derived class inherits common features but also defines unique behavior.

Example: Base class Gadget, with Smartphone, Laptop, and Smartwatch as derived classes.

Analogy: A Teacher, Doctor, and Engineer all deriving from the general class Person.

Output:
Smartphone:
Powering on the device
Smartphone can make calls

Laptop:
Powering on the device
Laptop can run C++ programs

Smartwatch:
Powering on the device
Smartwatch tracks heart rate

5. Access Specifier Inheritance

Access specifiers (public, protected, private) determine how base class members are available in the derived class.

Public Inheritance:

Public members → Public in derived.

Protected members → Protected in derived.

Private members → Inaccessible.

Protected Inheritance:

Public and Protected members → Protected in derived.

Private members → Inaccessible.

Private Inheritance:

Public and Protected members → Private in derived.

Private members → Inaccessible.

Example: Vehicle → Car → ElectricCar, where only public and protected members are inherited, while private ones stay hidden.

Analogy: Security levels — public info is open to all, protected info is limited to family, and private info is fully hidden.

Output:
Enter Fuel Type: Diesel
Enter Horsepower: 4500
Enter Number of Seats: 6
Engine Started
Engine Stopped
