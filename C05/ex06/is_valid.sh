echo "\n\t==== Trying to compile ====\n"

echo "gcc -Wall -Werror -Wextra *.c";
compilation=$(gcc -Wall -Werror -Wextra *.c);

if ! [ compilation ]
then
	echo "\n\t==== Compilation failed ! Exiting ====\n";
	exit 1;
fi
echo "\n\t==== Compilation succeedeed ! ====\n";

./a.out > validate;
diff=$(diff -n validate 1000k_primes);
echo $diff;

if ! [ diff ]
then
	echo "\n\t==== Diff KO :( ===="
else
	echo "\n\t==== Diff OK :D ===="
fi