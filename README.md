# SmartCourier – Courier and Logistics Optimization System

##  Project Overview

SmartCourier is a C++ based courier and logistics optimization system developed as a college PBL project.

The project focuses on managing parcels, customers, vehicles, and delivery locations while applying Data Structures and Algorithms to improve delivery processing and route planning.

The main purpose of the project is to demonstrate how DSA concepts can be applied to a real-world logistics problem.

---

##  Objectives

- Manage parcel and customer information efficiently.
- Prioritize urgent and express deliveries.
- Organize normal delivery requests using queues.
- Provide fast parcel searching using hashing.
- Represent delivery locations using graphs.
- Find efficient delivery routes using Dijkstra's Algorithm.
- Use BFS and DFS for graph traversal.
- Apply tree-based structures for organized searching.
- Generate sorted delivery reports.
- Store and retrieve project data using file handling.
- Demonstrate the practical use of DSA in C++.

---

## 🛠️ Technology Stack

- **Programming Language:** C++
- **IDE:** Code::Blocks
- **Data Storage:** Text files
- **Interface:** C++ Console
- **Version Control:** Git & GitHub

### Data Structures

- Arrays / Vectors
- Linked Lists
- Stack
- Queue
- Circular Queue
- Priority Queue / Heap
- Hash Table
- Binary Search Tree
- AVL Tree
- Graph
- Adjacency List

### Algorithms

- Linear Search
- Binary Search
- Sorting Algorithms
- BFS
- DFS
- Dijkstra's Algorithm
- Minimum Spanning Tree
- Greedy Algorithm
- Tree Traversals

---

##  Main Features

###  Parcel Management
- Add new parcels
- Update parcel information
- Remove parcels
- Search parcels
- View parcel details
- Track delivery status

###  Delivery Priority
Urgent and express parcels are given higher priority using a Priority Queue.

###  Delivery Queue
Normal delivery requests are processed using FIFO-based Queue operations.

###  Fast Searching
Hashing is used for quick tracking-ID and parcel lookup.

###  Route Management
Locations and roads are represented using a weighted graph.

###  Shortest Route
Dijkstra's Algorithm is used to find the shortest route between locations.

###  Graph Traversal
BFS and DFS are used to explore the logistics network.

###  Vehicle Management
Vehicles can be assigned to deliveries based on availability and capacity.

### Reports
Delivery information can be sorted and displayed according to:
- Priority
- Distance
- Weight
- Delivery status

###  File Handling
Parcel, customer, vehicle, and delivery information can be stored in files for later use.

---

##  System Modules

The project is divided into the following modules:

1. **Parcel Management**
2. **Customer Management**
3. **Vehicle Management**
4. **Delivery Management**
5. **Priority Management**
6. **Route Management**
7. **Graph & Navigation**
8. **Search & Sorting**
9. **File Management**
10. **Reports & Results**

---

##  DSA Application

| DSA Concept | Application in SmartCourier |
|---|---|
| Array / Vector | Store parcel and vehicle records |
| Linked List | Maintain parcel status history |
| Stack | Undo recent operations |
| Queue | Normal delivery processing |
| Circular Queue | Vehicle scheduling |
| Priority Queue | Urgent and express deliveries |
| Hash Table | Fast tracking-ID lookup |
| BST | Organized parcel searching |
| AVL Tree | Balanced parcel searching |
| Graph | Represent delivery network |
| BFS | Network traversal |
| DFS | Network traversal |
| Dijkstra | Shortest delivery route |
| MST | Minimum-cost network planning |
| Sorting | Delivery and parcel reports |
| File Handling | Save and load project data |

---

##  Project Workflow

```text
Start
  ↓
Enter Parcel / Customer Details
  ↓
Store Information
  ↓
Search & Organize Parcels
  ↓
Check Delivery Priority
  ↓
Assign Delivery / Vehicle
  ↓
Build Delivery Route
  ↓
Find Shortest Route
  ↓
Process Delivery
  ↓
Update Delivery Status
  ↓
Save Data
  ↓
Generate Report
  ↓
End
