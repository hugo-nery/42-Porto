# *************************************************************************** #
#                                                                             #
#                                                         :::      ::::::::   #
#   ft_different_errors.py                              :+:      :+:    :+:   #
#                                                     +:+ +:+         +:+     #
#   By: hde-albu <hde-albu@student.42porto.com>     +#+  +:+       +#+        #
#                                                 +#+#+#+#+#+   +#+           #
#   Created: 2026/06/25 10:58:23 by hde-albu           #+#    #+#             #
#   Updated: 2026/06/25 16:26:47 by hde-albu          ###   ########.fr       #
#                                                                             #
# *************************************************************************** #

def garden_operations(operation_number: int) -> None:
    if (operation_number == 0):
        int("abc")
    elif (operation_number == 1):
        10 / 0
    elif (operation_number == 2):
        open("not_a_file.nope")
    elif (operation_number == 3):
        "2" + 5  # type: ignore
    else:
        print("Operation completed successfully")


def test_error_types() -> None:
    i = 0
    while (i <= 4):
        print(f"\nTesting operation {i}...")
        try:
            garden_operations(i)
        except ValueError as e:
            print(f"Caught ValueError: {e}")
        except ZeroDivisionError as e:
            print(f"Caught ZeroDivisionError: {e}")
        except FileNotFoundError as e:
            print(f"Caught FileNotFoundError: {e}")
        except TypeError as e:
            print(f"Caught TypeError: {e}")
        i += 1


if __name__ == "__main__":
    print("=== Garden Error Types Demo ===")
    test_error_types()
    print("\nAll error types tested successfully!")
