<?php

namespace bug;

use someNS\A;
use someNS\B;

class Bug
{
    public function __construct()
    {
        $b = 1;
        $a = function () use ($b) {
            echo $b;
        };
    }
}
