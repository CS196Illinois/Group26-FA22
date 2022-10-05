from pathlib import Path
def split_script(filename, id_list):
    old_file_path = Path("Data and Transcripts/presidential_debates/" + filename + ".txt")
    assert old_file_path.is_file()
    with open(old_file_path, 'r') as file:
        lines = file.readlines()
    file.close()

    index = 0
    while '\n' in lines:
        lines.remove('\n')
    count = 0
    
    new_file_path = Path("Data and Transcripts/presidential_debates/" + filename + "_parsed.txt")
    if (new_file_path.is_file()):
        Path.unlink(new_file_path)

    with open(new_file_path, 'w') as file2:
        for item in lines:
            lines[index - 1] = item.strip('\n')
            index += 1
            temp_index = 0

            for name in id_list:
                break_length = len(id_list) - 1
                if name in item:
                    file2.write('\n')
                    file2.write(lines[index - 1].strip('\n'))
                    count += 1
                    break
                    temp_index += 1

            if temp_index == break_length:
                file2.write(lines[index - 1].strip('\n') + " ")


    file2.close()
    
    #print(len(lines))
    #print(count)
    print("Completely Parsed " + filename + ".txt")

    