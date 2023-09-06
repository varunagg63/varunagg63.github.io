---
title: "Syringe Pump"
excerpt: "Automatic syringe pump that can dispense liquid at a set mL/min."
header:
  teaser: /assets/img/syringe render .jpg
gallery:
  - url: /assets/img/Syringe.jpg
    image_path: assets/img/Syringe.jpg
    alt: "placeholder image 1"
  - url: /assets/img/syringe wires.jpg
    image_path: assets/img/syringe wires.jpg
    alt: "placeholder image 2"
---
{% include gallery caption="Images of the product." %}

## Purpose:
Syringes are very common in the medical industry. Automated syringe systems exist but are usually costly and may be difficult for healthcare providers to setup. This project aimed to design an automated syringe pump that could dispense fluid at a set flow rate while also being user and cost friendly. 
### Features:
* LED indicator of run, pause, empty
* Button to start, stop
* Limit switch to shutdown system when fully dispensed
* Sealed electronic enclosure
* Accomodates 20 mL and 5 mL syringe sizes
* Simple rate input to code

## Parts:
### Off-the-Shelf:

 | Part | QTY |
 | ---- | --- | 
 | Linear Bearing | 1 | 
 | Lead Screw | 1 | 
 | Arduino UNO | 1| 
 | NEMA Motor | 1 | 
 | Flex Coupler | 1 | 
 | Linear Rod | 1 | 
 | 5 mL Syringe | 1 | 
 | 20 mL Syringe | 1 | 
 | LED Light | 1 | 
 | Limit Switch | 1 |
 | Aluminum Extrusion | 1 | 
 | Buttons | 2 | 

### 3D Printed: 

 | Part | QTY |
 | ---- | --- | 
 | Motor Mount | 1 | 
 | Enclosure | 1 | 
 | Back Plunger Holder | 1| 
 | Front Barrel Holder | 1 | 
 | Nozzle Holder | 1 | 


## Code 
See syringe pump code here: [Code](https://github.com/varunagg63/varunagg63.github.io/blob/main/SyringeCode.ino)


## CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH512d4QTec90decfa6e30e580610129e8c1?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>





## Operating Instructions:
* Choose the syringe size and fill with however much liquid is needed, manually
* Use the forward and reverse buttons to set the proper distance for the length of the syringe
* Insert syringe handle into back plunger, the middle flange into the middle barrel stabilizer slot, and the front through the front barrel hole
* Set the flow rate and size with code
* Press the start button and it should operate correctly
* If you need to pause, then press the red button again 
* When the syringe is fully compressed, you can press the reverse button to pull the plunger out again and repeat the above proces

