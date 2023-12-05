---
title: "Microfluidic Device"
excerpt: "VPP print of a microfluidic device"
header:
  teaser: /assets/img/mixermain.jpg
gallery:
  - url: assets/img/micromold.jpg
    image_path: /assets/img/micromold.jpg
    alt: "placeholder image 1"
 
---
## Microfluidic Device Description: 
  * Microfluidic devices enable rapid and thorough mixing of fluids on a micro scale
    * Channels allow flow at a high contact surface to volume ratio, which enables effective mixing of liquids
    * Applied in pregnancy testing, cell culture devices, and mostly biomedical applications
  * Challenges in mixing due to slow flow speeds
    * Flow is in laminar regime from slow flow and small lengths resulting in a low Reynold's number 
    * Turbulent flow would be better to take advantage of more efficient mixing from vortex formation in turbulent flow
    * Thus, microfluidic devices rely on diffusive mixing (random motion of particles)
  * Improving mixing can be done with passive or active mixing elements
    * Passive mixers increase contact area and time between the reagents
      * 3D features
      * Zig-zags
      * Parallel lamination 
    * Active mixers apply external force to increase mixing efficiency
      * Magnetic
      * Acoustic 
      * Thermal 
    * The device made in this project used passive mixing elements instead of active

## Fabrication Steps:
  * SLA printer used to create mold
    * High temperature resin used
  * SLA mold washed for 50 minutes and cleaned with IPA to ensure uncured resin was not present
  * Cured for 30 minutes at 60 degrees C
  * Mold coated with parylene
  * PDMS mixture casted into the mold and cured
  * Device bonded to glass microscope slides

### Justification for VPP:
  * VPP prints can print very fine details depending on spot size, with a minimum feature size of 85 micron in this project 
  * Easy to incorporate different passive mixing elements and print them with high resolution 
  * Photolithography is an alternative to VPP printing:
    * Higher cost 
    * Longer fabrication 
  * Drawback of VPP:
    * Parylene 


## Design 
### CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH512d4QTec90decfa6e9f771756a987cd75?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

### Geometry:
  * Looping channels
    ** Change of direction in X and Y for both fluids motivates mixing 
    ** Simple to design 
  * Ramp walls
    ** Disruptive mixing effect
    ** Adds Z direction mix


## Material Joint
![PLA rod encased by TPU](/assets/img/plierrod.jpg)




## Video:
![Pliers in action](/assets/img/pliergif.gif)

## Specifications:
![Pliers specs](/assets/img/plierspec.jpg)

