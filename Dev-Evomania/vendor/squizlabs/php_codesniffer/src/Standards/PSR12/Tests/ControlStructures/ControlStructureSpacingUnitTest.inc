<?php
while ( $expr ) {
}

if (
) {
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

// Ensure the sniff handles too many newlines (not just too few).
for (


    $i = 0;
    $i < 10;
    $i++


) {}

// Ensure the sniff does not remove indentation whitespace when comments are involved.
for (


    // comment.
    $i = 0;
    $i < 10;
    $i++
) {}

// The sniff treats a comment (ie non-whitespace) as content, but only at the
// start / end of the control structure. So the inner-whitespace here is
// intentionally ignored by this sniff. Additionally, the comment is not indented
// by this sniff when fixing.
for (// comment.


    $i = 0;
    $i < 10;
    $i++
) {}