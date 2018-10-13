# Simple-Encryption-Algorithm
* After learning simple encryption algorithm(Caesar cipher&amp;Vigenère cipher)，I decide to implement them by C++ language.
* ##  目标 
　 通过简单的编程实现恺撒密码、维吉尼亚密码算法的加密与解密。
* ##  环境
　　Microsoft Visual Studio 2015
* ##  相关技术
  * ### 凯撒密码
  *  加密<br>
  ![加密公式](https://github.com/HoqiheChen/Simple-Encryption-Algorithm/tree/master/gif/k_en.jpg)<br>
    当密钥设置为K时，将明文的每一位偏移K距离，得到密文。当字母表长度不够时，采取%计算。<br>
  *  解密<br>
  ![解密公式](https://github.com/HoqiheChen/Simple-Encryption-Algorithm/tree/master/gif/k_de.jpg)<br>
    已知密钥K的情况下，将密文反方向偏移K距离，得到明文。<br>
  * ### 维吉尼亚密码
    维吉尼亚密码的密码表为二维表，第一行代表明文字母，第一列代表密钥字母，它的明码表后有26个密码表，每个表相对前一个发生一次移位。如果只用其中某一个进行加密，那么只是简单的恺撒移位密码。但用方阵中不同的行加密不同的字母，它就是一种强大的密码了。加密者可用第7行来加密第一个字母，再用第25行来加密第二个字母，然后根据第8行来加密第三个字母等。<br>
  *  加密<br>
  ![加密公式](https://github.com/HoqiheChen/Simple-Encryption-Algorithm/tree/master/gif/v_en.jpg)<br>
  加密过程包括：确定密钥、排列明文、加密明文。<br>
  1.确定密钥<br>
  首先，和消息接收方需要在密钥上达成一致，加密解密都是同一个密钥，比如选用BIG。<br>
  2.排列明文<br>
  把明文转换为大写字母排列出来，对应着重复排列密钥，直到明文结尾：<br>
  3.加密明文<br>
  然后，每一组的两个字母就成了我们的坐标。在维吉尼亚坐标图中分别横向纵向找出它们。横坐标和纵坐标的交点就是加密后的字母。<br>
  *  解密<br>
  ![解密公式](https://github.com/HoqiheChen/Simple-Encryption-Algorithm/tree/master/gif/v_de.jpg)<br>
  加密过程包括：排列明文、解密明文。<br>
  1.排列密文：<br>
  和加密一样，把密文排列出来，在下面对应着重复排列密钥。<br>
  2.解密密文：<br>
  解密就是加密的逆过程。
