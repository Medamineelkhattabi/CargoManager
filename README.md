# CargoManager

**CargoManager** is a C++ project designed to manage the transport of goods via various modes of transportation (road and air). It allows users to add, modify, and remove shipments (cargaisons) and their associated goods (marchandises), and calculate the cost of transportation based on weight, distance, and transport type.

## Features

- **Marchandise Management**: Add, remove, and modify goods within a shipment.
- **Cargaison Types**: Supports both **road** and **air** transport with dynamic cost calculations based on cargo type.
- **Admin Capabilities**: Administrators can manage shipments and view detailed reports on individual goods and shipments.
- **Client Capabilities**: Clients can view their cargo and costs, with sorting functionalities based on transport cost.
- **Cost Calculation**: Calculate transport cost based on cargo weight and distance, specific to the transport type.
- **History Tracking**: Ability to track modifications in goods and shipments.

## Project Structure

```bash
├── CargoManagerPlus/
│   ├── src/
│   │   ├── main.cpp              # Main program logic
│   │   ├── Marchandise.cpp       # Implementation of Marchandise class
│   │   ├── Cargaison.cpp         # Implementation of Cargaison and derived classes
│   │   ├── ClientTransport.cpp   # Client-side management
│   │   ├── AdminTransport.cpp    # Admin-side management
│   │   └── Historique.cpp        # History tracking logic
│   ├── include/
│   │   ├── Marchandise.h         # Declaration of Marchandise class
│   │   ├── Cargaison.h           # Declaration of Cargaison and derived classes
│   │   ├── ClientTransport.h     # Declaration of ClientTransport class
│   │   ├── AdminTransport.h      # Declaration of AdminTransport class
│   │   └── Historique.h          # Declaration of history tracking

