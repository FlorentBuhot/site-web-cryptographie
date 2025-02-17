<?php
$foo = (int)$bar;
$foo = (integer)$bar;
$foo = (bool)$bar;
$foo = (boolean)$bar;
$foo = (float)$bar;
$foo = (double)$bar;
$foo = (real)$bar;
$foo = (string)$bar;
$foo = (array)$bar;
$foo = (object)$bar;
$foo = (unset)$bar;

$foo = (int)$bar;
$foo = (integer)$bar;
$foo = (bool)$bar;
$foo = (string)$bar;
$foo = ( array )$bar;

function foo(int $a, string $b, bool $c, array $d, Foo\Bar $e): int
{
}

function foo(int $a, string $b, bool $c, array $d, Foo\Bar $e): Foo\Bar
{
}

function foo(int $a, Bar $b, bool $c, array $d, Foo\Bar $e): Bar
{
}

function foo(callable $a, callable $b, self $c, iterable $d, iterable $e): float
{
}

$foo = function (int $a, bool $b) {
};
$foo = function (int $a, callable $b): int {
};
$foo = function (bool $a, float $b) use ($foo): int {
};
$foo = function (Foo $a, Foo\Bar $b) use ($foo): \Foo\Bar {
};
$foo = function (bool $a, callable $b) use ($foo): Bar {
};

class Testing
{
    public function TestThis(SELF $a, object $b, Parent $c): void
    {
    }
}

function foo(
    ?float    $a,
    ?string   $b,
    ?iterable $c,
    ?object   $d,
    ?Foo\Bar  $e
): ?Foo\Bar
{
}

$foo = function (?int $a, ?callable $b): ?int {
};

$var = (binary)$string;
$var = (binary)$string;

function unionParamTypesA(bool|array| /* nullability operator not allowed in union */ null $var)
{
}

function unionParamTypesB(\Package\ClassName|int|\Package\Other_Class|false $var)
{
}

function unionReturnTypesA($var): bool|array| /* nullability operator not allowed in union */ null
{
}

function unionReturnTypesB($var): \Package\ClassName|int|\Package\Other_Class|false
{
}

class TypedProperties
{
    public int $int;
    public Self $self;
    public float $float;
    public object $object;
    public iterable|false|null $unionTypeA;
    public string|array|false $unionTypeD;
    protected ClassName $class;
    protected PaRenT $parent;
    protected ?string $string;
    protected Mixed $mixed;
    protected SELF|Parent /* comment */|\Fully\Qualified\ClassName|UnQualifiedClass $unionTypeB;
    private ?bool $bool;
    private array $array;
    private iterable $iterable;
    private ClassName|/*comment*/
    float|string|false $unionTypeC;
}

class ConstructorPropertyPromotionWithTypes
{
    public function __construct(protected float|int $x, public ?string &$y = 'test', private mixed $z)
    {
    }
}

class ConstructorPropertyPromotionAndNormalParams
{
    public function __construct(public int $promotedProp, ?int $normalArg)
    {
    }
}
