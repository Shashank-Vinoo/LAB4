# RISCV CPU - Team 8

## Development

- [ ] Finish single cycle CPU
  - [x] Finish individual modules
  - [ ] Complete top level CPU
  - [ ] Write testbench for top level
  - [ ] Clean module names
- [ ] Pipelined processor
  - [ ] Pipelined control unit
  - [ ] Insert stage registers
  - [ ] Testbench for simple pipelined CPU
  - [ ] Hazard unit:
    - [ ] Data hazard handling by forwarding
    - [ ] Control hazard handling by stalling

## Testbench usage

Run all tests from the tb directory, `cd tb`  
Due to different file endings on WSL and MacOS, use `runw` for running on Windows and `runm` for running on Mac. This prevents the need to run `dos2unix` to fix them.

---

### Top Level Verification

`./doit.sh tests/{tb file}`

For example:

**Windows**

```
cd tb ; ./runw.sh tests/verify.cpp
```

**MacOS**

```
cd tb ; ./runm.sh tests/verify.cpp
```

### Unit Level Verification

`./doit.sh tests/unit_tests/{tb file}`

For example:  
**Windows**

```
cd tb ; ./runw.sh tests/unit_tests/RegFile_tb.cpp
```

**MacOS**

```
cd tb ; ./runm.sh tests/unit_tests/RegFile_tb.cpp
```
