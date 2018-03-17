# Tiles-Map-Simple-Editor
Tiles map editor based on MV-Engine


<a href="url"><img src="http://i.imgur.com/woOVLhe.png" align="left" height="500" width="300" ></a>

## 1. Replace your texture atlas with atlas.png (Editor/data/textures)
.

.
## 2. Build your map!
### Run Loader.exe, set propeties and click "Run Editor"
#### left mouse button - to change texture
#### WSAD - to move camera
#### Scroll - to zoom
#### E - rotate tile by 90 (only in rotating mode)
#### Q - Change to next type
#### V - visible ON/OFF informative object
#### Exit program to save progress
#### your results will be in output.txt

## How to understand numbers?

### Simple mode (without rotation):
every type of cell is the next number
<a href="url"><img src="http://i.imgur.com/tYDviQX.png" align="left" height="64" width="304" ></a>

.


### Rotation mode:
-If in non-rotation system type has number k (for example 1), in rotation mode the same type has number 4k (for example 4*1=4) + rotation direction

#### rotation direction:

▲ <=> 0 

► <=> 1 

▼ <=> 2 

◄ <=> 3 


<a href="url"><img src="http://i.imgur.com/7nuFjUX.png" align="left" height="64" width="304" ></a>

