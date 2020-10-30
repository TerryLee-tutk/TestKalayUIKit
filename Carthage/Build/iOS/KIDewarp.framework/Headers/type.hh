#ifndef _TYPE_HH_
#define _TYPE_HH_

typedef enum KIDewarpMode {
	KIDewarp_Orig,
	KIDewarp_Pano,
	KIDewarp_Flat,
	KIDewarp_Sphere
} KIDewarpMode;

typedef enum KICameraOrientation {
    KICamera_Down,
    KICamera_Up,
    KICamera_Horizontal
} KICameraOrientation;

#endif // _TYPE_HH_
