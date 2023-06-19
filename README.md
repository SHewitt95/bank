# Bank App

## Description
A toy app for practicing C++ and Object-Oriented Programming.

## Diagram
```mermaid
---
title: App State Machine
---
stateDiagram-v2
    [*] --> Login: Start
    Login --> Verification: Log In
    Login --> AccountManagement: Create Account
    Verification --> AccountManagement: Login Success
    Verification --> Login: Login Fail
```