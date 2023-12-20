<!DOCTYPE html>
<html>

<head>
  <title>Obstacle Detector and Distance Measurement System</title>
</head>

<body>

  <h1>Obstacle Detector and Distance Measurement System</h1>

  <p>This Arduino project utilizes a Passive Infrared (PIR) sensor to detect the presence of obstacles and an ultrasonic sensor to measure the distance to the detected obstacle. The system is designed to provide real-time feedback on the presence and proximity of obstacles.</p>

  <h2>Components Used:</h2>
  <ul>
    <li>PIR Sensor (connected to pin 2)</li>
    <li>Ultrasonic Sensor (Trigger Pin: 9, Echo Pin: 10)</li>
    <li>I2C LCD Display (Address: 0x27, 16x2 characters)</li>
  </ul>

  <h2>Description:</h2>
  <p>The system constantly monitors the PIR sensor for any movement. Upon detecting motion (PIR sensor output goes HIGH), the LCD display shows a warning message indicating the presence of an obstacle. Simultaneously, the ultrasonic sensor is triggered to measure the distance to the obstacle.</p>

  <p>The ultrasonic sensor utilizes the Trigger and Echo pins (9 and 10, respectively) to send and receive ultrasonic waves. The calculated distance is then displayed on the LCD screen in centimeters.</p>

  <p>If no motion is detected, the LCD displays a message indicating that there are no obstacles ahead.</p>

  <h2>Setup:</h2>
  <ol>
    <li>Connect the PIR sensor to pin 2.</li>
    <li>Connect the Trigger pin of the ultrasonic sensor to pin 9 and the Echo pin to pin 10.</li>
    <li>Connect the I2C LCD display with the address 0x27 and a size of 16x2 characters.</li>
  </ol>

  <h2>Instructions:</h2>
  <ol>
    <li>Upload the provided Arduino code to your Arduino board.</li>
    <li>Power up the system and wait for the "Sensors active" message on the LCD.</li>
    <li>When motion is detected, the display will show "Obstacle ahead" along with the distance to the obstacle in centimeters.</li>
    <li>If no obstacles are detected, the display will show "No obstacle ahead."</li>
  </ol>

  <h2>Dependencies:</h2>
  <p><a href="https://github.com/fdebrabander/Arduino-LiquidCrystal-I2C-library">LCD_I2C</a> library</p>

  <p>Feel free to modify the code and adapt it to your specific requirements. Happy detecting!</p>

</body>

</html>
