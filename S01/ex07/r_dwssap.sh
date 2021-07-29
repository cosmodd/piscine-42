cat /etc/passwd |
 sed '/^#/d' | # remove comments
 sed -E 's/(.+):\*.+/\1/g' | # only keep logins
 awk '{ if (NR%2==0 && NR >= 2) print }' |
 rev |
 sort --reverse |
 awk -v l1=$FT_LINE1 -v l2=$FT_LINE2 'NR==l1,NR==l2' ORS=', ' | # shows lines between FT_LINE1 and FT_LINE2
 sed 's/, $/\./' |
 tr -d '\n'
