# Lambda Engine Coding Style
This document contains information on what the general coding guidelines are for Lambda Engine. Our coding style is a bit haphazard,
but it evolved out of 90s Windows programming standards.
## Indentation
Indentation should be tab-indented and not space-indented.
<br>
The indent size should be 4 spaces.
```cpp
int foo() 
{
	int bar = 0;
	int baz = 0;
	int qux = 0;
}
```
A case statement should line up with the switch statement. Case statements should be idented or not idented based on line length.
```cpp
switch (foo)
{
	case 1:
		bar = 1;
		break;
	case 2: bar = 2; break;
}
```
Brackets should be on their own line separated from the main statement.
```cpp
if (foo)
{
	bar = 1;
	baz = 2;
}
```

## Notation
"Hungarian Notation" was a common practice back in 90's C++ style for Windows. We have adopted it for use in Lambda.

| Prefix | Description   |
|--------|---------------|
| b      | Boolean       |
| c      | Counter       |
| g_     | Global        |
| i      | Integers      |
| m_     | Class members |

We use CamelCase for everything (file names, functions, etc..). Capitalize the first letter in classes, and structs. Lowercase the first letter in a variable or function name.
```cpp
struct Data;
size_t bufferSize;
class HTMLDocument;
String mimeType();
```
