#!/bin/bash
# Ghidra headless for the Silent Hill Origins EE (uses the Black project's Ghidra and EE plugin).
#   tools/ghidra_ee.sh import            analyse orig/SLUS_217.31 once
#   tools/ghidra_ee.sh decomp 0xADDR ... print decompiled C
set -euo pipefail
R=$(cd "$(dirname "$0")/.." && pwd)
B=/Users/sirbraga/Documents/black-decomp
GHIDRA=${GHIDRA:-$B/tools/ghidra/ghidra_12.1.3_PUBLIC}
export JAVA_HOME=${JAVA_HOME:-/opt/homebrew/opt/openjdk@21/libexec/openjdk.jdk/Contents/Home}
PROJ=$R/recomp/ghidra
ELF=$R/orig/SLUS_217.31
HEADLESS=("$GHIDRA/support/analyzeHeadless" "$PROJ" origins)
case "${1:-}" in
import) "${HEADLESS[@]}" -import "$ELF" -processor r5900:LE:32:default -overwrite 2>&1 | grep -E "INFO  (IMPORTING|ANALYZING|REPORT)|ERROR" || true ;;
decomp) shift; "${HEADLESS[@]}" -process SLUS_217.31 -noanalysis -readOnly -scriptPath "$B/tools/ghidra_scripts" -postScript DecompileAt.java "$@" 2>&1 |
        awk '/^INFO  DecompileAt.java> /{on=1; sub(/^INFO  DecompileAt.java> /,""); sub(/ \(GhidraScript\) *$/,""); print; next} /^(INFO|WARN|ERROR) /{on=0} on' ;;
*) sed -n 2,4p "$0"; exit 1 ;;
esac
