---
title: "Multi-Material Pliers "
excerpt: "Multimaterial flexible pliers"
header:
  teaser: /assets/img/pliersrender.jpg
gallery:
  - url: /assets/img/mountreal1.jpg
    image_path: assets/img/mountreal1.jpg
    alt: "placeholder image 1"
 
---
{% include gallery caption="Images of the product." %}

## Project Description: 
The objective of the project was to create needle-nose pliers to pick up a resistor sized part. These pliers needed to incorporate a flexible element that returns the pliers to its closed positon when not in use. 
  * Print-in-place models are 3D printed models that can work immediately after removal from the print bed
  * Many companies print-in place parts, such as aerospace companies who 3D print metal parts for engines that are able to be used immediately after printing
  * Some models are printed such that there is clearance between joints that require motion, however these do not always work well
  * Instead, dual extrusion is effective at incorporating multiple materials into a print, such as adding in TPU into the center of the pliers for actuation
  * This project incorporated dual extrusion of PLA and TPU to print-in-place needle nosed pliers. 

  

## Design:
  * PLA was used to print the handle and jaw piece
  * A TPU web was inserted into the middle of the piece connecting the jaws and handles together
    * This was made as a square because the parallelogram shape during flexion would allow the jaws to close
  * The TPU was held in the PLA using a PLA rod with TPU printed around it. 
    * A mechanical way to fasten was more reliable that relying on intermaterial adhesion 

!.[].(/assets/img/plierrod.jpg)


## CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH512d4QTec90decfa6ebe9b022c34aef481?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

## Video:

## Specifications:

## Print Settings:
  * Bed Temperature: 60 C
  * PLA Extruder: 210 C
  * TPU Extruder: 225 C 
  * Wipe Tower printed to purge out leaking filament in idle nozzle before each layer - reduced in width to 40 mm for faster print 
