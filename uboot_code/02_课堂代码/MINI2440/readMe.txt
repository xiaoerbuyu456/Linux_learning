视频是以JZ2440为模板录制的,
里面讲解的程序并不能照搬到TQ2440、MINI2440等其他开发板,
但是修改并不复杂。

全地球的2440开发板，基本上只有按键、LED用的引脚不同，LCD参数不同。

使用JZ2440的好处是，视频里的代码不用修改就可以直接运行.
使用其他开发板也有好处，虽然你得自己修改代码，但是修改过程中会让你学到更多东西。并且我们也提供了TQ2440/MINI2440的代码。

另外: 光盘里的linux-2.6.22.6在TQ2440/MINI2440上使用时会导致蜂鸣器响，
      这是因为JZ2440的LCD用GPB0作为LCD背光使能引脚,
      而TQ2440/MINI2440用GPB0作为蜂鸣器的使能引脚
      
      使用TQ2440/MINI2440时，重新配置内核把自带的LCD驱动去掉即可，方法如下：
在内核目录下执行: make menuconfig
-> Device Drivers
  -> Graphics support
<> S3C2410 LCD framebuffer support  // 输入N

有问题请在论坛上提问.
网        站（论坛）: www.100ask.net
淘        宝: 100ask.taobao.com
业务 QQ/邮箱: weidongshan@qq.com 
视频QQ群    : 416300745，验证信息：订单号和卖家ID


