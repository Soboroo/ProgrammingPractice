define pp
#        echo '

        set $i = 0
        while (1 == 1)
                set $c = (char)(($arg0)[$i++])
                if ($c == '\0')
                        loop_break
                end
                printf "%c", $c
        end

        printf "%c", '\n'
end

document pp
pp <wstr>
print multi byte which is utf8, unicode
end