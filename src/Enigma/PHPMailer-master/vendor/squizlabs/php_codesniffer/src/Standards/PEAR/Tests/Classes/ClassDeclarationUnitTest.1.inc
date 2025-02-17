<?php

//  Correct declarations.
class CorrectClassDeclaration
{

}

abstract class CorrectClassDeclarationWithExtends extends correctClassDeclaration
{

}

final class CorrectClassDeclarationWithImplements implements correctClassDeclaration
{

}


// Incorrect placement of opening braces
class IncorrectBracePlacement
{
}

class IncorrectBracePlacementWithExtends extends correctClassDeclaration
{
}

class IncorrectBracePlacementWithImplements implements correctClassDeclaration
{
}

// Incorrect code placement for opening brace.
class IncorrectCodeAfterOpeningBrace
{
echo phpinfo();

}//end class

class IncorrectClassDeclarationWithExtends extends correctClassDeclaration

{

}

class IncorrectBracePlacement
{
}

abstract class CodeSnifferFail
    extends
    ArrayObject
    implements
    Serializable,
    Iterator,
    Countable,
    OuterIterator,
    RecursiveIterator
{
}

abstract class CodeSnifferFail
    extends
    ArrayObject
    implements
    Serializable,
    Iterator,
    Countable,
    OuterIterator,
    RecursiveIterator
{
}

class IncorrectClassDeclarationWithCommentAtEnd extends correctClassDeclaration /* Comment */
{
}

$util->setLogger(new class {
});

var_dump(new class(10) extends SomeClass implements SomeInterface {
    private $num;

    public function __construct($num)
    {
        $this->num = $num;
    }

    use SomeTrait;
});

class CorrectClassDeclarationWithCommentAtEnd extends correctClassDeclaration
    /* Comment */
{
}

class PHPCSIgnoreAnnotationAfterOpeningBrace
{ // phpcs:ignore Standard.Cat.Sniff -- for reasons.
}

// Don't move phpcs:ignore comments.

class PHPCSAnnotationAfterOpeningBrace
{ // phpcs:disable Standard.Cat.Sniff -- for reasons.
}

// Moving any of the other trailing phpcs: comments is ok.
namespace A {
    class B
    {
    }
}

if (!class_exists('ClassOpeningBraceShouldBeIndented')) {
    abstract class ClassOpeningBraceShouldBeIndented
    {
    }
}

if (!class_exists('ClassOpeningBraceTooMuchIndentation')) {
    final class ClassOpeningBraceTooMuchIndentation
    {
    }
}
