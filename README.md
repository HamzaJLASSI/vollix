# VOLLIX – Reaction Time Trainer for Tennis Footwork

## Overview

VOLLIX is a reaction time measurement system designed for tennis footwork training.
It uses Raspberry Pi GPIO hardware combined with floor projection to measure how quickly an athlete responds to visual cues.

Foot placement guides are shown to provide spatial context, but the system’s **primary focus is reaction time**, not footwork technique.

## Project Context

This project was developed as part of the **CreaTe (Creative Technology)** program at the **University of Twente**,
for **Module 6: Design and Research of User Experience (DesResUX)**.

It represents a **high-fidelity interactive prototype** for reaction time measurement in a physical–digital training environment.

## Key Features

* Accurate reaction time measurement
* Two operating modes:

  * **Measurement Mode** – structured 10-trial sessions with metadata logging
  * **Game Mode** – training with progressive difficulty and feedback
* CSV data export with timestamps and test conditions
* Physical interaction via buttons and LEDs
* Calibration system for adapting visuals to different physical setups

## Hardware Requirements

* Raspberry Pi 5 (developed and tested specifically on Pi 5)
* GPIO components:

  * LEDs (targets and life indicators)
  * Physical buttons (targets + start button)
* Projector for floor projection
* Enclosure for hardware protection

## Software Requirements

* Processing 3 or newer
* Raspberry Pi OS with GPIO tools (`gpioget`, `gpioset`)

## Quick Start

1. Wire all components according to `PinMap.pde`
2. Install Processing on the Raspberry Pi
3. Clone this repository
4. Place the required SVG icons in the `data/` folder:

   * `home.svg`
   * `adjust.svg`
   * `hint.svg`
   * `Foot_L.svg`
   * `Foot_R.svg`
5. Run `vollix.pde` in Processing

On startup, the system automatically performs a hardware self-test.

## Modes

### Measurement Mode

Designed for structured reaction time experiments.

Process:

1. Enter a subject ID using the number keys
2. Select test condition (game / real)
3. Select measurement moment (before / after)
4. Complete 10 trials

Output:

* CSV file containing reaction times and metadata

### Game Mode

Designed for engaging reaction time practice.

Features:

* Progressive difficulty
* Three-life system
* Immediate visual feedback
* Level progression

## Calibration

Calibration allows the projected visuals to match the physical setup.

* Center position and scale
* Target positions, rotation, and scale
* Controls:

  * WASD – move
  * Arrow keys – rotate / scale
  * Enter – confirm
  * Escape – cancel

## Data Output

Reaction time data is saved as CSV:

```
datetime,subject_id,measurement_moment,test_condition,rt1,rt2,...rt10
2026-01-12 13:13:07,123,before,game,450,512,...389
```

The included `measurement_log.csv` contains **example data only**.

## File Structure

* `vollix.pde` – main entry point
* `App.pde` – application management
* `Hardware.pde` – GPIO abstraction layer
* `PinMap.pde` – hardware configuration
* `MeasurementState.pde` – reaction time testing logic
* `PlayingState.pde` – game mode
* `CalibrationState.pde` – calibration logic
* `data/` – icons and example CSV

## Applications

* Sports science research
* Reaction time assessment
* Athletic training
* Motor skill development studies
* Physical–digital UX prototyping

## Notes

This system prioritizes **reaction time measurement**.
Foot visuals are included for orientation but are secondary to timing accuracy.
