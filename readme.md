### 一、Qxt qxtglobalshortcut qt5
---

[Qxt ](http://dev.libqxt.org/libqxt/wiki/Home) qxtglobalshortcut library qt5 compatibility
Tested with qt5.4 on OSX 10.9.2, linux, windows (mingw and msvc)

usage:

```
git clone https://github.com/ddqd/qxtglobalshortcut5.git
```

add in ur .pro file:
```
include(qxtglobalshortcut5/qxt.pri)
```

example code:
```cpp
#include <QDebug>
#include "qxtglobalshortcut.h"
...

QxtGlobalShortcut *shortcut = new QxtGlobalShortcut(this);
shortcut->setShortcut(QKeySequence("Shift+1"));
connect(shortcut, &QxtGlobalShortcut::activated,
    [=]() {qDebug() << "shortcut activated";});
```

### 二、vs程序

#### 1、编译

> vs 2013

1. 打开qxtglobalshortcut5.sln
2. 编译qxtglobalshortcut5项目，生成qxtglobalshortcut5.dll
3. 编译test项目，执行可执行程序test.exe，按Alt+1组合键，弹出如下图


![image](https://user-images.githubusercontent.com/14138754/157586512-390396e3-0206-4f04-a7f1-23b33b9e32b5.png)
