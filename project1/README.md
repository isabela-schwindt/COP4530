# Travel Packing Rotation System

## Project Overview

The **Travel Packing Rotation System** is inspired by our upcoming spring break trip to **Finland**. As students planning a real-life trip, we realized that managing packing items, trips, and daily outfit rotations can become complicated.  

This system helps us **organize, track, and rotate items efficiently**, ensuring we never forget essential items or duplicate outfits during the trip.

By building this program, we applied core concepts from our **Data Structures and Object-Oriented Programming** class, including:

- Singly Linked Lists  
- Doubly Linked Lists  
- Circular Linked Lists  
- Classes and Objects  
- Templates and Generic Programming  
- Clean Architecture / Layered Design  

---

## ✈️ Inspiration: Finland Trip

Our spring break trip to **Lapland, Finland** involves multiple destinations, activities, and weather conditions. We wanted a realistic, practical system to:

- Plan the packing list for the entire trip  
- Track completed trips and packing summaries  
- Rotate outfits for different occasions and weather  

This project is not only a class assignment but also a tool we will actually use.

---

## 🧱 Clean Architecture

We designed the system using a **layered approach**:

main.cpp
↓
Service Layer (business logic)
↓
Linked List Structures (Singly, Doubly, Circular)
↓
Node (generic templated node)


### Layers Explained

**Domain Layer (Entities)**

- `PackingItem` – represents an item to pack  
- `TripRecord` – represents a past trip and its summary  
- `Outfit` – represents a combination of clothes for rotation  

**Data Structure Layer**

- `SinglyLinkedList` – stores current packing items  
- `DoublyLinkedList` – stores past trips for forward/backward navigation  
- `CircularLinkedList` – stores outfits for daily rotation  

**Service Layer**

Wraps each linked list and provides meaningful operations:

- **PackingService** – add, remove, mark items as packed, display, clear  
- **TripHistoryService** – add trip, remove last trip, display forward/backward  
- **OutfitRotationService** – add outfit, remove current, move to next, display current/all  

**Main Program / Front-End**

- Interactive **menu-based console interface** for managing packing lists, trips, and outfit rotation  
- Ensures **no direct manipulation of nodes**; all operations go through the service layer  

---

## 🛠️ Features

### Packing List Management

- Add, remove, display, clear items  
- Mark items as packed  

### Trip History Tracking

- Add trips, remove last trip  
- View trips forward and backward  

### Outfit Rotation

- Add outfits, rotate daily  
- Show current outfit and display all  

### Automated Tests

- `tests/values_tests.cpp` → ensures functions produce expected results  
- `tests/errors_tests.cpp` → ensures graceful handling of invalid operations  

---

## 💡 Concepts Applied

### Singly Linked List
- Efficient insertion/removal of packing items  
- Forward traversal is sufficient for listing items  

### Doubly Linked List
- Trip history allows forward and backward navigation  
- Makes adding/removing trips easy  

### Circular Linked List
- Outfit rotation is continuous, looping from last to first item  
- Perfect for daily outfit scheduling  

### Templates (Generic Programming)
- All linked lists are templated for flexibility and reuse  

### Object-Oriented Programming
- Entities encapsulate attributes and behaviors  
- Services encapsulate operations on linked lists  

### Clean Architecture
- Main program interacts only with services  
- Entities and structures are decoupled from execution logic  

---

## 📂 File Structure

GroupNumber/
│
├── main.cpp # Interactive front-end menu
├── domain/
│ ├── PackingItem.h
│ ├── TripRecord.h
│ └── Outfit.h
├── structures/
│ ├── Node.h
│ ├── SinglyLinkedList.h
│ ├── DoublyLinkedList.h
│ └── CircularLinkedList.h
├── services/
│ ├── PackingService.h
│ ├── TripHistoryService.h
│ └── OutfitRotationService.h
├── tests/
│ ├── values_tests.cpp
│ ├── errors_tests.cpp
│ └── README.md
└── README.pdf


---

## 🚀 How to Run

### Compile all code:
```bash
g++ -o travel_system main.cpp services/*.cpp structures/*.cpp
```

Run the program:
./travel_system

Navigate the menus:

Main Menu → Packing, Trips, Outfit Rotation

Submenus allow adding, removing, rotating, and displaying items

🖥️ Example Console Interaction

Main Menu

=== TRAVEL PACKING ROTATION SYSTEM ===
1. Manage Packing List
2. Manage Trip History
3. Manage Outfit Rotation
0. Exit
Choose an option: 1
Packing Menu → Add Item

Enter item name: T-Shirt
Enter category: Clothing
Enter weight: 0.3
Item added successfully!


Packing Menu → Display Packing List

Packing List:
1. T-Shirt (Clothing) - Not Packed


Trip History → Display Trips Forward

Trip History:
1. Paris | 2026-03-01 to 2026-03-07 | 5 items packed
2. Tokyo | 2026-04-10 to 2026-04-15 | 7 items packed


Outfit Rotation → Show Current Outfit

Current Outfit:
1. Casual Jeans (Casual) - Mild Weather