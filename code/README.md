# Introduction

This repository uses for autotools
# Dependencies 

This depends on having standard autotools available. 

The test program assumes you have Google Test. You can remove it easily. 

# Building

```
autoreconf -vfi
./configure
make check
```

You should see a failed test. Write some tests and make them pass!

## includes and libs 

Recall if you need to add include and library paths

```
./configure CPPFLAGS="-I/opt/homebrew/include" LDFLAGS="-L/opt/homebrew/lib"
```