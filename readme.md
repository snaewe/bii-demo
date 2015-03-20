# How to create std::string objects from string literals with embedded '\0' characters.

Just do:
```.cpp
std::string str = binstr("\x00\x02");
```

