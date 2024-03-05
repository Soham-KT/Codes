import wmi

w = wmi.WMI(namespace="root\\OpenHardwareMonitor")
temperature_info = w.Sensor()
for sensor in temperature_info:
    if sensor.SensorType == u'Temperature':
        print(sensor.Value)
