# Hardware

This project was developed using EasyEDA Pro V3. The `.epro2` project file is provided.

The project structure is simple:

```text
Project
│
├── Schematic
│
└── PCB
```

I ordered the PCBs from JLCPCB and tailored most of the components for their assembly service. You can probably find something cheaper and/or better if you source your own components elsewhere, so don't feel tied to these specific brands or part numbers.

### Components list

| Component | Part | Quantity |
|---|---|---:|
| MCU | STMicroelectronics STM32F303RET6 | 1 |
| Transistor array | Toshiba TBD62003AFNG,EL | 1 |
| USB receptacle | Korean Hroparts Elec TYPE-C-31-M-12 | 1 |
| Voltage regulator | Diodes AP2112K-3.3TRG1 | 1 |
| ESD protection | STMicroelectronics USBLC6-2P6 | 1 |
| Crystal oscillator | YXC X32258MOB4SI | 1 |
| Capacitor, 100 nF | Samsung Electro-Mechanics CL05B104KO5NNNC | 12 |
| Capacitor, 4.7 µF | Samsung Electro-Mechanics CL10A475KO8NNNC | 2 |
| Capacitor, 18 pF | FengHua 0402CG180J500NT | 2 |
| Capacitor, 4.7 nF | IHHEC C1206N472J501TEF | 1 |
| Capacitor, 1 µF | Samsung Electro-Mechanics CL05A105KA5NQNC | 2 |
| Ferrite bead | Sunlord GZ2012D601TF | 1 |
| Blue LED | TUOZHAN F.1206.00029/P2-1206B1TS2-09T-201 | 4 |
| Red LED | TUOZHAN F.1206.00003/P2-1206R1TS2-09T-001 | 3 |
| Resistor, 470 Ω | UNI-ROYAL 0402WGF4700TCE | 4 |
| Resistor, 560 Ω | UNI-ROYAL 0603WAF5600T5E | 3 |
| Resistor, 5.1 kΩ | UNI-ROYAL 0402WGF5101TCE | 2 |
| Resistor, 22 Ω | UNI-ROYAL 0402WGF220JTCE | 2 |
| Resistor, 1 MΩ | UNI-ROYAL 0402WGF1004TCE | 1 |
| Resistor, 1.5 kΩ | UNI-ROYAL 0402WGF1501TCE | 1 |
| Resistor, 10 kΩ | UNI-ROYAL 0402WGF1002TCE | 9 |
| Rotary encoder | Bourns PEC16-4020F-N0024 | 2 |

### Switches

My switches of choice are 5-pin version of Gateron G Pro 3.0 Red. Any Cherry MX compatible switch should work, however I suggest using 5-pin versions for greater stability during placement and soldering. SMD LED support is also a thing to consider when choosing switches.

#### Keycaps

Keycaps I used are LCK Low Profile. I bought them on AliExpress and I would recommend them over regular keycaps for being flat which feels closer to original buttons to me. However, any Cherry MX compatible keycaps should work, so choose whichever you prefer.

| Buttons | Keycap Size | Quantity |
|---|---|---:|
| A_BT, B_BT, C_BT, D_BT | 1.75u (change to 1.5u is possible) | 4 |
| FX_L, FX_R | 2.25u | 2 |
| START | 1u | 1 |

### Encoders

Bourns PEC16-4020F-N0024 encoders are surprisingly difficult and expensive to find in my area. Even with the setup fee, it was cheaper to have JLCPCB assemble them rather than buying them separately.

The PEC16-4220F-N0024 was much more readily available in my case, but it has detents, which are not desirable here. They do work, and with heavy, full-aluminum encoder caps, the detents aren't too noticeable, so they can be used as a replacement in a pinch. Electrically, they are the same, and they have the same footprint, which makes replacement as straightforward as possible. If you have easy access to PEC16-4020F-N0024, I would suggest excluding them from BOM and soldering them yourself as it will make both manufacturing and delivery easier.

#### Encoder Knobs

Arcade knobs diameter is 30 mm and height is 25 mm. You can buy replacement knobs for Yuancon controller and they will fit, but they are very expensive. I use all-aluminum encoder knobs from AliExpress in arcade size. Full-metal encoder knobs are preferred since they are heavier, making rotation feel smoother and a bit easier. However, plastic-core encoder knobs are a lot cheaper, so if you are on a budget - go for these.

25 mm diameter also works well and is sometimes used in other pocket SDVX controllers. I would not suggest using anything smaller as it makes it a lot harder to play. I would not suggest using knobs bigger than 30 mm either. They will fit, but they get a bit too close to buttons for my liking.

### Keyboard Stabilizers

For any keycap length longer than 1.75u stabilizers are needed. I chose PCB mounted stabilizers due to their simplicity of installation and adaptability to different cases. I use Gateron Crystal PCB Stabilizer V2 since they were cheap and readily available, but Durock should support the same mounting holes on PCB. Skipping stabilizers is possible, but you should use 1.75u keycaps for `FX_L` and `FX_R`.

### Notes

-   The STM32F303RET6 is probably overkill for this project. Something simpler (and cheaper) could be used. In my case, I chose it mainly because I had a development board with this specific chip and didn't want to change the software without testing it first. On the other hand, if the LEDs are ever replaced with RGB ones, there will be additional MCU pins available to control them.
    
-   There are cheaper alternatives to the X32258MOB4SI, but this one was a bit smaller, and I preferred how it looked on the PCB, so I opted for it instead. For most people, however, it should be possible to find a basic 8 MHz crystal oscillator available for JLCPCB assembly and avoid paying the extended-part fee.
    
-   The UNI-ROYAL 0402WGF1004TCE and IHHEC C1206N472J501TEF can technically be removed and replaced with jumpers. These components are part of the board's ESD protection, which is optional for prototypes. I would recommend keeping them if the component price isn't too high.
    
-   The TUOZHAN F.1206.00029/P2-1206B1TS2-09T-201 blue LEDs were not available from JLCPCB at the time of ordering. Possible replacements are TUOZHAN F.1206.00002/P2-1206B1TS2-09T-001 and TUOZHAN F.1206.00017/P2-1206W6YS1-09T-001. The latter is lighter in color and closer to cyan.