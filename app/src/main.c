#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <zephyr/drivers/sensor.h>
#include <zephyr/sys/printk.h>
#include <zephyr/logging/log.h>


LOG_MODULE_REGISTER(bmi270_app, LOG_LEVEL_INF);


int main(void) {
  const struct device *bmi270_dev = DEVICE_DT_GET_ANY(bosch_bmi270);

  if (!device_is_ready(bmi270_dev)) {
    printk("BMI270 device not found\n");
    return;
  }

  printk("BMI270 IMU initialized successfully\n");

  struct sensor_value accel[3], gyro[3], step_count;

  while (1) {
    if (sensor_sample_fetch(bmi270_dev) < 0) {
      printk("Failed to fetch BMI270 data\n");
      continue;
    }

    /* Read accelerometer data */
    sensor_channel_get(bmi270_dev, SENSOR_CHAN_ACCEL_XYZ, accel);
    printk("Accel (m/s²): X=%.2f, Y=%.2f, Z=%.2f\n",
        sensor_value_to_double(&accel[0]),
        sensor_value_to_double(&accel[1]),
        sensor_value_to_double(&accel[2]));

    /* Read gyroscope data */
    sensor_channel_get(bmi270_dev, SENSOR_CHAN_GYRO_XYZ, gyro);
    printk("Gyro (rad/s): X=%.2f, Y=%.2f, Z=%.2f\n",
        sensor_value_to_double(&gyro[0]),
        sensor_value_to_double(&gyro[1]),
        sensor_value_to_double(&gyro[2]));

    /* Read step count */
    sensor_channel_get(bmi270_dev, SENSOR_CHAN_STEP, &step_count);
    printk("Step Count: %d\n", step_count.val1);

    /* Wait for 1 second */
    k_sleep(K_SECONDS(1));
  }

  return 1;
}
