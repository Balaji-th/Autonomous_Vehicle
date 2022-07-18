# Output:
        https://youtu.be/48irckF3vA0

# Autonomous_Vehicle
Objective of project is to build Level 3 vehicles Which have “environmental detection” capabilities and can make informed decisions for themselves, such as accelerating past a slow-moving vehicle. But they still require human override. The driver must remain alert and ready to take control if the system is unable to execute the task. Autonomous driving is not one single technology, but rather a highly complex system that consists of many sub-systems. Let us break it into three major components namely algorithms including sensing, perception, and decision. Client systems, including the operating system and the hardware platform including high-definition (HD) Camera, deep learning trained model, simulation Code, and data storage. The algorithm subsystem extracts meaningful information from sensor raw data to understand its environment and to make decisions about its future actions. The client systems integrate these algorithms together to meet real-time and reliability requirements, in other words taking actions so as to reliably and safely reach target destinations.

![Lane_detection_flow](https://user-images.githubusercontent.com/60837462/179561984-ee6043d3-6f98-4a4e-94e3-387e4c51969d.jpg)

# Algorithm
draw_lane_lines():
        	function takes detected lanes and fills the area inside them with a green color. It also visualizes the center of the lane by taking the mean of left_fitx and right_fitx  lists and storing them in pts_mean variable, which then is represented by yellowish color. This variable is also used to calculate the offset of the vehicle to either side or of it is centered in the lane.

offCenter():
        offCenter() function uses pts_mean variable to calculate the offset value and show it in meter space.

addText():
        Finally by adding text on the final image would complete the process and the information displayed.

main():
        Main function is where all these functions are called in the correct order and contains the loop to play video.

![image](https://user-images.githubusercontent.com/60837462/179562303-76d24915-bcfe-4acf-b165-cf375b243554.png)

