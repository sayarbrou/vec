### `Vec2`, `Vec3` Classes

- basic arithmetic operators (`+-*/`) overloaded for other Vec objects or floats
- other helper methods

#### Non-static `Vec2` and `Vec3` helpers
| func. name | function |
| --- | --- |
| `toString()`/`toString(int)` | output vector as `"(x, y, [z])"`, can specify number of decimals |
| `length()`/`lengthSquared()` | length/dot product with self |

#### Static `Vec2` and `Vec3` helpers
| func. name | function | note |
| --- | --- | --- |
| `dot()` | dot product between two vectors | |
| `distance()`/`distanceSquared()` | length/length squared of `(b-a)` | |
| `reflect()` | reflect off surface with given normal | implementation [here](https://registry.khronos.org/OpenGL-Refpages/es3/) |
| `refract()` | refract through surface with given normal,  ratio of IoR's | implementation ^ |
| `abs()` | all components thru `abs()` | |
| `step()` | all components thru `step()` | identical behavior to [here](https://registry.khronos.org/OpenGL-Refpages/es3/) |
| `sign()` | all components thru `sign()` | identical behavior to ^  |

#### Static `Vec3` specific helpers
| func. name | function | note |
| --- | --- | --- |
| `normalize()` | normalize given vector | TODO: for `Vec2`, too |
| `cross()` | cross product of two vectors | implementation [here](https://registry.khronos.org/OpenGL-Refpages/es3/), TODO: handedness specification |
| `min()`/`max()` | all components thru `min()`/`max()` | TODO: for `Vec2`, too |
| `lerp()` | all components thru `lerp()` | TODO: overload for `float` index, for `Vec2`, too |
| `pow()` | all components thru `pow()` | TODO: overload for `float` base/power, for `Vec2`, too |

#### General TODOs
- testing for `Vec3` helper methods

#### References
- https://registry.khronos.org/OpenGL-Refpages/es3/
