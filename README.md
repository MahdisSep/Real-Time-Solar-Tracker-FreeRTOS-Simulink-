# ☀️ Real-Time Dual-Axis Solar Tracker: Model-Based Design with FreeRTOS

### 🌟 Project Overview

This is the final project for the Embedded Systems course, focusing on the design and real-time implementation of an **Intelligent Dual-Axis Solar Tracking System**. The project utilizes a **Model-Based Design (MBD)** approach, transitioning from a functional model in Simulink to a real-time embedded implementation using **FreeRTOS** for task scheduling and concurrency control.

The system autonomously adjusts a solar panel's angle to maximize energy capture while monitoring environmental conditions (temperature, humidity) and managing energy output.

---

### ⚙️ Technologies and Methodologies

| Category | Tools / Techniques | Key Components / Concepts |
| :--- | :--- | :--- |
| **Modeling & Control** | **Simulink/MATLAB**, Stateflow (Expected per Proposal) | **Model-Based Design (MBD)**, System Modeling (`.slx`), State Machine Logic |
| **Real-Time OS** | **FreeRTOS** (via PlatformIO/VS Code) | **Task Scheduling** (Priorities, Preemption), **Inter-Task Communication** (Queues/Semaphores), **Real-Time Constraints** |
| **Hardware/Platform** | Arduino/ESP32 (Simulated via **Tinkercad**) | LDR Sensors, Servo Motors, Voltage/Current Sensors, Temperature/Humidity Sensors |
| **Code** | **C/C++** | Microcontroller Programming, RTOS API Integration, Low-level I/O |

---

### 🎯 Key Engineering Challenges and Solutions

1.  **Dual-Axis Optimization:** Developed the core control algorithm to continuously calculate and adjust the panel's angle based on four LDR sensor inputs to achieve optimal solar incidence.
2.  **Concurrency and Real-Time Control:** Implemented the system using **FreeRTOS tasks** (e.g., Tracking Task, Energy Management Task, Environmental Monitoring Task) to ensure non-blocking, priority-based execution, crucial for a control system.
3.  **Inter-Task Communication (ITC):** Used **Critical Sections** (or Semaphores/Queues, as per the proposal) to manage shared resources (e.g., current angles, energy status) between concurrent tasks without data corruption.
4.  **Hardware-in-the-Loop Simulation:** Verified the logic using the Simulink model and then confirmed system behavior in the **Tinkercad** environment before final deployment (as described in the project statement).

---

### 🔑 Key Deliverables and Results

* **Functional Simulink Model:** A complete block diagram of the tracking mechanism and embedded logic (`SolarTrackingModel.slx`).
* **Real-Time Codebase (`main.cpp`):** A C++ implementation demonstrating a clear separation of concerns via three main FreeRTOS tasks with defined priorities.
* **Energy Management:** Successfully implemented logic to check for low energy conditions and trigger an alarm (e.g., turning on an LED).
* **Comprehensive Documentation:** (If available, mention the Final Report here).

---
### Showcase

#### Example results of Descriptive Section

![./HW1-Dice-Simulation-and-Sampling/results1.png](https://github.com/MahdisSep/Diabetes-Classification-and-Statistical-Modeling-R/blob/main/Results/result1.png)
![./HW1-Dice-Simulation-and-Sampling/results1.png](https://github.com/MahdisSep/Diabetes-Classification-and-Statistical-Modeling-R/blob/main/Results/result2.png)
![./HW1-Dice-Simulation-and-Sampling/results1.png](https://github.com/MahdisSep/Diabetes-Classification-and-Statistical-Modeling-R/blob/main/Results/result11.png)
![./HW1-Dice-Simulation-and-Sampling/results1.png](https://github.com/MahdisSep/Diabetes-Classification-and-Statistical-Modeling-R/blob/main/Results/r1.png)

#### Example results of Predictive Section

![./HW1-Dice-Simulation-and-Sampling/results1.png](https://github.com/MahdisSep/Diabetes-Classification-and-Statistical-Modeling-R/blob/main/Results/r4.png)
![./HW1-Dice-Simulation-and-Sampling/results1.png](https://github.com/MahdisSep/Diabetes-Classification-and-Statistical-Modeling-R/blob/main/Results/r5.png)
![./HW1-Dice-Simulation-and-Sampling/results1.png](https://github.com/MahdisSep/Diabetes-Classification-and-Statistical-Modeling-R/blob/main/Results/r6.png)
![./HW1-Dice-Simulation-and-Sampling/results1.png](https://github.com/MahdisSep/Diabetes-Classification-and-Statistical-Modeling-R/blob/main/Results/r7.png)
![./HW1-Dice-Simulation-and-Sampling/results1.png](https://github.com/MahdisSep/Diabetes-Classification-and-Statistical-Modeling-R/blob/main/Results/r8.png)
![./HW1-Dice-Simulation-and-Sampling/results1.png](https://github.com/MahdisSep/Diabetes-Classification-and-Statistical-Modeling-R/blob/main/Results/r10.png)
![./HW1-Dice-Simulation-and-Sampling/results1.png](https://github.com/MahdisSep/Diabetes-Classification-and-Statistical-Modeling-R/blob/main/Results/r11.png)
![./HW1-Dice-Simulation-and-Sampling/results1.png](https://github.com/MahdisSep/Diabetes-Classification-and-Statistical-Modeling-R/blob/main/Results/r122.png)



-----

### 📂 Repository Structure

| Folder | Contents |
| :--- | :--- |
| **`Model_Based_Design/`** | The Simulink model and MATLAB data files used for design and simulation. |
| **`Real_Time_Implementation/`** | The core PlatformIO/FreeRTOS C++ source code. This is the final embedded program. |
| **`Simulation_Tinkercad/`** | Code utilized for virtual testing and simulation on the Tinkercad platform. |
| **`Documentation/`** | Project statement and related non-code documents. |

---

### 🚀 Setup and Execution

The core implementation is found in the `Real_Time_Implementation/` folder.

1.  **Modeling Review:** The control logic can be reviewed in the **`Model_Based_Design/SolarTrackingModel.slx`** using MATLAB/Simulink.
2.  **Embedded Implementation:** The C++ code (`main.cpp`) is designed to run in a PlatformIO environment (VS Code) targeting a microcontroller like the ESP32 or similar platform supporting FreeRTOS.
3.  **Tinkercad Demo:** https://www.tinkercad.com/things/9h7DQxmkErr-incredible-maimu/editel?returnTo=https%3A%2F%2Fwww.tinkercad.com%2Fdashboard&sharecode=9cErJfd9Vy-LyU2GELPqNqm-JMOUviURWmSMqM-EvQQ
