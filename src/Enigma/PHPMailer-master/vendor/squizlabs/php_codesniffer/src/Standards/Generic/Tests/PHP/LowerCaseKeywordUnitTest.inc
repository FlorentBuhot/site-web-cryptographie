<?php
// A few keywords. Obviously not valid syntax.
class Something extends SomethingElse implements Whatever {}
abstract public private protected function whatever() {}
const array();
foreach ($var as $var) { exit; }
if ($a and $b or $c xor $d) { die; } elseif( $var ) { } else {}
goto a;

class Something extends SomethingElse implements Whatever {}
abstract public private protected function whatever() {}
const array();
foreach ($var as $var) { exit; }
if ($a and $b or $c xor $d) { die; } elseif( $var ) { } else {}
goto a;
$b = function (array $a) {};
const private;
HttpStatus::CONTINUE;
$c = function ($f) {
    yield $f;
    yield from fun();
};
class X extends Y {
    public function m() {
        Parent::m();
    }
    public function n() {
        Self::n();
    }
}
fn ($x) => $x;
$r = match ($x) {
    1 => 1,
    2 => 2,
    default, => 3,
};

__HALT_COMPILER(); // An exception due to phar support.
function
