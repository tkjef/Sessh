#!/bin/bash
echo "compiling applescripts for OS X terminal..."
osacompile -o ~/Git/sessh/Sessh/apple-scpt/terminal-new-window.scpt -x ~/Git/sessh/apple-scripts/terminal/terminal-new-window.applescript
osacompile -o ~/Git/sessh/Sessh/apple-scpt/terminal-current-window.scpt -x ~/Git/sessh/apple-scripts/terminal/terminal-current-window.applescript
osacompile -o ~/Git/sessh/Sessh/apple-scpt/terminal-new-tab-default.scpt -x ~/Git/sessh/apple-scripts/terminal/terminal-new-tab-default.applescript

