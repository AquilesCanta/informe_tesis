if [ "$#" -gt "0" ]
then echo "CAP"$1; pdflatex -output-directory=output $1; fi
if [ "$#" -eq "0" ]
then echo "TESIS"; pdflatex -output-directory=output tesis; fi