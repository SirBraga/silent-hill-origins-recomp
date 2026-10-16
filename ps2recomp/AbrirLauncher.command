#!/bin/bash
# Opens the launcher (launcher/build/sho_launcher; build it with: cmake -S launcher -B launcher/build -G Ninja && ninja -C launcher/build).
ROOT="$(cd "$(dirname "$0")/.." && pwd)"
cd "$ROOT"
exec "$ROOT/launcher/build/sho_launcher"
