### Introduction of Algorithm

#### [solutions of Introdction of Algorithm](https://sites.math.rutgers.edu/~ajl213/CLRS/)

[TOC]

## 第三章 函数的增长

### 渐进记号

#### $\Theta$记号

用来描述**渐进紧确界**。例如$\Theta(g(n))$表示集合：

$$\Theta(g(n))=\{f(n):存在正常量c_1, c_2和n_0, 使得对所有n\ge n_0, 有0\le c_1g(n)\le f(n)\le c_2g(n)\}$$

若存在正常量$c_1$和$c_2$使得对于足够大的$n$，函数$f(n)$能“夹入”$c_1g(n)$与$c_2g(n)$之间，则$f(n)$属于集合$\Theta(g(n))$。可以记为$f(n) \in \Theta(g(n))$，通常也记为$f(n) = \Theta(g(n))$。

#### $O$记号

当只有一个**渐进上界**时，可用$O$描述。例如$O(g(n))$表示集合：

$$O(g(n))=\{f(n):存在正常量c和n_0, 使得对所有n\ge n_0, 有0\le f(n)\le cg(n)\}$$

#### $\Omega$记号

$\Omega$提供**渐进下界**记号。例如$\Omega(g(n))$表示集合

$$O(g(n))=\{f(n):存在正常量c和n_0, 使得对所有n\ge n_0, 有0\le cg(n)\le f(n)\}$$

**定理**：对于任意的$f(n)$和$g(n)$，当且仅当$f(n)=O(g(n))$且$f(n)=\Omega(g(n))$时，$f(n)=\Theta(g(n))$。

#### $o$记号

用来表示**非渐进紧确的上界**。例如$o(g(n))$表示集合：

$$o(g(n))=\{f(n):对任意c>0, 存在正常量n_0, 使得对所有n\ge n_0, 有0\le f(n)\lt cg(n)\}$$

例如，$2n=o(n^2)$，$2n^2 \ne o(n^2)$。⚠️需要注意的是，$O(g(n))$的定义中是存在$c$，而在$o(g(n))$的定义中是任意$c>0$，直观是就是当$n\to\infin$时，$f(n)$相对$g(n)$变得微不足道了，即$\lim\limits_{x\to\infin}\frac{f(n)}{g(n)}=0$

#### $\omega$记号

与$o$记号相对$O$记号的关系类似，$\omega$表示**非渐进紧确的下界**。$\omega(g(n))$表示集合：

$$\omega(g(n))=\{f(n):对任意c>0, 存在正常量n_0, 使得对所有n\ge n_0, 有0\le cg(n)\lt f(n)\}$$

例如，$\frac{n^2}{2}=\omega(n)$，$\frac{n^2}{2}\ne \omega(n)$。$f(n)=\omega(g(n))$蕴涵着$\lim\limits_{x\to\infin}\frac{f(n)}{g(n)}=\infin$

#### 比较函数特性

1. 传递性

   $$f(n) = \Theta(g(n))且g(n)=\Theta(h(n)), 蕴涵f(n)=\Theta(h(n))$$

   $$f(n)=O(g(n))且g(n)=O(h(n))，蕴涵f(n)=O(h(n))$$

   $$f(n)=\Omega(g(n))且g(n)=\Omega(h(n))，蕴涵f(n)=\Omega(h(n))$$

   $$f(n)=o(g(n))且g(n)=o(h(n))，蕴涵f(n)=o(h(n))$$

   $$f(n)=\omega(g(n))且g(n)=\omega(h(n))，蕴涵f(n)=\omega(h(n))$$

2. 自反性

   $$f(n)=\Theta(f(n))$$

   $$f(n)=O(g(n))$$

   $$f(n)=\Omega(g(n))$$

3. 对称性

   $$f(n)=\Theta(g(n))当且仅当g(n)=\Theta(f(n))$$

4. 转置对称性

   $$f(n)=O(g(n))当且仅当g(n)=\Omega(f(n))$$

   $$f(n)=o(g(n))当且仅当g(n)=\omega(f(n))$$

可以将渐渐性类比实数的大小对比，

5. $$f(n) = \Theta(g(n))类比为a=b$$

   $$f(n)=O(g(n))类比为a\le b$$

   $$f(n)=\Omega(g(n))类比为a\ge b$$

   $$f(n)=o(g(n))类比为a\lt b$$

   $$f(n)=\omega(g(n))类比为a\gt b$$

⚠️注意 ，不是所有的函数都可以渐进比较，例如函数值反复交叉的函数不能进行渐进比较。

### 标准记号与常用函数

#### 向上取整与向下取整

对于任意的$x\gt 0$有：$x-1 \lt \lfloor x\rfloor \le x\le \lceil x\rceil \lt x+1$

对于任意的整数$n$有：$\lceil n/2\rceil + \lfloor n/2\rfloor = n$

对于任意实数$x\ge 0$和整数$a,b\gt0$有：

$\lceil{\frac{\lceil{x/a}\rceil}{b}}\rceil = \lceil\frac{x}{ab}\rceil$

$\lfloor{\frac{\lfloor{x/a}\rfloor}{b}}\rfloor = \lfloor\frac{x}{ab}\rfloor$

$\lceil\frac{a}{b}\rceil \le \frac{a+(b-1)}{b}$

$\lfloor\frac{a}{b}\rfloor \le \frac{a+(b-1)}{b}$





