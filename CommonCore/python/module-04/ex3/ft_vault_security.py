
def secure_archive(f_name: str,
                   mode: str = "r",
                   to_write: str = "") -> tuple[bool, str]:

    try:
        if (mode != "r" and mode != "w"):
            raise ValueError(f"Error: invalid file mode: '{mode}'")

        with open(f_name, mode) as f:
            if (mode == "r"):
                return (True, f.read())
            else:
                f.write(to_write)
                return (True, f"Content successfully written to "
                        f"file '{f_name}'")
    except Exception as e:
        return (False, str(e))


if __name__ == "__main__":

    print("=== Cyber Archives Security ===")

    print("\nUsing 'secure_archive' to read from a nonexistent file:")
    my_tp = secure_archive("/not/existing/file")
    print(my_tp)

    print("\nUsing 'secure_archive' to read from an inaccessible file:")
    my_tp = secure_archive("/etc/shadow")
    print(my_tp)

    print("\nUsing 'secure_archive' to read from a regular file:")
    my_tp = secure_archive("ancient_fragment.txt")
    print(my_tp)

    print("\nUsing 'secure_archive' to write previous content to a new file:")
    my_tp = secure_archive("new_file.txt", "w", my_tp[1])
    print(my_tp)
