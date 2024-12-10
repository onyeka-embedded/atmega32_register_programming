import os
from SCons.Script import DefaultEnvironment # type: ignore

def set_fuses(target, source, env):
    avrdude_command = "avrdude -c usbasp -p m32 -U lfuse:w:0xFF:m -U hfuse:w:0x99:m" #8Mhz
    os.system(avrdude_command)

env = DefaultEnvironment()
env.AddPreAction("upload", set_fuses)
