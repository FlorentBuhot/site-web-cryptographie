<?php
while ($expr) {
}

if () {
}

while (
    $expr1
    && $expr2
) {
}

while (
    $expr1
    && $expr2
) {
}

do {
} while ($expr1
&& $expr2) {
}

if (
    $expr1
    && $expr2
    && $expr3
) {
    while (
        $expr1
        && $expr2
    ) {
    }
    while (
        $expr1
        && $expr2
    ) {
    }
}

while (
    $expr1
    && $expr2


) {
}

while (
    $expr1
    && $expr2
    // comment here
) {
}

for ($i = 0;
     $i < 10;
     $i++;
) {
}

if (
    foo(
        'this
            is a
            string',
        <<<EOD
foobar!
EOD
    )
) {
    return;
}

    if (
        isset($foo) === true
        && $bar > $foo
        /*
         * A multi-line comment.
         */
        && $foo === true
    ) {
        break;
    }

match (
    $expr1 &&
    $expr2 &&
    $expr3
) {
    // structure body
};

match ($expr1 &&
    $expr2 &&
    $expr3) {
    // structure body
};
