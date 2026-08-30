
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

-   STMicroelectronics STM32F303RET6
    
-   Toshiba TBD62003AFNG,EL
    
-   Korean Hroparts Elec TYPE-C-31-M-12 USB receptacle
    
-   DIODES AP2112K-3.3TRG1
    
-   STMicroelectronics USBLC6-2P6
    
-   YXC Crystal Oscillators X32258MOB4SI
    
-   Samsung Electro-Mechanics CL05B104KO5NNNC 100 nF capacitor ×12
    
-   Samsung Electro-Mechanics CL10A475KO8NNNC 4.7 µF capacitor ×2
    
-   FengHua 0402CG180J500NT 18 pF capacitor ×2
    
-   IHHEC C1206N472J501TEF 4.7 nF capacitor
    
-   Samsung Electro-Mechanics CL05A105KA5NQNC 1 µF capacitor ×2
    
-   Sunlord GZ2012D601TF ferrite bead
    
-   TUOZHAN F.1206.00029/P2-1206B1TS2-09T-201 blue LED ×4
    
-   TUOZHAN F.1206.00003/P2-1206R1TS2-09T-001 red LED ×3
    
-   UNI-ROYAL 0402WGF4700TCE 470 Ω resistor ×4
    
-   UNI-ROYAL 0603WAF5600T5E 560 Ω resistor ×3
    
-   UNI-ROYAL 0402WGF5101TCE 5.1 kΩ resistor ×2
    
-   UNI-ROYAL 0402WGF220JTCE 22 Ω resistor ×2
    
-   UNI-ROYAL 0402WGF1004TCE 1 MΩ resistor
    
-   UNI-ROYAL 0402WGF1501TCE 1.5 kΩ resistor
    
-   UNI-ROYAL 0402WGF1002TCE 10 kΩ resistor ×9
    
-   Bourns PEC16-4020F-N0024 rotary encoder ×2
    
-   Gateron G Pro 3.0 Red 5-pin mechanical switch ×7
    
-   GATERON PC Crystal Stabilizer 2u ×2
    

### Notes

-   The STM32F303RET6 is probably overkill for this project. Something simpler (and cheaper) could be used. In my case, I chose it mainly because I had a development board with this specific chip and didn't want to change the software without testing it first. On the other hand, if the LEDs are ever replaced with RGB ones, there will be additional MCU pins available to control them.
    
-   There are cheaper alternatives to the X32258MOB4SI, but this one was a bit smaller, and I preferred how it looked on the PCB, so I opted for it instead. For most people, however, it should be possible to find a basic 8 MHz crystal oscillator available for JLCPCB assembly and avoid paying the extended-part fee.
    
-   The UNI-ROYAL 0402WGF1004TCE and IHHEC C1206N472J501TEF can technically be removed and replaced with jumpers. These components are part of the board's ESD protection, which is optional for prototypes. I would recommend keeping them if the component price isn't too high.
    
-   The TUOZHAN F.1206.00029/P2-1206B1TS2-09T-201 blue LEDs were not available from JLCPCB at the time of ordering. Possible replacements are TUOZHAN F.1206.00002/P2-1206B1TS2-09T-001 and TUOZHAN F.1206.00017/P2-1206W6YS1-09T-001. The latter is lighter in color and closer to cyan.
    
-   Bourns PEC16-4020F-N0024 encoders are surprisingly difficult and expensive to find. Even with the setup fee, it was cheaper to have JLCPCB assemble them rather than buying them separately. The PEC16-4220F-N0024 was much more readily available in my case, but it has detents, which are not desirable here. They do work, and with heavy, full-aluminum encoder caps, the detents aren't too noticeable, so they can be used as a replacement in a pinch. Electrically, they are the same, and they have the same footprint, which makes replacement as straightforward as possible.
    
-   Any Cherry MX-compatible mechanical switch should work. However, I recommend using 5-pin switches for greater stability during placement and soldering. I would also suggest using switches with SMD LED support.
    
-   Any 2u Cherry MX-compatible PCB-mount stabilizer should work.