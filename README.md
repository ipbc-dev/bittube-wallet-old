Compilation instructions
------------------------

### Windows

**1. Clone wallet sources & Main repository**

```
git clone https://github.com/ipbc-dev/ipbcwallet.git
git clone https://github.com/ipbc-dev/ipbc.git
```

**2. Install Boost. For example using vcpkg:**

```
vcpkg install boost
```

**3. Install Qt 5: [download link](http://qt.io/download)**

**4. Install cmake: [download link](https://cmake.org/download/)**

**5. Build**

```
mkdir build && cd build && cmake ..
```

**6. Open the ipbc.sln in Visual Studio and Compile it.**

### Linux

**1. Clone wallet sources & Main repository**

```
git clone https://github.com/ipbc-dev/ipbcwallet.git
git clone https://github.com/ipbc-dev/ipbc.git
```

**2. Create symbolic link to coin sources in the main directory. For example:**

```
ln -s ../ipbc cryptonote
```

**3. Install dependencies. For example using Apt:**

```
apt-get install -y libboost-dev libboost-date-time-dev libboost-program-options-dev libboost-regex-dev libboost-serialization-dev libboost-system-dev libboost-thread-dev libboost-chrono-dev libboost-filesystem-dev
```

**4. Build**

```
mkdir build && cd build && cmake .. && make
```

### Mac OSX

**1. Clone wallet sources & Main repository**

```
git clone https://github.com/ipbc-dev/ipbcwallet.git
git clone https://github.com/ipbc-dev/ipbc.git
```

**2. Create symbolic link to coin sources in the main directory. For example:**

```
ln -s ../ipbc cryptonote
```

**3. Install Boost. For example using homebrew.**

```
brew install boost
```

**4. Install Qt 5.9: [download link](http://qt.io/download)**

**5. Build**

```
mkdir build && cd build && cmake .. && make
```
