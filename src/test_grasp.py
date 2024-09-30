import ctypes
import time

# 加载共享库---开左门
libleft_1 = ctypes.CDLL('/home/unitree/d1_sdk/build/libleft_1.so')
libleft_2 = ctypes.CDLL('/home/unitree/d1_sdk/build/libleft_2.so')
# 加载共享库---开右门
libright_1 = ctypes.CDLL('/home/unitree/d1_sdk/build/libright_1.so')
libright_2 = ctypes.CDLL('/home/unitree/d1_sdk/build/libright_2.so')
# 加载共享库---1.一字改锥
libgrasp_1_1 = ctypes.CDLL('/home/unitree/d1_sdk/build/libgrasp_1_1.so')
libgrasp_1_2 = ctypes.CDLL('/home/unitree/d1_sdk/build/libgrasp_1_2.so')
# 加载共享库---2.十字改锥
libgrasp_2_1 = ctypes.CDLL('/home/unitree/d1_sdk/build/libgrasp_2_1.so')
libgrasp_2_2 = ctypes.CDLL('/home/unitree/d1_sdk/build/libgrasp_2_2.so')
# 加载共享库---3.六角扳手 
libgrasp_3_1 = ctypes.CDLL('/home/unitree/d1_sdk/build/libgrasp_3_1.so')
libgrasp_3_2 = ctypes.CDLL('/home/unitree/d1_sdk/build/libgrasp_3_2.so')
# 加载共享库---4.剪刀
libgrasp_4_1 = ctypes.CDLL('/home/unitree/d1_sdk/build/libgrasp_4_1.so')
libgrasp_4_2 = ctypes.CDLL('/home/unitree/d1_sdk/build/libgrasp_4_2.so')

# 调用Grasp函数

# 开左门
# 抓住左门
libleft_1.Left_1()
time.sleep(15)
# 打开左门
libleft_2.Left_2()

# # 开右门
# 抓住右门
libright_1.Right_1()
time.sleep(15)
# 打开右门
libright_2.Right_2()
time.sleep(15)

ID = 3

if ID == 1:
    # 1.一字改锥，第1套工具夹爪角度-18，第2套工具夹爪角度-10
    libgrasp_1_1.Grasp()
elif ID == 2:
    # 2.十字改锥，第1套工具夹爪角度-18，第2套工具夹爪角度-10
    libgrasp_2_1.Grasp()
elif ID == 3:
    # 3.六角扳手，第1套工具夹爪角度-37，第2套工具夹爪角度-37
    libgrasp_3_1.Grasp()
else:
    # 4.剪刀，第1套工具夹爪角度-8，第2套工具夹爪角度-15
    libgrasp_4_1.Grasp()
    libgrasp_4_2.Grasp()