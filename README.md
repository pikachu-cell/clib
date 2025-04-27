# clib

**clib** is a lightweight C library that implements common data structures and algorithms, similar in spirit to a standard library for C projects. It provides a clean, consistent, and efficient API for fundamental data structures like arrays, lists, stacks, queues, trees, and graphs, along with classic algorithms.

## Features

- Dynamic Arrays
- Linked Lists (Singly and Doubly)
- Stacks and Queues
- Binary Trees and Binary Search Trees
- Graphs (basic representations)
- Common algorithms (sorting, searching, traversal)

## Directory Structure

```
clib/
├── include/    # Header files (.h) for public APIs
├── src/        # Source files (.c) for implementations
├── tests/      # Unit tests for the library
├── Makefile    # Build automation
├── README.md   # Project documentation
└── LICENSE     # License information
```

## Building

To build the library, simply run:

```bash
make
```

This will compile all the sources and produce a static library file `libclib.a`.

## Usage

Include the main header in your project:

```c
#include "clib.h"
```

Link against `libclib.a` when compiling:

```bash
gcc your_program.c -L/path/to/clib -lclib -o your_program
```

## Example

```c
#include "array.h"

int main() {
    clib_array_t *arr = clib_array_create();
    clib_array_push(arr, 10);
    clib_array_push(arr, 20);
    printf("%d\n", clib_array_get(arr, 1)); // Output: 20
    clib_array_destroy(arr);
    return 0;
}
```

## Contributing

Contributions are welcome! Feel free to open issues, suggest features, or submit pull requests.

## License

Distributed under the MIT License. See `LICENSE` for more information.

