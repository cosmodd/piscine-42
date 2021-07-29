ifconfig | grep -E '(\w{2}:){4}' | sed -E 's/[^:]+ ([a-zA-Z0-9:]+)[^:]+/\1/'
