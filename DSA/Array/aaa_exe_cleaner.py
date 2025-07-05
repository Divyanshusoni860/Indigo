import os
import shutil

def move_and_overwrite_exe_files():
    current_dir = os.path.dirname(os.path.abspath(__file__))
    exe_folder = os.path.join(current_dir, "exe")

    # Create 'exe' folder if it doesn't exist
    if not os.path.exists(exe_folder):
        os.makedirs(exe_folder)

    # Loop through files in current directory
    for file in os.listdir(current_dir):
        if file.endswith(".exe") and file != os.path.basename(__file__):
            src_path = os.path.join(current_dir, file)
            dest_path = os.path.join(exe_folder, file)

            # If same file exists, overwrite it
            if os.path.exists(dest_path):
                os.remove(dest_path)

            shutil.move(src_path, dest_path)
            print(f"Moved: {file} -> exe/{file}")

if __name__ == "__main__":
    move_and_overwrite_exe_files()
