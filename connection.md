# **Home Automation System - Connection Details**

## **1. NodeMCU to Relay Connections**
| **NodeMCU Pin** | **Relay Module Pin** | **Description**          |
|-----------------|---------------------|--------------------------|
| D1 (GPIO5)      | IN1                  | Control for Appliance 1  |
| D2 (GPIO4)      | IN2                  | Control for Appliance 2  |
| 3.3V            | VCC                  | Power Supply for Relay   |
| GND             | GND                  | Ground Connection        |

---

## **2. Relay to Appliance Connections**
| **Relay Pin**    | **Appliance Terminal** | **Description**                    |
|------------------|-----------------------|-------------------------------------|
| COM (Common)     | Line (Live wire)       | Power input to relay switch         |
| NO (Normally Open) | Appliance Power Line  | Connect appliance power line here   |
| NC (Normally Closed) | (Optional)         | Not used for this setup             |

---

## **3. Power Supply**
| **Component**  | **Power Source**    | **Description**                  |
|----------------|---------------------|----------------------------------|
| NodeMCU        | USB (5V)             | Power for NodeMCU via USB Cable  |
| Relay Module   | 3.3V from NodeMCU    | Power Supply for Relay Module    |

---

## **4. Control Flow**
1. **Control via Blynk App**: Use Blynk mobile app buttons linked to Virtual Pins **V1** (for D1) and **V2** (for D2).  
2. **When the Blynk button is pressed**:  
   - If **V1** is set to 1, **D1** will send LOW to **IN1** → **Relay 1 turns ON** → **Appliance 1 turns ON**.  
   - If **V2** is set to 1, **D2** will send LOW to **IN2** → **Relay 2 turns ON** → **Appliance 2 turns ON**.  

---

## **Visual Representation**
