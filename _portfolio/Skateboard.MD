---
title: "Skateboard"
excerpt: "Skateboard truck and deck design"
header:
  teaser: /assets/img/mixermain.jpg
---
## Generative Design: 
### Generative Design Background
* Generative design leverages algorithims and AI to create desgin based on user requirement inputs. 
* Iterates upon design till it finds the best avaiable design to the given user inputs 
* Allows for parts to be lightweighted by ensuring structural support without unecessary material
* Prioritizes meeting load requirements so sometimes resulting design may be complex to manufacture  
### Pairing with SLS 
* SLS printing is ideal for printing complex geomertries
* Output of generative design can be a complex shape that SLS printing is able to successfully print
* Other methods like CNC and FFF printing cannot make some of the generatively design parts successfully 
### Applications
* The ability to lightweight parts with generative design is ideal for aerospace where weight reduction is necessary
* Rapid prototyping of parts possible with combination of GD and SLS printing before mass production of a part

## Truck Design:
### Loads and Constraint:
* 200 LB normal force: for weight of individual
* 100 lb/side vertical shear force: leaning on top of board when turning
* 100 lb/side horizontal turning force: force applied while turning
* 8 N/m moment from motor: max motor torque 
* Fixed constraint at pivot cup 
### Geometry
* Preserved geometry was added for the pivot, the axle, and the kingpin hole 
* Starting geometry of the given truck hanger used to lower computation time 
* Obstacle geometry added to ensure additioal hardware can be successfully addded (bearings, wheels, etc.) 


### CAD Model
##AlSi10Mg Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH512d4QTec90decfa6e83e2f44c61aef3b9?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>
## Nylon Model 

## SLS Printed Truck 
![alt](/assets/img/truckprint.jpg)


