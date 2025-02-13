import numpy as np
import cv2

# Read depth data from a .dep file
with open("frame.dep", "rb") as f:
    depth_data = np.fromfile(f, dtype=np.uint16)

# Assuming known dimensions of the depth data
width, height = 640, 480  # Replace with your actual resolution
depth_image = depth_data.reshape((height, width))

# Normalize depth data for visualization
depth_normalized = cv2.normalize(depth_image, None, 0, 255, cv2.NORM_MINMAX)
depth_8bit = depth_normalized.astype(np.uint8)
#depth_8bit = (depth_image / depth_image.max() * 255).astype(np.uint8)

#Enhancements
#depth_colored = cv2.applyColorMap(depth_8bit, cv2.COLORMAP_JET)
#cv2.imshow("Colored Depth Image", depth_colored)

# Display the depth image
cv2.imshow("Depth Image", depth_8bit)
cv2.waitKey(0)  # Wait for a key press to close the window
cv2.destroyAllWindows()


# import numpy as np

# # Assuming depth data is in a known format (e.g., 16-bit integers)
# with open("frame.dep", "rb") as f:
#     depth_data = np.fromfile(f, dtype=np.uint16)

# # Reshape if needed
# width, height = 640, 480  # Example dimensions
# depth_image = depth_data.reshape((height, width))

# # Process depth_image as needed
# print(depth_image)
