char*	sysimport =
	"package sys\n"
	"type sys._esys_002 {}\n"
	"type sys.any 24\n"
	"type sys._esys_003 *sys.any\n"
	"type sys._osys_409 {_esys_407 sys._esys_003}\n"
	"type sys.uint32 6\n"
	"type sys._isys_411 {_esys_408 sys.uint32}\n"
	"type sys._esys_001 (sys._esys_002 sys._osys_409 sys._isys_411)\n"
	"var !sys.mal sys._esys_001\n"
	"type sys._esys_005 {}\n"
	"type sys._esys_006 {}\n"
	"type sys._esys_007 {}\n"
	"type sys._esys_004 (sys._esys_005 sys._esys_006 sys._esys_007)\n"
	"var !sys.breakpoint sys._esys_004\n"
	"type sys._esys_009 {}\n"
	"type sys._esys_010 {}\n"
	"type sys.int32 5\n"
	"type sys._isys_417 {_esys_416 sys.int32}\n"
	"type sys._esys_008 (sys._esys_009 sys._esys_010 sys._isys_417)\n"
	"var !sys.panicl sys._esys_008\n"
	"type sys._esys_012 {}\n"
	"type sys._esys_013 {}\n"
	"type sys.bool 12\n"
	"type sys._isys_422 {_esys_421 sys.bool}\n"
	"type sys._esys_011 (sys._esys_012 sys._esys_013 sys._isys_422)\n"
	"var !sys.printbool sys._esys_011\n"
	"type sys._esys_015 {}\n"
	"type sys._esys_016 {}\n"
	"type sys.float64 10\n"
	"type sys._isys_427 {_esys_426 sys.float64}\n"
	"type sys._esys_014 (sys._esys_015 sys._esys_016 sys._isys_427)\n"
	"var !sys.printfloat sys._esys_014\n"
	"type sys._esys_018 {}\n"
	"type sys._esys_019 {}\n"
	"type sys.int64 7\n"
	"type sys._isys_432 {_esys_431 sys.int64}\n"
	"type sys._esys_017 (sys._esys_018 sys._esys_019 sys._isys_432)\n"
	"var !sys.printint sys._esys_017\n"
	"type sys._esys_021 {}\n"
	"type sys._esys_022 {}\n"
	"type sys._esys_023 25\n"
	"type sys.string *sys._esys_023\n"
	"type sys._isys_437 {_esys_436 sys.string}\n"
	"type sys._esys_020 (sys._esys_021 sys._esys_022 sys._isys_437)\n"
	"var !sys.printstring sys._esys_020\n"
	"type sys._esys_025 {}\n"
	"type sys._esys_026 {}\n"
	"type sys._esys_027 *sys.any\n"
	"type sys._isys_442 {_esys_441 sys._esys_027}\n"
	"type sys._esys_024 (sys._esys_025 sys._esys_026 sys._isys_442)\n"
	"var !sys.printpointer sys._esys_024\n"
	"type sys._esys_029 {}\n"
	"type sys._osys_449 {_esys_446 sys.string}\n"
	"type sys._isys_451 {_esys_447 sys.string _esys_448 sys.string}\n"
	"type sys._esys_028 (sys._esys_029 sys._osys_449 sys._isys_451)\n"
	"var !sys.catstring sys._esys_028\n"
	"type sys._esys_031 {}\n"
	"type sys._osys_459 {_esys_456 sys.int32}\n"
	"type sys._isys_461 {_esys_457 sys.string _esys_458 sys.string}\n"
	"type sys._esys_030 (sys._esys_031 sys._osys_459 sys._isys_461)\n"
	"var !sys.cmpstring sys._esys_030\n"
	"type sys._esys_033 {}\n"
	"type sys._osys_470 {_esys_466 sys.string}\n"
	"type sys._isys_472 {_esys_467 sys.string _esys_468 sys.int32 _esys_469 sys.int32}\n"
	"type sys._esys_032 (sys._esys_033 sys._osys_470 sys._isys_472)\n"
	"var !sys.slicestring sys._esys_032\n"
	"type sys._esys_035 {}\n"
	"type sys.uint8 2\n"
	"type sys._osys_481 {_esys_478 sys.uint8}\n"
	"type sys._isys_483 {_esys_479 sys.string _esys_480 sys.int32}\n"
	"type sys._esys_034 (sys._esys_035 sys._osys_481 sys._isys_483)\n"
	"var !sys.indexstring sys._esys_034\n"
	"type sys._esys_037 {}\n"
	"type sys._osys_490 {_esys_488 sys.string}\n"
	"type sys._isys_492 {_esys_489 sys.int64}\n"
	"type sys._esys_036 (sys._esys_037 sys._osys_490 sys._isys_492)\n"
	"var !sys.intstring sys._esys_036\n"
	"type sys._esys_039 {}\n"
	"type sys._osys_499 {_esys_496 sys.string}\n"
	"type sys._esys_040 *sys.uint8\n"
	"type sys._isys_501 {_esys_497 sys._esys_040 _esys_498 sys.int32}\n"
	"type sys._esys_038 (sys._esys_039 sys._osys_499 sys._isys_501)\n"
	"var !sys.byteastring sys._esys_038\n"
	"type sys._esys_042 {}\n"
	"type sys._esys_043 <>\n"
	"type sys._osys_510 {_esys_506 sys._esys_043}\n"
	"type sys._esys_044 *sys.uint8\n"
	"type sys._esys_045 *sys.uint8\n"
	"type sys._ssys_517 {}\n"
	"type sys._esys_046 *sys._ssys_517\n"
	"type sys._isys_512 {_esys_507 sys._esys_044 _esys_508 sys._esys_045 _esys_509 sys._esys_046}\n"
	"type sys._esys_041 (sys._esys_042 sys._osys_510 sys._isys_512)\n"
	"var !sys.mkiface sys._esys_041\n"
	"type sys._esys_048 {}\n"
	"type sys._osys_521 {_esys_520 sys.int32}\n"
	"type sys._esys_049 {}\n"
	"type sys._esys_047 (sys._esys_048 sys._osys_521 sys._esys_049)\n"
	"var !sys.argc sys._esys_047\n"
	"type sys._esys_051 {}\n"
	"type sys._osys_525 {_esys_524 sys.int32}\n"
	"type sys._esys_052 {}\n"
	"type sys._esys_050 (sys._esys_051 sys._osys_525 sys._esys_052)\n"
	"var !sys.envc sys._esys_050\n"
	"type sys._esys_054 {}\n"
	"type sys._osys_530 {_esys_528 sys.string}\n"
	"type sys._isys_532 {_esys_529 sys.int32}\n"
	"type sys._esys_053 (sys._esys_054 sys._osys_530 sys._isys_532)\n"
	"var !sys.argv sys._esys_053\n"
	"type sys._esys_056 {}\n"
	"type sys._osys_538 {_esys_536 sys.string}\n"
	"type sys._isys_540 {_esys_537 sys.int32}\n"
	"type sys._esys_055 (sys._esys_056 sys._osys_538 sys._isys_540)\n"
	"var !sys.envv sys._esys_055\n"
	"type sys._esys_058 {}\n"
	"type sys._osys_547 {_esys_544 sys.float64 _esys_545 sys.int32}\n"
	"type sys._isys_549 {_esys_546 sys.float64}\n"
	"type sys._esys_057 (sys._esys_058 sys._osys_547 sys._isys_549)\n"
	"var !sys.frexp sys._esys_057\n"
	"type sys._esys_060 {}\n"
	"type sys._osys_556 {_esys_553 sys.float64}\n"
	"type sys._isys_558 {_esys_554 sys.float64 _esys_555 sys.int32}\n"
	"type sys._esys_059 (sys._esys_060 sys._osys_556 sys._isys_558)\n"
	"var !sys.ldexp sys._esys_059\n"
	"type sys._esys_062 {}\n"
	"type sys._osys_566 {_esys_563 sys.float64 _esys_564 sys.float64}\n"
	"type sys._isys_568 {_esys_565 sys.float64}\n"
	"type sys._esys_061 (sys._esys_062 sys._osys_566 sys._isys_568)\n"
	"var !sys.modf sys._esys_061\n"
	"type sys._esys_064 {}\n"
	"type sys._osys_575 {_esys_572 sys.bool}\n"
	"type sys._isys_577 {_esys_573 sys.float64 _esys_574 sys.int32}\n"
	"type sys._esys_063 (sys._esys_064 sys._osys_575 sys._isys_577)\n"
	"var !sys.isInf sys._esys_063\n"
	"type sys._esys_066 {}\n"
	"type sys._osys_584 {_esys_582 sys.bool}\n"
	"type sys._isys_586 {_esys_583 sys.float64}\n"
	"type sys._esys_065 (sys._esys_066 sys._osys_584 sys._isys_586)\n"
	"var !sys.isNaN sys._esys_065\n"
	"type sys._esys_068 {}\n"
	"type sys._osys_592 {_esys_590 sys.float64}\n"
	"type sys._isys_594 {_esys_591 sys.int32}\n"
	"type sys._esys_067 (sys._esys_068 sys._osys_592 sys._isys_594)\n"
	"var !sys.Inf sys._esys_067\n"
	"type sys._esys_070 {}\n"
	"type sys._osys_599 {_esys_598 sys.float64}\n"
	"type sys._esys_071 {}\n"
	"type sys._esys_069 (sys._esys_070 sys._osys_599 sys._esys_071)\n"
	"var !sys.NaN sys._esys_069\n"
	"type sys._esys_073 {}\n"
	"type sys._esys_075 [sys.any] sys.any\n"
	"type sys._esys_074 *sys._esys_075\n"
	"type sys._osys_602 {hmap sys._esys_074}\n"
	"type sys._isys_604 {keysize sys.uint32 valsize sys.uint32 keyalg sys.uint32 valalg sys.uint32 hint sys.uint32}\n"
	"type sys._esys_072 (sys._esys_073 sys._osys_602 sys._isys_604)\n"
	"var !sys.newmap sys._esys_072\n"
	"type sys._esys_077 {}\n"
	"type sys._osys_613 {val sys.any}\n"
	"type sys._esys_079 [sys.any] sys.any\n"
	"type sys._esys_078 *sys._esys_079\n"
	"type sys._isys_615 {hmap sys._esys_078 key sys.any}\n"
	"type sys._esys_076 (sys._esys_077 sys._osys_613 sys._isys_615)\n"
	"var !sys.mapaccess1 sys._esys_076\n"
	"type sys._esys_081 {}\n"
	"type sys._osys_621 {val sys.any pres sys.bool}\n"
	"type sys._esys_083 [sys.any] sys.any\n"
	"type sys._esys_082 *sys._esys_083\n"
	"type sys._isys_623 {hmap sys._esys_082 key sys.any}\n"
	"type sys._esys_080 (sys._esys_081 sys._osys_621 sys._isys_623)\n"
	"var !sys.mapaccess2 sys._esys_080\n"
	"type sys._esys_085 {}\n"
	"type sys._esys_086 {}\n"
	"type sys._esys_088 [sys.any] sys.any\n"
	"type sys._esys_087 *sys._esys_088\n"
	"type sys._isys_630 {hmap sys._esys_087 key sys.any val sys.any}\n"
	"type sys._esys_084 (sys._esys_085 sys._esys_086 sys._isys_630)\n"
	"var !sys.mapassign1 sys._esys_084\n"
	"type sys._esys_090 {}\n"
	"type sys._esys_091 {}\n"
	"type sys._esys_093 [sys.any] sys.any\n"
	"type sys._esys_092 *sys._esys_093\n"
	"type sys._isys_636 {hmap sys._esys_092 key sys.any val sys.any pres sys.bool}\n"
	"type sys._esys_089 (sys._esys_090 sys._esys_091 sys._isys_636)\n"
	"var !sys.mapassign2 sys._esys_089\n"
	"type sys._esys_095 {}\n"
	"type sys._esys_097 1 sys.any\n"
	"type sys._esys_096 *sys._esys_097\n"
	"type sys._osys_643 {hchan sys._esys_096}\n"
	"type sys._isys_645 {elemsize sys.uint32 elemalg sys.uint32 hint sys.uint32}\n"
	"type sys._esys_094 (sys._esys_095 sys._osys_643 sys._isys_645)\n"
	"var !sys.newchan sys._esys_094\n"
	"type sys._esys_099 {}\n"
	"type sys._osys_652 {elem sys.any}\n"
	"type sys._esys_101 1 sys.any\n"
	"type sys._esys_100 *sys._esys_101\n"
	"type sys._isys_654 {hchan sys._esys_100}\n"
	"type sys._esys_098 (sys._esys_099 sys._osys_652 sys._isys_654)\n"
	"var !sys.chanrecv1 sys._esys_098\n"
	"type sys._esys_103 {}\n"
	"type sys._osys_659 {elem sys.any pres sys.bool}\n"
	"type sys._esys_105 1 sys.any\n"
	"type sys._esys_104 *sys._esys_105\n"
	"type sys._isys_661 {hchan sys._esys_104}\n"
	"type sys._esys_102 (sys._esys_103 sys._osys_659 sys._isys_661)\n"
	"var !sys.chanrecv2 sys._esys_102\n"
	"type sys._esys_107 {}\n"
	"type sys._osys_667 {pres sys.bool}\n"
	"type sys._esys_109 1 sys.any\n"
	"type sys._esys_108 *sys._esys_109\n"
	"type sys._esys_110 *sys.any\n"
	"type sys._isys_669 {hchan sys._esys_108 elem sys._esys_110}\n"
	"type sys._esys_106 (sys._esys_107 sys._osys_667 sys._isys_669)\n"
	"var !sys.chanrecv3 sys._esys_106\n"
	"type sys._esys_112 {}\n"
	"type sys._esys_113 {}\n"
	"type sys._esys_115 1 sys.any\n"
	"type sys._esys_114 *sys._esys_115\n"
	"type sys._isys_675 {hchan sys._esys_114 elem sys.any}\n"
	"type sys._esys_111 (sys._esys_112 sys._esys_113 sys._isys_675)\n"
	"var !sys.chansend1 sys._esys_111\n"
	"type sys._esys_117 {}\n"
	"type sys._osys_680 {pres sys.bool}\n"
	"type sys._esys_119 1 sys.any\n"
	"type sys._esys_118 *sys._esys_119\n"
	"type sys._isys_682 {hchan sys._esys_118 elem sys.any}\n"
	"type sys._esys_116 (sys._esys_117 sys._osys_680 sys._isys_682)\n"
	"var !sys.chansend2 sys._esys_116\n"
	"type sys._esys_121 {}\n"
	"type sys._esys_122 *sys.uint8\n"
	"type sys._osys_688 {sel sys._esys_122}\n"
	"type sys._isys_690 {size sys.uint32}\n"
	"type sys._esys_120 (sys._esys_121 sys._osys_688 sys._isys_690)\n"
	"var !sys.newselect sys._esys_120\n"
	"type sys._esys_124 {}\n"
	"type sys._osys_695 {selected sys.bool}\n"
	"type sys._esys_125 *sys.uint8\n"
	"type sys._esys_127 1 sys.any\n"
	"type sys._esys_126 *sys._esys_127\n"
	"type sys._isys_697 {sel sys._esys_125 hchan sys._esys_126 elem sys.any}\n"
	"type sys._esys_123 (sys._esys_124 sys._osys_695 sys._isys_697)\n"
	"var !sys.selectsend sys._esys_123\n"
	"type sys._esys_129 {}\n"
	"type sys._osys_704 {selected sys.bool}\n"
	"type sys._esys_130 *sys.uint8\n"
	"type sys._esys_132 1 sys.any\n"
	"type sys._esys_131 *sys._esys_132\n"
	"type sys._esys_133 *sys.any\n"
	"type sys._isys_706 {sel sys._esys_130 hchan sys._esys_131 elem sys._esys_133}\n"
	"type sys._esys_128 (sys._esys_129 sys._osys_704 sys._isys_706)\n"
	"var !sys.selectrecv sys._esys_128\n"
	"type sys._esys_135 {}\n"
	"type sys._esys_136 {}\n"
	"type sys._esys_137 *sys.uint8\n"
	"type sys._isys_713 {sel sys._esys_137}\n"
	"type sys._esys_134 (sys._esys_135 sys._esys_136 sys._isys_713)\n"
	"var !sys.selectgo sys._esys_134\n"
	"type sys._esys_139 {}\n"
	"type sys._esys_141 [] sys.any\n"
	"type sys._esys_140 *sys._esys_141\n"
	"type sys._osys_717 {ary sys._esys_140}\n"
	"type sys._isys_719 {nel sys.uint32 cap sys.uint32 width sys.uint32}\n"
	"type sys._esys_138 (sys._esys_139 sys._osys_717 sys._isys_719)\n"
	"var !sys.newarray sys._esys_138\n"
	"type sys._esys_143 {}\n"
	"type sys._esys_145 [] sys.any\n"
	"type sys._esys_144 *sys._esys_145\n"
	"type sys._osys_726 {ary sys._esys_144}\n"
	"type sys._esys_147 [] sys.any\n"
	"type sys._esys_146 *sys._esys_147\n"
	"type sys._isys_728 {old sys._esys_146 lb sys.uint32 hb sys.uint32 width sys.uint32}\n"
	"type sys._esys_142 (sys._esys_143 sys._osys_726 sys._isys_728)\n"
	"var !sys.arraysliced sys._esys_142\n"
	"type sys._esys_149 {}\n"
	"type sys._esys_151 [] sys.any\n"
	"type sys._esys_150 *sys._esys_151\n"
	"type sys._osys_736 {ary sys._esys_150}\n"
	"type sys._esys_152 *sys.any\n"
	"type sys._isys_738 {old sys._esys_152 nel sys.uint32 lb sys.uint32 hb sys.uint32 width sys.uint32}\n"
	"type sys._esys_148 (sys._esys_149 sys._osys_736 sys._isys_738)\n"
	"var !sys.arrayslices sys._esys_148\n"
	"type sys._esys_154 {}\n"
	"type sys._esys_156 [] sys.any\n"
	"type sys._esys_155 *sys._esys_156\n"
	"type sys._osys_747 {ary sys._esys_155}\n"
	"type sys._esys_157 *sys.any\n"
	"type sys._isys_749 {old sys._esys_157 nel sys.uint32}\n"
	"type sys._esys_153 (sys._esys_154 sys._osys_747 sys._isys_749)\n"
	"var !sys.arrays2d sys._esys_153\n"
	"type sys._esys_159 {}\n"
	"type sys._esys_160 {}\n"
	"type sys._esys_161 {}\n"
	"type sys._esys_158 (sys._esys_159 sys._esys_160 sys._esys_161)\n"
	"var !sys.gosched sys._esys_158\n"
	"type sys._esys_163 {}\n"
	"type sys._esys_164 {}\n"
	"type sys._esys_165 {}\n"
	"type sys._esys_162 (sys._esys_163 sys._esys_164 sys._esys_165)\n"
	"var !sys.goexit sys._esys_162\n"
	"type sys._esys_167 {}\n"
	"type sys._osys_760 {_esys_757 sys.string _esys_758 sys.bool}\n"
	"type sys._isys_762 {_esys_759 sys.string}\n"
	"type sys._esys_166 (sys._esys_167 sys._osys_760 sys._isys_762)\n"
	"var !sys.readfile sys._esys_166\n"
	"type sys._esys_169 {}\n"
	"type sys._osys_769 {_esys_766 sys.bool}\n"
	"type sys._isys_771 {_esys_767 sys.string _esys_768 sys.string}\n"
	"type sys._esys_168 (sys._esys_169 sys._osys_769 sys._isys_771)\n"
	"var !sys.writefile sys._esys_168\n"
	"type sys._esys_171 {}\n"
	"type sys._osys_781 {_esys_776 sys.int32 _esys_777 sys.int32}\n"
	"type sys._esys_172 *sys.uint8\n"
	"type sys._isys_783 {_esys_778 sys._esys_172 _esys_779 sys.int32 _esys_780 sys.int32}\n"
	"type sys._esys_170 (sys._esys_171 sys._osys_781 sys._isys_783)\n"
	"var !sys.bytestorune sys._esys_170\n"
	"type sys._esys_174 {}\n"
	"type sys._osys_794 {_esys_789 sys.int32 _esys_790 sys.int32}\n"
	"type sys._isys_796 {_esys_791 sys.string _esys_792 sys.int32 _esys_793 sys.int32}\n"
	"type sys._esys_173 (sys._esys_174 sys._osys_794 sys._isys_796)\n"
	"var !sys.stringtorune sys._esys_173\n"
	"type sys._esys_176 {}\n"
	"type sys._esys_177 {}\n"
	"type sys._isys_802 {ms sys.int64}\n"
	"type sys._esys_175 (sys._esys_176 sys._esys_177 sys._isys_802)\n"
	"var !sys.sleep sys._esys_175\n"
	"type sys._esys_179 {}\n"
	"type sys._esys_180 {}\n"
	"type sys._isys_807 {_esys_806 sys.int32}\n"
	"type sys._esys_178 (sys._esys_179 sys._esys_180 sys._isys_807)\n"
	"var !sys.exit sys._esys_178\n"
	"type sys._esys_182 {}\n"
	"type sys._esys_183 {}\n"
	"type sys._esys_184 {}\n"
	"type sys._esys_181 (sys._esys_182 sys._esys_183 sys._esys_184)\n"
	"))\n"
;
