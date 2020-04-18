import numpy as np
import matplotlib.pyplot as plt 
time = np.arange(0,10,0.1);
amplitude = np.sin(time)
plt.plot(time, amplitude)
plt.title('Sine Wave')
plt.xlabel('Time')
plt.ylabel('Amplitude as sin(time)')
plt.grid(True, which='both')
plt.axhline(y=0, color='k')
plt.show()
