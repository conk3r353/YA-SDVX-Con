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

The USB port is approximately **3 mm** tall, so a thickness of **3–4 mm** is recommended for Plate 3.

The recommended plate thicknesses are:

| Plate | Recommended thickness |
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

These files are intended for manufacturing using the recommended plate thicknesses described above.

`pcb_case_plates_extra_info.dxf` contains additional PCB hole and silkscreen information to make modifications and alignment easier if needed.