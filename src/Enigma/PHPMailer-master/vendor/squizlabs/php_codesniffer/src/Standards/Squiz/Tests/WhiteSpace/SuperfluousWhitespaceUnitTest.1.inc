<?php
echo 'hi';
echo 'hello';

if ($something) {

}


function myFunction()
{
    echo 'code here';

    echo 'code here';


    // Hello.

    /*
        HI
    */


}

/**
 * Doc comment with a white space at the end.
 */
function myFunction2()
{
    echo 'code here';


    echo 'code here';

}

// phpcs:set Squiz.WhiteSpace.SuperfluousWhitespace ignoreBlankLines true

function myFunction2()
{
    echo 'code here';

    echo 'code here';

}

// Ordinary comment with extra whitespace at the end    

// phpcs:set Squiz.WhiteSpace.SuperfluousWhitespace ignoreBlankLines false

// Уберём из системных свойств все кроме информации об услугах

class Nested_Function
{
    public function getAnonymousClass()
    {
        return new class() {


            static private final function _nested_function()
            {
                echo 'code here';


                echo 'code here';

            }


        };
    }
}

?>

