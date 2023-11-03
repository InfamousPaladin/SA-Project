import random

# Lists of tech-related words and extensions
tech_words = ["code", "program", "data", "byte", "app", "cloud", "server", "web", "cyber", "logic", "net", "matrix", "robot", "bit", "chip", "AI", "byte", "crypto", "pixel"]
file_extensions = [".txt", ".doc", ".jpg", ".png", ".exe", ".html", ".csv", ".log"]

def generate_tech_filename():
    # Randomly select tech-related words, numbers, and extensions
    prefix = random.choice(tech_words)
    number_suffix = f"{random.randint(1, 9):02d}"
    suffix = random.choice(tech_words)
    extension = random.choice(file_extensions)
    
    # Combine the words, number, and extension to create the filename
    filename = f"{prefix}_{number_suffix}_{suffix}{extension}"
    
    return filename

# Generate and print a random tech-themed filename
random_filename = generate_tech_filename()
print("Random Tech-Themed Filename:", random_filename)
