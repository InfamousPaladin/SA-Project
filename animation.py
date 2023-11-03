import time
import sys
import random

# Lists of tech-related words and extensions
tech_words = ["code", "program", "data", "byte", "app", "cloud", "server", "web", "cyber", "logic", "net", "matrix", "robot", "bit", "chip", "AI", "byte", "crypto", "pixel"]
file_extensions = [".txt", ".doc", ".jpg", ".png", ".exe", ".html", ".csv", ".log"]

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
    download_animation()
