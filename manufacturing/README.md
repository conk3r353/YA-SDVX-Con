# Manufacturing Files

This directory contains all files needed to manufacture the PCB and case. It is divided into two sections:

- **PCB manufacturing**
- **Case manufacturing**

## PCB

The directory contains the following files required for PCB assembly and manufacturing:

- **Gerber files** — PCB fabrication files
- **BOM** — Bill of Materials
- **CPL** — Component Placement List

The **switches** and **firmware flashing header** are not included in the BOM. Their footprints are present on the PCB, but the components themselves are intended to be installed separately.

## Case

The case is made from stacked acrylic plates secured together with Chicago bolts.

#### Layer Structure

From top to bottom, the case consists of:

1. **Plate 4** — top plate
2. **Plate 3** — plate with cutouts for the MCU, USB port, and other electronics
3. **PCB**
4. **Plate 2** — plate with cutouts for encoder legs and keyboard stabilizer bolts
5. **Plate 1** — bottom plate

#### Plate Thickness

The distance from the PCB surface to the part of the switch that rests against the case plates is **5 mm**. Therefore, Plates 3 and 4 should have a combined thickness of no more than **5 mm**. A total thickness of exactly 5 mm is preferred.

The USB port is approximately **3 mm** tall, so a thickness of **4 mm** is recommended for Plate 3. **3 mm** works fine as well, but there will be barely noticeable bulge near USB port.

Bottom plates thicknesses are not too important, just make sure plate 2 is at least **2 mm** thick to accomodate for stabilizer screws.

The thicknesses I ended up using are:

| Plate | Thickness |
|---|---:|
| Plate 1 | 3 mm |
| Plate 2 | 3 mm |
| Plate 3 | 3 mm |
| Plate 4 | 2 mm |

This results in a total case thickness of approximately **12.6 mm** when including the PCB.

#### Mounting Hardware

The PCB and acrylic plates have four **4.1 mm mounting holes**.

Choose bolts and nuts that fit the hole diameter and required stack height. Chicago bolts are typically specified one nominal size smaller than the mounting-hole diameter because the outer nut contributes to the overall diameter.

For this design, **M3 Chicago bolts** were used:

- Nominal bolt size: **M3**
- Overall diameter (OD): **4 mm**
- Length: **12 mm**

## Manufacturing Files

The following DXF files are ready to be sent to an acrylic cutting/manufacturing service:

- `pcb_case_plates_1-3.dxf` — Plates 1–3
- `pcb_case_plates_4.dxf` — Plate 4

These files are intended for manufacturing using the plate thicknesses from table above.

`pcb_case_plates_extra_info.dxf` contains additional PCB hole and silkscreen information to make modifications and alignment easier if needed.

## Assembly

You will need the following items:
-	PCB
-	Acryllic plates
-	Switches x7
-	PCB keyboard stabilizers x2
-	Keycaps x7
-	Encoder knobs x2
-	OD4/M3 Chicago screws x4
-	Rubber feet x4
-	Soldering iron
-	Solder
-	Flux
-	IPA (optional, but useful to clean the flux off the board)
-	STM programmer (I use ST-Link from Nucleo board)
-	Wire to connect programmer to SWD port on PCB x5

Assembly order is as follows:
1. Assemble stabilizers for `FX-L` and `FX-R` buttons and screw them into place
2. Install and solder switches for `FX-L` and `FX-R` buttons
3. Install both top plates
4. Install and solder remaining five buttons. They should also fix top acryllic plates in place
5. Connect your STM programmer to SWD pins on PCB. You can solder the pins but I found out that just holding them in place by hand is both faster and easier
6. Flash firmware with your preferred method (I used CubeIDE). You can now verify that everything works - I either used browser gamepad testers or ran `joy.cpl` on Windows to test
7. Install bottom two plates and feed four Chicago screws posts to center them properly
8. Tighten the screws, being careful not to tighten too much - this can crack acryllic plates
9. Put keycaps and knobs to switches and encoders
10. Put rubber feet on the bottom plate