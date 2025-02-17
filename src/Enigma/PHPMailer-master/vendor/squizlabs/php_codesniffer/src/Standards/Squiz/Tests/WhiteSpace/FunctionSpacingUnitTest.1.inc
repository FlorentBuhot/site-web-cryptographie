<?php
/**
 * Comment
 */

use Foo\{const BAZ};
use function bar\math\{Mcosh, Msin,};

include $blah;


/**
 * Comment
 */


/**
 * Comment
 */
function foo()
{
}//end foo()

function func1()
{

}//end func1()


function func2()
{

}//end func2()

function func3()
{

}//end func3()


trait MyTrait
{


    public function a()
    {
    }


    public function b()
    {
    }

    public function c()
    {
    }
}//end class

interface MyInterface
{
    function func1();


    function func2();

    function func3();
}//end interface

interface MyInterface
{


    function func1();


    function func2();


    function func3();


}//end class

interface MyInterface
{
    function func1();
}//end interface

interface MyInterface
{

    /**
     * Function comment.
     *
     * @return boolean
     */
    function func1();


    /**
     * Function comment.
     *
     * @return boolean
     */
    function func2();


    /**
     * Function comment.
     *
     * @return boolean
     */
    function func3();

}//end class

interface MyInterface
{

    /**
     * Function comment.
     *
     * @return boolean
     */
    function func1();


    /**
     * Function comment.
     *
     * @return boolean
     */
    function func2();

    /**
     * Function comment.
     *
     * @return boolean
     */
    function func3();


}//end interface

interface OneBlankLineBeforeFirstFunctionClassInterface
{


    /** @return mixed */
    public function interfaceMethod();
}//end class

class MyClass
{
    function func1()
    {

    }//end func1()


    function func2()
    {

    }//end func2()

    function func3()
    {

    }//end func3()
}//end interface

class MyClass
{


    function func1()
    {

    }//end func1()


    function func2()
    {

    }//end func2()


    function func3()
    {

    }//end func3()


}//end class

// phpcs:set Squiz.WhiteSpace.FunctionSpacing spacing 1

class MyClass
{
    function func1()
    {

    }//end func1()
}//end interface

class MyClass
{

    /**
     * The tag that this element represents (omitting the @ symbol).
     *
     * @var string
     */
    protected $tag = '';


    /**
     * Function comment.
     *
     * @return boolean
     */
    function func1()
    {

    }//end func1()

    /**
     * Function comment.
     *
     * @return boolean
     */
    function func2()
    {

    }//end func2()


    /**
     * Function comment.
     *
     * @return boolean
     */
    function func3()
    {

    }//end func3()

}//end class

// phpcs:set Squiz.WhiteSpace.FunctionSpacing spacing 2

// Closures should be ignored.
preg_replace_callback(
    '~-([a-z])~',
    function ($match) {
        return strtoupper($match[1]);
    },
    'hello-world'
);

$callback = function ($bar) use ($foo) {
    $bar += $foo;
};

class MyClass
{

    protected $tag = '';

    protected $tag = '';


    /**
     * Function comment.
     *
     * @return boolean
     */
    function func1()
    {

    }//end func1()


}


function test()
{

}//end test()


if ($foo) {
    /**
     * Comment
     */
    function foo()
    {
        // Code here
    }

    /**
     * Comment
     */
    function bar()
    {
        // Code here
    }
}

// foo
function foo()
{
}


// phpcs:disable Standard.Category.Sniff -- for reasons.
function bar()
{
}


// phpcs:set Squiz.WhiteSpace.FunctionSpacing spacingBeforeFirst 0
// phpcs:set Squiz.WhiteSpace.FunctionSpacing spacingAfterLast 0

class MyClass
{

    protected $tag = '';

    protected $tag = '';

    /**
     * Function comment.
     *
     * @return boolean
     */
    function func1()
    {

    }//end func1()


}//end class

class MyClass
{
    function func1()
    {
    }
}

// phpcs:set Squiz.WhiteSpace.FunctionSpacing spacing 1
// phpcs:set Squiz.WhiteSpace.FunctionSpacing spacingBeforeFirst 1
// phpcs:set Squiz.WhiteSpace.FunctionSpacing spacingAfterLast 1

class MyClass
{
    protected $tag = '';

    /**
     * Function comment.
     *
     * @return boolean
     */
    private static function func1()
    {

    }//end func1()

    /**
     * Function comment.
     *
     * @return boolean
     */
    private static function func2()
    {

    }//end func1()


}

$util->setLogger(new class {
    public function a()
    {
    }

    private function b()
    {
    }

    protected function c()
    {
    }
});

?>

<?php
function functionInEmbeddedPHP()
{

}

// Make sure the indentation for the function comment does not get removed.

class MyClass
{
    function a()
    {
    }

    function b()
    {
    }

    function c()
    {
    }
}//end class

class MyClass
{
    function a()
    {
    }

    function b()
    {
    }

    function c()
    {
    }
}//end class

class MyClass
{

    protected $tag = '';


    /**
     * Function comment.
     *
     * @return boolean
     */
    function func1()
    {
    }

}//end class

// phpcs:set Squiz.WhiteSpace.FunctionSpacing spacing 2
// phpcs:set Squiz.WhiteSpace.FunctionSpacing spacingBeforeFirst 2
// phpcs:set Squiz.WhiteSpace.FunctionSpacing spacingAfterLast 2

echo 'just some code to let the below line test blank lines before';
echo 'something';
function testingFunctionNotOnOwnLine()
{
}

echo 'somethingelse';
echo 'just some code to let the above line test blank lines after';

class MyClass
{


    /**
     * Function comment.
     *
     * @return boolean
     */
    function func1()
    {
    }

}

$anon_class = new class() {
    public function a()
    {
    }

    protected function b()
    {
    }


    private function c()
    {
    }

};

// phpcs:set Squiz.WhiteSpace.FunctionSpacing spacing 2
// phpcs:set Squiz.WhiteSpace.FunctionSpacing spacingBeforeFirst 1
// phpcs:set Squiz.WhiteSpace.FunctionSpacing spacingAfterLast 3

class MyClass
{
    // Unrelated comment.
    /**
     * Function comment.
     *
     * @return boolean
     */
    function func1()
    {
    }
    // phpcs:disable Standard.Category.Sniff -- for reasons.

    /**
     * Function comment.
     *
     * @return boolean
     */
    function func2()
    {
    }
}

$bar = function () {
    {
        function a()
        {
        }

        function b()
        {
        }

        function c()
        {
        }
    }
};

class MyClass
{
    function a()
    {
    }

    function b()
    {
    }

    function c()
    {
    }
}

if (function_exists('foo') === false) {
    function foo()
    {
    }
}

// phpcs:set Squiz.WhiteSpace.FunctionSpacing spacing 0
// phpcs:set Squiz.WhiteSpace.FunctionSpacing spacingBeforeFirst 0
// phpcs:set Squiz.WhiteSpace.FunctionSpacing spacingAfterLast 0

class Foo
{
    public function returnAnonymousClass()
    {
        return new class() {
            public function baz()
            {
            }
        };
    }

    public function bar()
    {
        function forbidden()
        {
        }
    }
}

// phpcs:set Squiz.WhiteSpace.FunctionSpacing spacing 1
// phpcs:set Squiz.WhiteSpace.FunctionSpacing spacingBeforeFirst 0
// phpcs:set Squiz.WhiteSpace.FunctionSpacing spacingAfterLast 0

class MyClass
{

    // phpcs:disable Stnd.Cat.Sniff -- For reasons.

    /**
     * Description.
     */
    function a()
    {
    }

    /**
     * Description.
     */
    function b()
    {
    }

    /**
     * Description.
     */
    function c()
    {
    }

    // phpcs:enable
}

class MyClass
{
    // Some unrelated comment
    /**
     * Description.
     */
    function a()
    {
    }

    /**
     * Description.
     */
    function b()
    {
    }

    /**
     * Description.
     */
    function c()
    {
    }
    // function d() {}
}

class ClassWithAttributes
{

    #[Attribute1]
    #[Attribute2]
    function a()
    {
    }


    #[Attribute3]
    function b()
    {
    }

    #[Attribute4]
    function c()
    {
    }


    /**
     * Description.
     */
    #[Attribute5]
    function d()
    {
    }

    /**
     * Description.
     */
    #[Attribute6]
    #[Attribute7]
    function e()
    {
    }


    #[Attribute8]
    #[Attribute9]
    function f()
    {
    }
}

// phpcs:set Squiz.WhiteSpace.FunctionSpacing spacing 2
// phpcs:set Squiz.WhiteSpace.FunctionSpacing spacingBeforeFirst 2
// phpcs:set Squiz.WhiteSpace.FunctionSpacing spacingAfterLast 2
