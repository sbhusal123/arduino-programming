## Relay Module

Relay module are used in switching high voltage 


## LU5R Relay:

LU-5-R is a 5V DC subminiature SPDT (Single Pole Double Throw) electromagnetic power relay typically featuring 5 or 6 pins (including dual common pins)

![Relay: LU5R](./images/Relay%20Pins.png)

| Pin | Function | Description |
| :--- | :--- | :--- |
| **5 & 8** | **Coil** | Connect your **control voltage** (e.g., 5V) and Ground across these two pins to trigger the **switch / coil**. |
| **1 & 12** | **Common (COM)** | The main power input for the external device you want to control (like a motor or light bulb). These two pins are connected to each other internally. |
| **6** | **Normally Closed (NC)** | Stays connected to COM when the relay is **OFF**. Power flows here by default. |
| **7** | **Normally Open (NO)** | Connects to COM only when the relay is **ON**. Power flows here only when the coil is energized. |


![Basic Cicruit](./images/Relay%20Basic%20Circuit.png)
