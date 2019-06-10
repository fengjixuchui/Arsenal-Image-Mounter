#define PHDSKMNT_MAJOR_VERSION      1
#define PHDSKMNT_MINOR_VERSION      1
#define PHDSKMNT_MINOR_LOW_VERSION  0
#define PHDSKMNT_BUILD_VERSION      39

#define STR_EXPAND(tok) #tok
#define STR(tok) STR_EXPAND(tok)

#define PHDSKMNT_VERSION_ULONG      (((ULONG)PHDSKMNT_MAJOR_VERSION << 24) + ((ULONG)PHDSKMNT_MINOR_VERSION << 16) + ((ULONG)PHDSKMNT_MINOR_LOW_VERSION << 8) + PHDSKMNT_BUILD_VERSION)
#define PHDSKMNT_RC_VERSION_STR     STR(PHDSKMNT_MAJOR_VERSION) "." STR(PHDSKMNT_MINOR_VERSION) "." STR(PHDSKMNT_MINOR_LOW_VERSION) "." STR(PHDSKMNT_BUILD_VERSION)
#define PHDSKMNT_RC_VERSION_FLD     PHDSKMNT_MAJOR_VERSION,PHDSKMNT_MINOR_VERSION,PHDSKMNT_MINOR_LOW_VERSION,PHDSKMNT_BUILD_VERSION
