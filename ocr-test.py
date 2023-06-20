import pytesseract
from PIL import Image

# Path to the Tesseract OCR executable (update this based on your system)
pytesseract.pytesseract.tesseract_cmd = r'C:\Program Files\Tesseract-OCR\tesseract.exe'

# Path to the input image file
image_path = 'image.png'

# Open the image file
image = Image.open(image_path)

# Perform OCR on the image
text = pytesseract.image_to_string(image)

# Print the extracted text
print(text)
