#!/bin/bash
echo "compiling applescripts for iTerm Stable..."
osacompile -o ~/Git/sessh/Sessh/apple-scpt/iTerm2-stable-new-window.scpt -x ~/Git/sessh/apple-scripts/iTermStable/iTerm2-stable-new-window.applescript
osacompile -o ~/Git/sessh/Sessh/apple-scpt/iTerm2-stable-current-window.scpt -x ~/Git/sessh/apple-scripts/iTermStable/iTerm2-stable-current-window.applescript
osacompile -o ~/Git/sessh/Sessh/apple-scpt/iTerm2-stable-new-tab-default.scpt -x ~/Git/sessh/apple-scripts/iTermStable/iTerm2-stable-new-tab-default.applescript


