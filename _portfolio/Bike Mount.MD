---
title: "Bike Phone Mount"
excerpt: "Phone mount that can be secured to bike handle bar"
header:
  teaser: /assets/img/mountrender.PNG
gallery:
  - url: /assets/img/mountreal1.jpg
    image_path: assets/img/mountreal1.jpg
    alt: "placeholder image 1"
  - url: /assets/img/syringe wires.jpg
    image_path: assets/img/syringe wires.jpg
    alt: "placeholder image 2"
---
{% include gallery caption="Images of the product." %}

## CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH512d4QTec90decfa6e32f0ba7d00d4c775?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

### Top-Down Modeling: 
The top-down modeling approach refers to creating geometry and parts all within an assembly as opposed to independently and then assembling them afterwards. In the top-down approach, there is the advantage of being able to create parts using the surfaces and geometry of other parts in the assembly. This makes it simpler to accurately position and measure the sketches and features of a new part instead of trying to make it separately using hard measurements to make the future assembly fit together. One element of the top-down modeling is building a part within an assembly in the exact spot the component will be placed in the final assembly, and then simply using the ‘As-Built Joint’ to rigidly constrain the part. This is simpler than needing to join parts manually in the non-top-down modeling. 

This design used top-down modeling in all of its components. The model of the phone was the first component imported into the assembly. Then, the back mount was made within the assembly off the back surface of the phone to the correct length it needed to have clearance with the phone walls. This ensured that the mount was the length it needed to be and then I could simply constrain it with as-built joint. The set screw hole was also made by first creating the internally threaded hole, and then creating a new component with a cylinder within that existing hole. Thus, the screw was already in its final position in the design, and it was very easy to create a section view to check the thread alignment and add more clearance between the threads

## Design:
This design is a 3-piece design that allows for quick installation of a phone and horizontal and vertical orientation abilities of the phone. The phone is held in the mount by a set screw that can be hand tightened and does not damage the phone in any way. This was done to make sure the phone is very secure but also installable within a few seconds. The mount is then inserted into the clamp piece and can be held in place by inserting the bolt through the holes in the clamp. This is the piece that can allow either orientation, depending on how the user inserts the mount into the clamp-piece. Once the bolt is in, the orientation is locked and secure. This bolt can be taken out and switched for different orientations within a few seconds. The last piece, the clamp, slides onto the handlebars and has a screw that tightens the clamp around the handlebar. 

### Assembly Instructions:
* Insert back-mount piece into the clamp piece in desired orientation – vertical or horizontal
* Insert screw through holes to secure pieces together 
* Slide clamp onto handlebars, tighten bolt till clamp can no longer slide
* Insert phone into the phone mount
* Hand tighten set screw till phone is secure and unable to move

### Material: 
Material choice is important for the bike mount because these will hold a phone and be mounted, meaning it will be exposed to some internal stresses. Since these mounts will be used outdoors, they will be exposed to UV from the sun. Thus, material choice is important to consider for this design, because a material with better UV resistance will be able to maintain its mechanical properties such as strength better when exposed to UV, compared to a less UV resistant material. ABS is generally a better material for outdoor use than PLA. ABS has a higher glass transition temperature, so it is unlikely to become soft from being outside. ABS also has better mechanical properties such as tensile strength, so it will fare better under the stresses of a phone being mounted on it and mounted to a bike. Thus, ABS was the best material available for this assignment. 


