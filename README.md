# Mastering Arduino Programming With Python Course 31

## Course Snapshot

| Field | Details |
| --- | --- |
| Instructor | Ashraf S A AlMadhoun |
| Hardware Focus | Arduino |
| Course Link | https://www.udemy.com |
| Repository Updated | 2025-11-18 |

## Overview

Mastering Arduino Programming With Python Course 31 is a hands-on course focused on
practical Arduino development. This repository contains curated starter code, wiring
notes, and a repeatable workflow that mirrors the lessons from the video curriculum.

## Learning Objectives

- Understand the core goals of the **Mastering Arduino Programming With Python Course 31** lessons.
- Map the theoretical material onto executable firmware samples.
- Practice reviewing telemetry / console logs with the provided samples.
- Customize the code to match your target hardware setup.

## Hardware & Components

Consult `CIRCUIT.md` for wiring notes. Typical builds require a development board,
sensors/actuators described in the Mastering Arduino Programming With Python Course 31
videos, jumper wires, and a USB cable for programming plus logging.

## Setup Instructions

1. Install the latest Arduino IDE or your preferred toolchain.
2. Clone this repository or download it as a ZIP.
3. Review the `README.md`, `CIRCUIT.md`, and `data/` samples.
4. Upload the code to your dev board and monitor the serial console.

## Code Walkthrough

The `*.c` files are intentionally lightweight so you can focus on the core concept taught
in the course. Each file now includes metadata comments that summarize intent, I/O
expectations, and how telemetry maps to the lesson.

## Usage

```bash
# Build and inspect the sample on a desktop toolchain
gcc -Wall -Wextra -std=c11 *.c -o demo && ./demo

# Or upload via Arduino IDE to replicate the Mastering Arduino Programming With Python Course 31 lab
```

## Sample Data

Open `data/sample-telemetry.jsonl` to inspect representative console output. This is
useful when validating your hardware wiring or cloud logging pipeline.

## Additional Notes (Legacy Content)

# Mastering Arduino Programming with Python (Course 31)

- Course: Mastering Arduino Programming with Python
- Author: Ashraf S A AlMadhoun
- Link: https://www.udemy.com/course/arduino-meets-python/?couponCode=JULYMAXDICOUNT

## Overview

Receive commands from Python over serial to control hardware on Arduino. This example turns the onboard LED on and off via simple text commands.

## Code Explained

- Buffers text input and parses `ON` or `OFF` commands.
- Acknowledges actions with `OK ON` / `OK OFF` or `ERR`.

## How To Use

- Send lines from Python using `pyserial`: `ser.write(b"ON\n")` or `ser.write(b"OFF\n")`.
- Observe acknowledgments and LED behavior.

## Purchase With Discount

Enroll using the link above for a discounted price and full Arduino–Python control workflows.
