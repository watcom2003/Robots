#include <webots/robot.h>
#include <webots/device.h>
#include <stdio.h>

#define TIME_STEP 64

void printDevices() {
  int n_devices = wb_robot_get_number_of_devices();
  int i;
  for(i=0; i<n_devices; i++) {
    WbDeviceTag tag = wb_robot_get_device_by_index(i);
  
    const char *name = wb_device_get_name(tag);
    WbNodeType type = wb_device_get_node_type(tag);
  
    // do something with the device
    printf("Device #%d name = %s\n", i, name);
  
    if (type == WB_NODE_CAMERA) {
      // do something with the camera
      printf("Device #%d is a camera\n", i);
    }
  }
}

int main(int argc, char **argv) {
 wb_robot_init();
 
 printDevices();

 wb_robot_cleanup();
 return 0;
}
