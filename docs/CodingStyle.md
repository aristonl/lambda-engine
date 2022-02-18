# Lambda Engine Coding Style
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
}
```