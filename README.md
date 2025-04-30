# C-Formulas
Basic Mathematics Formulas in C

## Installation

Add into your project in the "libs/" folder and after use 

```
#include "libs/CFormulas.c"
```

> [!NOTE]
> You do not need to add it to a folder called `libs/` it is just more helpful.

# Formulas
There are a few formulas I have added to this library. I may add more in the future. Here are just a few I have added so far.
> [!TIP]
> everything returns as a float.

## Perimeter

A general Perimeter function asking for each side, but if you need specific formulas. We have separate functions for those.
```c
Perimeter(Length1, Width1, Length2, Width2);
```

```c
SquarePerimeter(Length);
```

```c
CirclePerimeter(Radius);
```

```c
RectanglePerimeter(Length, Width);
```

```c
TrianglePerimeter(Length1, Width1, Length2);
```

# Area

```c
SquareArea(Length);
```

```c
CircleArea(Radius);
```

```c
SphereArea(Radius);
```

```c
RectangleArea(Length, Width);
```

```c
RhombusArea(Length, Width);
```

```c
TrapizoidArea(Length, Width, Height);
```

```c
TriangleArea(Base, Height);
```
