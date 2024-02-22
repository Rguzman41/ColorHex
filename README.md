# ColorHex

The program can be compiled using the command:
```
g++ main.cpp --std=c++17 -o Hex
```

Or to compile and run it with the above test data, invoke `sh test_runner.sh`

## Getting Started

If you don't already have the `cpp-container built, do so with the command:

```
docker build -t cpp-container .
```

Once built, run the image:

```
docker run -it cpp-container
```

...or run it interactively in a shell:

```
docker run -it cpp-container sh
```

...or run it with a volume mounted to the current source code:

```
docker run -v "$(pwd)":/usr/src -it cpp-container
```

