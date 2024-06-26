/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENT = 258,
     FCONST = 259,
     SCONST = 260,
     BCONST = 261,
     XCONST = 262,
     Op = 263,
     ICONST = 264,
     PARAM = 265,
     TYPECAST = 266,
     DOT_DOT = 267,
     COLON_EQUALS = 268,
     EQUALS_GREATER = 269,
     INTEGER_DIVISION = 270,
     POWER_OF = 271,
     LAMBDA_ARROW = 272,
     DOUBLE_ARROW = 273,
     LESS_EQUALS = 274,
     GREATER_EQUALS = 275,
     NOT_EQUALS = 276,
     ABORT_P = 277,
     ABSOLUTE_P = 278,
     ACCESS = 279,
     ACTION = 280,
     ADD_P = 281,
     ADMIN = 282,
     AFTER = 283,
     AGGREGATE = 284,
     ALL = 285,
     ALSO = 286,
     ALTER = 287,
     ALWAYS = 288,
     ANALYSE = 289,
     ANALYZE = 290,
     AND = 291,
     ANTI = 292,
     ANY = 293,
     ARRAY = 294,
     AS = 295,
     ASC_P = 296,
     ASOF = 297,
     ASSERTION = 298,
     ASSIGNMENT = 299,
     ASYMMETRIC = 300,
     AT = 301,
     ATTACH = 302,
     ATTRIBUTE = 303,
     AUTHORIZATION = 304,
     BACKWARD = 305,
     BEFORE = 306,
     BEGIN_P = 307,
     BETWEEN = 308,
     BIGINT = 309,
     BINARY = 310,
     BIT = 311,
     BOOLEAN_P = 312,
     BOTH = 313,
     BY = 314,
     CACHE = 315,
     CALL_P = 316,
     CALLED = 317,
     CASCADE = 318,
     CASCADED = 319,
     CASE = 320,
     CAST = 321,
     CATALOG_P = 322,
     CENTURIES_P = 323,
     CENTURY_P = 324,
     CHAIN = 325,
     CHAR_P = 326,
     CHARACTER = 327,
     CHARACTERISTICS = 328,
     CHECK_P = 329,
     CHECKPOINT = 330,
     CLASS = 331,
     CLOSE = 332,
     CLUSTER = 333,
     COALESCE = 334,
     COLLATE = 335,
     COLLATION = 336,
     COLUMN = 337,
     COLUMNS = 338,
     COMMENT = 339,
     COMMENTS = 340,
     COMMIT = 341,
     COMMITTED = 342,
     COMPRESSION = 343,
     CONCURRENTLY = 344,
     CONFIGURATION = 345,
     CONFLICT = 346,
     CONNECTION = 347,
     CONSTRAINT = 348,
     CONSTRAINTS = 349,
     CONTENT_P = 350,
     CONTINUE_P = 351,
     CONVERSION_P = 352,
     COPY = 353,
     COST = 354,
     CREATE_P = 355,
     CROSS = 356,
     CSV = 357,
     CUBE = 358,
     CURRENT_P = 359,
     CURSOR = 360,
     CYCLE = 361,
     DATA_P = 362,
     DATABASE = 363,
     DAY_P = 364,
     DAYS_P = 365,
     DEALLOCATE = 366,
     DEC = 367,
     DECADE_P = 368,
     DECADES_P = 369,
     DECIMAL_P = 370,
     DECLARE = 371,
     DEFAULT = 372,
     DEFAULTS = 373,
     DEFERRABLE = 374,
     DEFERRED = 375,
     DEFINER = 376,
     DELETE_P = 377,
     DELIMITER = 378,
     DELIMITERS = 379,
     DEPENDS = 380,
     DESC_P = 381,
     DESCRIBE = 382,
     DETACH = 383,
     DICTIONARY = 384,
     DISABLE_P = 385,
     DISCARD = 386,
     DISTINCT = 387,
     DO = 388,
     DOCUMENT_P = 389,
     DOMAIN_P = 390,
     DOUBLE_P = 391,
     DROP = 392,
     EACH = 393,
     ELSE = 394,
     ENABLE_P = 395,
     ENCODING = 396,
     ENCRYPTED = 397,
     END_P = 398,
     ENUM_P = 399,
     ESCAPE = 400,
     EVENT = 401,
     EXCEPT = 402,
     EXCLUDE = 403,
     EXCLUDING = 404,
     EXCLUSIVE = 405,
     EXECUTE = 406,
     EXISTS = 407,
     EXPLAIN = 408,
     EXPORT_P = 409,
     EXPORT_STATE = 410,
     EXTENSION = 411,
     EXTERNAL = 412,
     EXTRACT = 413,
     FALSE_P = 414,
     FAMILY = 415,
     FETCH = 416,
     FILTER = 417,
     FIRST_P = 418,
     FLOAT_P = 419,
     FOLLOWING = 420,
     FOR = 421,
     FORCE = 422,
     FOREIGN = 423,
     FORWARD = 424,
     FREEZE = 425,
     FROM = 426,
     FULL = 427,
     FUNCTION = 428,
     FUNCTIONS = 429,
     GENERATED = 430,
     GLOB = 431,
     GLOBAL = 432,
     GRANT = 433,
     GRANTED = 434,
     GROUP_P = 435,
     GROUPING = 436,
     GROUPING_ID = 437,
     GROUPS = 438,
     HANDLER = 439,
     HAVING = 440,
     HEADER_P = 441,
     HOLD = 442,
     HOUR_P = 443,
     HOURS_P = 444,
     IDENTITY_P = 445,
     IF_P = 446,
     IGNORE_P = 447,
     ILIKE = 448,
     IMMEDIATE = 449,
     IMMUTABLE = 450,
     IMPLICIT_P = 451,
     IMPORT_P = 452,
     IN_P = 453,
     INCLUDE_P = 454,
     INCLUDING = 455,
     INCREMENT = 456,
     INDEX = 457,
     INDEXES = 458,
     INHERIT = 459,
     INHERITS = 460,
     INITIALLY = 461,
     INLINE_P = 462,
     INNER_P = 463,
     INOUT = 464,
     INPUT_P = 465,
     INSENSITIVE = 466,
     INSERT = 467,
     INSTALL = 468,
     INSTEAD = 469,
     INT_P = 470,
     INTEGER = 471,
     INTERSECT = 472,
     INTERVAL = 473,
     INTO = 474,
     INVOKER = 475,
     IS = 476,
     ISNULL = 477,
     ISOLATION = 478,
     JOIN = 479,
     JSON = 480,
     KEY = 481,
     LABEL = 482,
     LANGUAGE = 483,
     LARGE_P = 484,
     LAST_P = 485,
     LATERAL_P = 486,
     LEADING = 487,
     LEAKPROOF = 488,
     LEFT = 489,
     LEVEL = 490,
     LIKE = 491,
     LIMIT = 492,
     LISTEN = 493,
     LOAD = 494,
     LOCAL = 495,
     LOCATION = 496,
     LOCK_P = 497,
     LOCKED = 498,
     LOGGED = 499,
     MACRO = 500,
     MAP = 501,
     MAPPING = 502,
     MATCH = 503,
     MATERIALIZED = 504,
     MAXVALUE = 505,
     METHOD = 506,
     MICROSECOND_P = 507,
     MICROSECONDS_P = 508,
     MILLENNIA_P = 509,
     MILLENNIUM_P = 510,
     MILLISECOND_P = 511,
     MILLISECONDS_P = 512,
     MINUTE_P = 513,
     MINUTES_P = 514,
     MINVALUE = 515,
     MODE = 516,
     MONTH_P = 517,
     MONTHS_P = 518,
     MOVE = 519,
     NAME_P = 520,
     NAMES = 521,
     NATIONAL = 522,
     NATURAL = 523,
     NCHAR = 524,
     NEW = 525,
     NEXT = 526,
     NO = 527,
     NONE = 528,
     NOT = 529,
     NOTHING = 530,
     NOTIFY = 531,
     NOTNULL = 532,
     NOWAIT = 533,
     NULL_P = 534,
     NULLIF = 535,
     NULLS_P = 536,
     NUMERIC = 537,
     OBJECT_P = 538,
     OF = 539,
     OFF = 540,
     OFFSET = 541,
     OIDS = 542,
     OLD = 543,
     ON = 544,
     ONLY = 545,
     OPERATOR = 546,
     OPTION = 547,
     OPTIONS = 548,
     OR = 549,
     ORDER = 550,
     ORDINALITY = 551,
     OTHERS = 552,
     OUT_P = 553,
     OUTER_P = 554,
     OVER = 555,
     OVERLAPS = 556,
     OVERLAY = 557,
     OVERRIDING = 558,
     OWNED = 559,
     OWNER = 560,
     PARALLEL = 561,
     PARSER = 562,
     PARTIAL = 563,
     PARTITION = 564,
     PASSING = 565,
     PASSWORD = 566,
     PERCENT = 567,
     PERSISTENT = 568,
     PIVOT = 569,
     PIVOT_LONGER = 570,
     PIVOT_WIDER = 571,
     PLACING = 572,
     PLANS = 573,
     POLICY = 574,
     POSITION = 575,
     POSITIONAL = 576,
     PRAGMA_P = 577,
     PRECEDING = 578,
     PRECISION = 579,
     PREPARE = 580,
     PREPARED = 581,
     PRESERVE = 582,
     PRIMARY = 583,
     PRIOR = 584,
     PRIVILEGES = 585,
     PROCEDURAL = 586,
     PROCEDURE = 587,
     PROGRAM = 588,
     PUBLICATION = 589,
     QUALIFY = 590,
     QUOTE = 591,
     RANGE = 592,
     READ_P = 593,
     REAL = 594,
     REASSIGN = 595,
     RECHECK = 596,
     RECURSIVE = 597,
     REF = 598,
     REFERENCES = 599,
     REFERENCING = 600,
     REFRESH = 601,
     REINDEX = 602,
     RELATIVE_P = 603,
     RELEASE = 604,
     RENAME = 605,
     REPEATABLE = 606,
     REPLACE = 607,
     REPLICA = 608,
     RESET = 609,
     RESPECT_P = 610,
     RESTART = 611,
     RESTRICT = 612,
     RETURNING = 613,
     RETURNS = 614,
     REVOKE = 615,
     RIGHT = 616,
     ROLE = 617,
     ROLLBACK = 618,
     ROLLUP = 619,
     ROW = 620,
     ROWS = 621,
     RULE = 622,
     SAMPLE = 623,
     SAVEPOINT = 624,
     SCHEMA = 625,
     SCHEMAS = 626,
     SCOPE = 627,
     SCROLL = 628,
     SEARCH = 629,
     SECOND_P = 630,
     SECONDS_P = 631,
     SECRET = 632,
     SECURITY = 633,
     SELECT = 634,
     SEMI = 635,
     SEQUENCE = 636,
     SEQUENCES = 637,
     SERIALIZABLE = 638,
     SERVER = 639,
     SESSION = 640,
     SET = 641,
     SETOF = 642,
     SETS = 643,
     SHARE = 644,
     SHOW = 645,
     SIMILAR = 646,
     SIMPLE = 647,
     SKIP = 648,
     SMALLINT = 649,
     SNAPSHOT = 650,
     SOME = 651,
     SQL_P = 652,
     STABLE = 653,
     STANDALONE_P = 654,
     START = 655,
     STATEMENT = 656,
     STATISTICS = 657,
     STDIN = 658,
     STDOUT = 659,
     STORAGE = 660,
     STORED = 661,
     STRICT_P = 662,
     STRIP_P = 663,
     STRUCT = 664,
     SUBSCRIPTION = 665,
     SUBSTRING = 666,
     SUMMARIZE = 667,
     SYMMETRIC = 668,
     SYSID = 669,
     SYSTEM_P = 670,
     TABLE = 671,
     TABLES = 672,
     TABLESAMPLE = 673,
     TABLESPACE = 674,
     TEMP = 675,
     TEMPLATE = 676,
     TEMPORARY = 677,
     TEXT_P = 678,
     THEN = 679,
     TIES = 680,
     TIME = 681,
     TIMESTAMP = 682,
     TO = 683,
     TRAILING = 684,
     TRANSACTION = 685,
     TRANSFORM = 686,
     TREAT = 687,
     TRIGGER = 688,
     TRIM = 689,
     TRUE_P = 690,
     TRUNCATE = 691,
     TRUSTED = 692,
     TRY_CAST = 693,
     TYPE_P = 694,
     TYPES_P = 695,
     UNBOUNDED = 696,
     UNCOMMITTED = 697,
     UNENCRYPTED = 698,
     UNION = 699,
     UNIQUE = 700,
     UNKNOWN = 701,
     UNLISTEN = 702,
     UNLOGGED = 703,
     UNPIVOT = 704,
     UNTIL = 705,
     UPDATE = 706,
     USE_P = 707,
     USER = 708,
     USING = 709,
     VACUUM = 710,
     VALID = 711,
     VALIDATE = 712,
     VALIDATOR = 713,
     VALUE_P = 714,
     VALUES = 715,
     VARCHAR = 716,
     VARIADIC = 717,
     VARYING = 718,
     VERBOSE = 719,
     VERSION_P = 720,
     VIEW = 721,
     VIEWS = 722,
     VIRTUAL = 723,
     VOLATILE = 724,
     WEEK_P = 725,
     WEEKS_P = 726,
     WHEN = 727,
     WHERE = 728,
     WHITESPACE_P = 729,
     WINDOW = 730,
     WITH = 731,
     WITHIN = 732,
     WITHOUT = 733,
     WORK = 734,
     WRAPPER = 735,
     WRITE_P = 736,
     XML_P = 737,
     XMLATTRIBUTES = 738,
     XMLCONCAT = 739,
     XMLELEMENT = 740,
     XMLEXISTS = 741,
     XMLFOREST = 742,
     XMLNAMESPACES = 743,
     XMLPARSE = 744,
     XMLPI = 745,
     XMLROOT = 746,
     XMLSERIALIZE = 747,
     XMLTABLE = 748,
     YEAR_P = 749,
     YEARS_P = 750,
     YES_P = 751,
     ZONE = 752,
     NOT_LA = 753,
     NULLS_LA = 754,
     WITH_LA = 755,
     POSTFIXOP = 756,
     UMINUS = 757
   };
#endif
/* Tokens.  */
#define IDENT 258
#define FCONST 259
#define SCONST 260
#define BCONST 261
#define XCONST 262
#define Op 263
#define ICONST 264
#define PARAM 265
#define TYPECAST 266
#define DOT_DOT 267
#define COLON_EQUALS 268
#define EQUALS_GREATER 269
#define INTEGER_DIVISION 270
#define POWER_OF 271
#define LAMBDA_ARROW 272
#define DOUBLE_ARROW 273
#define LESS_EQUALS 274
#define GREATER_EQUALS 275
#define NOT_EQUALS 276
#define ABORT_P 277
#define ABSOLUTE_P 278
#define ACCESS 279
#define ACTION 280
#define ADD_P 281
#define ADMIN 282
#define AFTER 283
#define AGGREGATE 284
#define ALL 285
#define ALSO 286
#define ALTER 287
#define ALWAYS 288
#define ANALYSE 289
#define ANALYZE 290
#define AND 291
#define ANTI 292
#define ANY 293
#define ARRAY 294
#define AS 295
#define ASC_P 296
#define ASOF 297
#define ASSERTION 298
#define ASSIGNMENT 299
#define ASYMMETRIC 300
#define AT 301
#define ATTACH 302
#define ATTRIBUTE 303
#define AUTHORIZATION 304
#define BACKWARD 305
#define BEFORE 306
#define BEGIN_P 307
#define BETWEEN 308
#define BIGINT 309
#define BINARY 310
#define BIT 311
#define BOOLEAN_P 312
#define BOTH 313
#define BY 314
#define CACHE 315
#define CALL_P 316
#define CALLED 317
#define CASCADE 318
#define CASCADED 319
#define CASE 320
#define CAST 321
#define CATALOG_P 322
#define CENTURIES_P 323
#define CENTURY_P 324
#define CHAIN 325
#define CHAR_P 326
#define CHARACTER 327
#define CHARACTERISTICS 328
#define CHECK_P 329
#define CHECKPOINT 330
#define CLASS 331
#define CLOSE 332
#define CLUSTER 333
#define COALESCE 334
#define COLLATE 335
#define COLLATION 336
#define COLUMN 337
#define COLUMNS 338
#define COMMENT 339
#define COMMENTS 340
#define COMMIT 341
#define COMMITTED 342
#define COMPRESSION 343
#define CONCURRENTLY 344
#define CONFIGURATION 345
#define CONFLICT 346
#define CONNECTION 347
#define CONSTRAINT 348
#define CONSTRAINTS 349
#define CONTENT_P 350
#define CONTINUE_P 351
#define CONVERSION_P 352
#define COPY 353
#define COST 354
#define CREATE_P 355
#define CROSS 356
#define CSV 357
#define CUBE 358
#define CURRENT_P 359
#define CURSOR 360
#define CYCLE 361
#define DATA_P 362
#define DATABASE 363
#define DAY_P 364
#define DAYS_P 365
#define DEALLOCATE 366
#define DEC 367
#define DECADE_P 368
#define DECADES_P 369
#define DECIMAL_P 370
#define DECLARE 371
#define DEFAULT 372
#define DEFAULTS 373
#define DEFERRABLE 374
#define DEFERRED 375
#define DEFINER 376
#define DELETE_P 377
#define DELIMITER 378
#define DELIMITERS 379
#define DEPENDS 380
#define DESC_P 381
#define DESCRIBE 382
#define DETACH 383
#define DICTIONARY 384
#define DISABLE_P 385
#define DISCARD 386
#define DISTINCT 387
#define DO 388
#define DOCUMENT_P 389
#define DOMAIN_P 390
#define DOUBLE_P 391
#define DROP 392
#define EACH 393
#define ELSE 394
#define ENABLE_P 395
#define ENCODING 396
#define ENCRYPTED 397
#define END_P 398
#define ENUM_P 399
#define ESCAPE 400
#define EVENT 401
#define EXCEPT 402
#define EXCLUDE 403
#define EXCLUDING 404
#define EXCLUSIVE 405
#define EXECUTE 406
#define EXISTS 407
#define EXPLAIN 408
#define EXPORT_P 409
#define EXPORT_STATE 410
#define EXTENSION 411
#define EXTERNAL 412
#define EXTRACT 413
#define FALSE_P 414
#define FAMILY 415
#define FETCH 416
#define FILTER 417
#define FIRST_P 418
#define FLOAT_P 419
#define FOLLOWING 420
#define FOR 421
#define FORCE 422
#define FOREIGN 423
#define FORWARD 424
#define FREEZE 425
#define FROM 426
#define FULL 427
#define FUNCTION 428
#define FUNCTIONS 429
#define GENERATED 430
#define GLOB 431
#define GLOBAL 432
#define GRANT 433
#define GRANTED 434
#define GROUP_P 435
#define GROUPING 436
#define GROUPING_ID 437
#define GROUPS 438
#define HANDLER 439
#define HAVING 440
#define HEADER_P 441
#define HOLD 442
#define HOUR_P 443
#define HOURS_P 444
#define IDENTITY_P 445
#define IF_P 446
#define IGNORE_P 447
#define ILIKE 448
#define IMMEDIATE 449
#define IMMUTABLE 450
#define IMPLICIT_P 451
#define IMPORT_P 452
#define IN_P 453
#define INCLUDE_P 454
#define INCLUDING 455
#define INCREMENT 456
#define INDEX 457
#define INDEXES 458
#define INHERIT 459
#define INHERITS 460
#define INITIALLY 461
#define INLINE_P 462
#define INNER_P 463
#define INOUT 464
#define INPUT_P 465
#define INSENSITIVE 466
#define INSERT 467
#define INSTALL 468
#define INSTEAD 469
#define INT_P 470
#define INTEGER 471
#define INTERSECT 472
#define INTERVAL 473
#define INTO 474
#define INVOKER 475
#define IS 476
#define ISNULL 477
#define ISOLATION 478
#define JOIN 479
#define JSON 480
#define KEY 481
#define LABEL 482
#define LANGUAGE 483
#define LARGE_P 484
#define LAST_P 485
#define LATERAL_P 486
#define LEADING 487
#define LEAKPROOF 488
#define LEFT 489
#define LEVEL 490
#define LIKE 491
#define LIMIT 492
#define LISTEN 493
#define LOAD 494
#define LOCAL 495
#define LOCATION 496
#define LOCK_P 497
#define LOCKED 498
#define LOGGED 499
#define MACRO 500
#define MAP 501
#define MAPPING 502
#define MATCH 503
#define MATERIALIZED 504
#define MAXVALUE 505
#define METHOD 506
#define MICROSECOND_P 507
#define MICROSECONDS_P 508
#define MILLENNIA_P 509
#define MILLENNIUM_P 510
#define MILLISECOND_P 511
#define MILLISECONDS_P 512
#define MINUTE_P 513
#define MINUTES_P 514
#define MINVALUE 515
#define MODE 516
#define MONTH_P 517
#define MONTHS_P 518
#define MOVE 519
#define NAME_P 520
#define NAMES 521
#define NATIONAL 522
#define NATURAL 523
#define NCHAR 524
#define NEW 525
#define NEXT 526
#define NO 527
#define NONE 528
#define NOT 529
#define NOTHING 530
#define NOTIFY 531
#define NOTNULL 532
#define NOWAIT 533
#define NULL_P 534
#define NULLIF 535
#define NULLS_P 536
#define NUMERIC 537
#define OBJECT_P 538
#define OF 539
#define OFF 540
#define OFFSET 541
#define OIDS 542
#define OLD 543
#define ON 544
#define ONLY 545
#define OPERATOR 546
#define OPTION 547
#define OPTIONS 548
#define OR 549
#define ORDER 550
#define ORDINALITY 551
#define OTHERS 552
#define OUT_P 553
#define OUTER_P 554
#define OVER 555
#define OVERLAPS 556
#define OVERLAY 557
#define OVERRIDING 558
#define OWNED 559
#define OWNER 560
#define PARALLEL 561
#define PARSER 562
#define PARTIAL 563
#define PARTITION 564
#define PASSING 565
#define PASSWORD 566
#define PERCENT 567
#define PERSISTENT 568
#define PIVOT 569
#define PIVOT_LONGER 570
#define PIVOT_WIDER 571
#define PLACING 572
#define PLANS 573
#define POLICY 574
#define POSITION 575
#define POSITIONAL 576
#define PRAGMA_P 577
#define PRECEDING 578
#define PRECISION 579
#define PREPARE 580
#define PREPARED 581
#define PRESERVE 582
#define PRIMARY 583
#define PRIOR 584
#define PRIVILEGES 585
#define PROCEDURAL 586
#define PROCEDURE 587
#define PROGRAM 588
#define PUBLICATION 589
#define QUALIFY 590
#define QUOTE 591
#define RANGE 592
#define READ_P 593
#define REAL 594
#define REASSIGN 595
#define RECHECK 596
#define RECURSIVE 597
#define REF 598
#define REFERENCES 599
#define REFERENCING 600
#define REFRESH 601
#define REINDEX 602
#define RELATIVE_P 603
#define RELEASE 604
#define RENAME 605
#define REPEATABLE 606
#define REPLACE 607
#define REPLICA 608
#define RESET 609
#define RESPECT_P 610
#define RESTART 611
#define RESTRICT 612
#define RETURNING 613
#define RETURNS 614
#define REVOKE 615
#define RIGHT 616
#define ROLE 617
#define ROLLBACK 618
#define ROLLUP 619
#define ROW 620
#define ROWS 621
#define RULE 622
#define SAMPLE 623
#define SAVEPOINT 624
#define SCHEMA 625
#define SCHEMAS 626
#define SCOPE 627
#define SCROLL 628
#define SEARCH 629
#define SECOND_P 630
#define SECONDS_P 631
#define SECRET 632
#define SECURITY 633
#define SELECT 634
#define SEMI 635
#define SEQUENCE 636
#define SEQUENCES 637
#define SERIALIZABLE 638
#define SERVER 639
#define SESSION 640
#define SET 641
#define SETOF 642
#define SETS 643
#define SHARE 644
#define SHOW 645
#define SIMILAR 646
#define SIMPLE 647
#define SKIP 648
#define SMALLINT 649
#define SNAPSHOT 650
#define SOME 651
#define SQL_P 652
#define STABLE 653
#define STANDALONE_P 654
#define START 655
#define STATEMENT 656
#define STATISTICS 657
#define STDIN 658
#define STDOUT 659
#define STORAGE 660
#define STORED 661
#define STRICT_P 662
#define STRIP_P 663
#define STRUCT 664
#define SUBSCRIPTION 665
#define SUBSTRING 666
#define SUMMARIZE 667
#define SYMMETRIC 668
#define SYSID 669
#define SYSTEM_P 670
#define TABLE 671
#define TABLES 672
#define TABLESAMPLE 673
#define TABLESPACE 674
#define TEMP 675
#define TEMPLATE 676
#define TEMPORARY 677
#define TEXT_P 678
#define THEN 679
#define TIES 680
#define TIME 681
#define TIMESTAMP 682
#define TO 683
#define TRAILING 684
#define TRANSACTION 685
#define TRANSFORM 686
#define TREAT 687
#define TRIGGER 688
#define TRIM 689
#define TRUE_P 690
#define TRUNCATE 691
#define TRUSTED 692
#define TRY_CAST 693
#define TYPE_P 694
#define TYPES_P 695
#define UNBOUNDED 696
#define UNCOMMITTED 697
#define UNENCRYPTED 698
#define UNION 699
#define UNIQUE 700
#define UNKNOWN 701
#define UNLISTEN 702
#define UNLOGGED 703
#define UNPIVOT 704
#define UNTIL 705
#define UPDATE 706
#define USE_P 707
#define USER 708
#define USING 709
#define VACUUM 710
#define VALID 711
#define VALIDATE 712
#define VALIDATOR 713
#define VALUE_P 714
#define VALUES 715
#define VARCHAR 716
#define VARIADIC 717
#define VARYING 718
#define VERBOSE 719
#define VERSION_P 720
#define VIEW 721
#define VIEWS 722
#define VIRTUAL 723
#define VOLATILE 724
#define WEEK_P 725
#define WEEKS_P 726
#define WHEN 727
#define WHERE 728
#define WHITESPACE_P 729
#define WINDOW 730
#define WITH 731
#define WITHIN 732
#define WITHOUT 733
#define WORK 734
#define WRAPPER 735
#define WRITE_P 736
#define XML_P 737
#define XMLATTRIBUTES 738
#define XMLCONCAT 739
#define XMLELEMENT 740
#define XMLEXISTS 741
#define XMLFOREST 742
#define XMLNAMESPACES 743
#define XMLPARSE 744
#define XMLPI 745
#define XMLROOT 746
#define XMLSERIALIZE 747
#define XMLTABLE 748
#define YEAR_P 749
#define YEARS_P 750
#define YES_P 751
#define ZONE 752
#define NOT_LA 753
#define NULLS_LA 754
#define WITH_LA 755
#define POSTFIXOP 756
#define UMINUS 757




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 14 "third_party/libpg_query/grammar/grammar.y"
{
	core_YYSTYPE		core_yystype;
	/* these fields must match core_YYSTYPE: */
	int					ival;
	char				*str;
	const char			*keyword;
	const char          *conststr;

	char				chr;
	bool				boolean;
	PGJoinType			jtype;
	PGDropBehavior		dbehavior;
	PGOnCommitAction		oncommit;
	PGOnCreateConflict		oncreateconflict;
	PGList				*list;
	PGNode				*node;
	PGValue				*value;
	PGObjectType			objtype;
	PGTypeName			*typnam;
	PGObjectWithArgs		*objwithargs;
	PGDefElem				*defelt;
	PGSortBy				*sortby;
	PGWindowDef			*windef;
	PGJoinExpr			*jexpr;
	PGIndexElem			*ielem;
	PGAlias				*alias;
	PGRangeVar			*range;
	PGIntoClause			*into;
	PGCTEMaterialize			ctematerialize;
	PGWithClause			*with;
	PGInferClause			*infer;
	PGOnConflictClause	*onconflict;
	PGOnConflictActionAlias onconflictshorthand;
	PGAIndices			*aind;
	PGResTarget			*target;
	PGInsertStmt			*istmt;
	PGVariableSetStmt		*vsetstmt;
	PGOverridingKind       override;
	PGSortByDir            sortorder;
	PGSortByNulls          nullorder;
	PGIgnoreNulls          ignorenulls;
	PGConstrType           constr;
	PGLockClauseStrength lockstrength;
	PGLockWaitPolicy lockwaitpolicy;
	PGSubLinkType subquerytype;
	PGViewCheckOption viewcheckoption;
	PGInsertColumnOrder bynameorposition;
}
/* Line 1529 of yacc.c.  */
#line 1102 "third_party/libpg_query/grammar/grammar_out.hpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


