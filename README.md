Compilation instructions
------------------------

### Windows

**1. Clone this repository, with submodules.**

```
git clone --recurse-submodules https://github.com/ipbc-dev/ipbc-wallet.git
```

**2. Install Boost where CMake can find it. For example you could download the [Precompiled Windows Binaries Package Here](https://sourceforge.net/projects/boost/files/boost-binaries/1.66.0/boost_1_66_0-bin-msvc-all-32-64.7z/download) and extract it to "C:\Program Files\boost"**

**3. Install Qt 5: [download link](http://qt.io/download)**

**4. Install cmake: [download link](https://cmake.org/download/)**

**5. Build**

```
mkdir build && cd build && cmake ..
```

**6. Open the ipbc.sln in Visual Studio and Compile it.**

### Linux

**1. Clone this repository, with submodules.**

```
git clone --recurse-submodules https://github.com/ipbc-dev/ipbc-wallet.git
```

**2. Install dependencies. For example using Apt:**

```
apt-get install -y cmake libboost-dev libboost-date-time-dev libboost-program-options-dev libboost-regex-dev libboost-serialization-dev libboost-system-dev libboost-thread-dev libboost-chrono-dev libboost-filesystem-dev
```

**3. Build**

```
mkdir build && cd build && cmake .. && make
```

### Mac OSX

**1. Install Git**

```
xcode-select —install
```

**2. Clone this repository, with submodules.**

```
git clone --recurse-submodules https://github.com/ipbc-dev/ipbc-wallet.git
```

**3. Install Boost. For example using homebrew.**

```
brew install boost
```

**4. Install cmake. For example using homebrew.**

```
brew install cmake
```

**5. Install Qt 5.9:**

  * Ubuntu 16.04 and up
  ```
  apt install qtbase5-dev
  ```

  * Binaries from Qt upstream [download link](http://qt.io/download)

**6. Build**

```
mkdir build && cd build && cmake .. && make
```
