#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D1870
// Address: 0x2d1870 - 0x2d1d10
void sub_002D1870_0x2d1870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1870_0x2d1870");
#endif

    switch (ctx->pc) {
        case 0x2d1870u: goto label_2d1870;
        case 0x2d1874u: goto label_2d1874;
        case 0x2d1878u: goto label_2d1878;
        case 0x2d187cu: goto label_2d187c;
        case 0x2d1880u: goto label_2d1880;
        case 0x2d1884u: goto label_2d1884;
        case 0x2d1888u: goto label_2d1888;
        case 0x2d188cu: goto label_2d188c;
        case 0x2d1890u: goto label_2d1890;
        case 0x2d1894u: goto label_2d1894;
        case 0x2d1898u: goto label_2d1898;
        case 0x2d189cu: goto label_2d189c;
        case 0x2d18a0u: goto label_2d18a0;
        case 0x2d18a4u: goto label_2d18a4;
        case 0x2d18a8u: goto label_2d18a8;
        case 0x2d18acu: goto label_2d18ac;
        case 0x2d18b0u: goto label_2d18b0;
        case 0x2d18b4u: goto label_2d18b4;
        case 0x2d18b8u: goto label_2d18b8;
        case 0x2d18bcu: goto label_2d18bc;
        case 0x2d18c0u: goto label_2d18c0;
        case 0x2d18c4u: goto label_2d18c4;
        case 0x2d18c8u: goto label_2d18c8;
        case 0x2d18ccu: goto label_2d18cc;
        case 0x2d18d0u: goto label_2d18d0;
        case 0x2d18d4u: goto label_2d18d4;
        case 0x2d18d8u: goto label_2d18d8;
        case 0x2d18dcu: goto label_2d18dc;
        case 0x2d18e0u: goto label_2d18e0;
        case 0x2d18e4u: goto label_2d18e4;
        case 0x2d18e8u: goto label_2d18e8;
        case 0x2d18ecu: goto label_2d18ec;
        case 0x2d18f0u: goto label_2d18f0;
        case 0x2d18f4u: goto label_2d18f4;
        case 0x2d18f8u: goto label_2d18f8;
        case 0x2d18fcu: goto label_2d18fc;
        case 0x2d1900u: goto label_2d1900;
        case 0x2d1904u: goto label_2d1904;
        case 0x2d1908u: goto label_2d1908;
        case 0x2d190cu: goto label_2d190c;
        case 0x2d1910u: goto label_2d1910;
        case 0x2d1914u: goto label_2d1914;
        case 0x2d1918u: goto label_2d1918;
        case 0x2d191cu: goto label_2d191c;
        case 0x2d1920u: goto label_2d1920;
        case 0x2d1924u: goto label_2d1924;
        case 0x2d1928u: goto label_2d1928;
        case 0x2d192cu: goto label_2d192c;
        case 0x2d1930u: goto label_2d1930;
        case 0x2d1934u: goto label_2d1934;
        case 0x2d1938u: goto label_2d1938;
        case 0x2d193cu: goto label_2d193c;
        case 0x2d1940u: goto label_2d1940;
        case 0x2d1944u: goto label_2d1944;
        case 0x2d1948u: goto label_2d1948;
        case 0x2d194cu: goto label_2d194c;
        case 0x2d1950u: goto label_2d1950;
        case 0x2d1954u: goto label_2d1954;
        case 0x2d1958u: goto label_2d1958;
        case 0x2d195cu: goto label_2d195c;
        case 0x2d1960u: goto label_2d1960;
        case 0x2d1964u: goto label_2d1964;
        case 0x2d1968u: goto label_2d1968;
        case 0x2d196cu: goto label_2d196c;
        case 0x2d1970u: goto label_2d1970;
        case 0x2d1974u: goto label_2d1974;
        case 0x2d1978u: goto label_2d1978;
        case 0x2d197cu: goto label_2d197c;
        case 0x2d1980u: goto label_2d1980;
        case 0x2d1984u: goto label_2d1984;
        case 0x2d1988u: goto label_2d1988;
        case 0x2d198cu: goto label_2d198c;
        case 0x2d1990u: goto label_2d1990;
        case 0x2d1994u: goto label_2d1994;
        case 0x2d1998u: goto label_2d1998;
        case 0x2d199cu: goto label_2d199c;
        case 0x2d19a0u: goto label_2d19a0;
        case 0x2d19a4u: goto label_2d19a4;
        case 0x2d19a8u: goto label_2d19a8;
        case 0x2d19acu: goto label_2d19ac;
        case 0x2d19b0u: goto label_2d19b0;
        case 0x2d19b4u: goto label_2d19b4;
        case 0x2d19b8u: goto label_2d19b8;
        case 0x2d19bcu: goto label_2d19bc;
        case 0x2d19c0u: goto label_2d19c0;
        case 0x2d19c4u: goto label_2d19c4;
        case 0x2d19c8u: goto label_2d19c8;
        case 0x2d19ccu: goto label_2d19cc;
        case 0x2d19d0u: goto label_2d19d0;
        case 0x2d19d4u: goto label_2d19d4;
        case 0x2d19d8u: goto label_2d19d8;
        case 0x2d19dcu: goto label_2d19dc;
        case 0x2d19e0u: goto label_2d19e0;
        case 0x2d19e4u: goto label_2d19e4;
        case 0x2d19e8u: goto label_2d19e8;
        case 0x2d19ecu: goto label_2d19ec;
        case 0x2d19f0u: goto label_2d19f0;
        case 0x2d19f4u: goto label_2d19f4;
        case 0x2d19f8u: goto label_2d19f8;
        case 0x2d19fcu: goto label_2d19fc;
        case 0x2d1a00u: goto label_2d1a00;
        case 0x2d1a04u: goto label_2d1a04;
        case 0x2d1a08u: goto label_2d1a08;
        case 0x2d1a0cu: goto label_2d1a0c;
        case 0x2d1a10u: goto label_2d1a10;
        case 0x2d1a14u: goto label_2d1a14;
        case 0x2d1a18u: goto label_2d1a18;
        case 0x2d1a1cu: goto label_2d1a1c;
        case 0x2d1a20u: goto label_2d1a20;
        case 0x2d1a24u: goto label_2d1a24;
        case 0x2d1a28u: goto label_2d1a28;
        case 0x2d1a2cu: goto label_2d1a2c;
        case 0x2d1a30u: goto label_2d1a30;
        case 0x2d1a34u: goto label_2d1a34;
        case 0x2d1a38u: goto label_2d1a38;
        case 0x2d1a3cu: goto label_2d1a3c;
        case 0x2d1a40u: goto label_2d1a40;
        case 0x2d1a44u: goto label_2d1a44;
        case 0x2d1a48u: goto label_2d1a48;
        case 0x2d1a4cu: goto label_2d1a4c;
        case 0x2d1a50u: goto label_2d1a50;
        case 0x2d1a54u: goto label_2d1a54;
        case 0x2d1a58u: goto label_2d1a58;
        case 0x2d1a5cu: goto label_2d1a5c;
        case 0x2d1a60u: goto label_2d1a60;
        case 0x2d1a64u: goto label_2d1a64;
        case 0x2d1a68u: goto label_2d1a68;
        case 0x2d1a6cu: goto label_2d1a6c;
        case 0x2d1a70u: goto label_2d1a70;
        case 0x2d1a74u: goto label_2d1a74;
        case 0x2d1a78u: goto label_2d1a78;
        case 0x2d1a7cu: goto label_2d1a7c;
        case 0x2d1a80u: goto label_2d1a80;
        case 0x2d1a84u: goto label_2d1a84;
        case 0x2d1a88u: goto label_2d1a88;
        case 0x2d1a8cu: goto label_2d1a8c;
        case 0x2d1a90u: goto label_2d1a90;
        case 0x2d1a94u: goto label_2d1a94;
        case 0x2d1a98u: goto label_2d1a98;
        case 0x2d1a9cu: goto label_2d1a9c;
        case 0x2d1aa0u: goto label_2d1aa0;
        case 0x2d1aa4u: goto label_2d1aa4;
        case 0x2d1aa8u: goto label_2d1aa8;
        case 0x2d1aacu: goto label_2d1aac;
        case 0x2d1ab0u: goto label_2d1ab0;
        case 0x2d1ab4u: goto label_2d1ab4;
        case 0x2d1ab8u: goto label_2d1ab8;
        case 0x2d1abcu: goto label_2d1abc;
        case 0x2d1ac0u: goto label_2d1ac0;
        case 0x2d1ac4u: goto label_2d1ac4;
        case 0x2d1ac8u: goto label_2d1ac8;
        case 0x2d1accu: goto label_2d1acc;
        case 0x2d1ad0u: goto label_2d1ad0;
        case 0x2d1ad4u: goto label_2d1ad4;
        case 0x2d1ad8u: goto label_2d1ad8;
        case 0x2d1adcu: goto label_2d1adc;
        case 0x2d1ae0u: goto label_2d1ae0;
        case 0x2d1ae4u: goto label_2d1ae4;
        case 0x2d1ae8u: goto label_2d1ae8;
        case 0x2d1aecu: goto label_2d1aec;
        case 0x2d1af0u: goto label_2d1af0;
        case 0x2d1af4u: goto label_2d1af4;
        case 0x2d1af8u: goto label_2d1af8;
        case 0x2d1afcu: goto label_2d1afc;
        case 0x2d1b00u: goto label_2d1b00;
        case 0x2d1b04u: goto label_2d1b04;
        case 0x2d1b08u: goto label_2d1b08;
        case 0x2d1b0cu: goto label_2d1b0c;
        case 0x2d1b10u: goto label_2d1b10;
        case 0x2d1b14u: goto label_2d1b14;
        case 0x2d1b18u: goto label_2d1b18;
        case 0x2d1b1cu: goto label_2d1b1c;
        case 0x2d1b20u: goto label_2d1b20;
        case 0x2d1b24u: goto label_2d1b24;
        case 0x2d1b28u: goto label_2d1b28;
        case 0x2d1b2cu: goto label_2d1b2c;
        case 0x2d1b30u: goto label_2d1b30;
        case 0x2d1b34u: goto label_2d1b34;
        case 0x2d1b38u: goto label_2d1b38;
        case 0x2d1b3cu: goto label_2d1b3c;
        case 0x2d1b40u: goto label_2d1b40;
        case 0x2d1b44u: goto label_2d1b44;
        case 0x2d1b48u: goto label_2d1b48;
        case 0x2d1b4cu: goto label_2d1b4c;
        case 0x2d1b50u: goto label_2d1b50;
        case 0x2d1b54u: goto label_2d1b54;
        case 0x2d1b58u: goto label_2d1b58;
        case 0x2d1b5cu: goto label_2d1b5c;
        case 0x2d1b60u: goto label_2d1b60;
        case 0x2d1b64u: goto label_2d1b64;
        case 0x2d1b68u: goto label_2d1b68;
        case 0x2d1b6cu: goto label_2d1b6c;
        case 0x2d1b70u: goto label_2d1b70;
        case 0x2d1b74u: goto label_2d1b74;
        case 0x2d1b78u: goto label_2d1b78;
        case 0x2d1b7cu: goto label_2d1b7c;
        case 0x2d1b80u: goto label_2d1b80;
        case 0x2d1b84u: goto label_2d1b84;
        case 0x2d1b88u: goto label_2d1b88;
        case 0x2d1b8cu: goto label_2d1b8c;
        case 0x2d1b90u: goto label_2d1b90;
        case 0x2d1b94u: goto label_2d1b94;
        case 0x2d1b98u: goto label_2d1b98;
        case 0x2d1b9cu: goto label_2d1b9c;
        case 0x2d1ba0u: goto label_2d1ba0;
        case 0x2d1ba4u: goto label_2d1ba4;
        case 0x2d1ba8u: goto label_2d1ba8;
        case 0x2d1bacu: goto label_2d1bac;
        case 0x2d1bb0u: goto label_2d1bb0;
        case 0x2d1bb4u: goto label_2d1bb4;
        case 0x2d1bb8u: goto label_2d1bb8;
        case 0x2d1bbcu: goto label_2d1bbc;
        case 0x2d1bc0u: goto label_2d1bc0;
        case 0x2d1bc4u: goto label_2d1bc4;
        case 0x2d1bc8u: goto label_2d1bc8;
        case 0x2d1bccu: goto label_2d1bcc;
        case 0x2d1bd0u: goto label_2d1bd0;
        case 0x2d1bd4u: goto label_2d1bd4;
        case 0x2d1bd8u: goto label_2d1bd8;
        case 0x2d1bdcu: goto label_2d1bdc;
        case 0x2d1be0u: goto label_2d1be0;
        case 0x2d1be4u: goto label_2d1be4;
        case 0x2d1be8u: goto label_2d1be8;
        case 0x2d1becu: goto label_2d1bec;
        case 0x2d1bf0u: goto label_2d1bf0;
        case 0x2d1bf4u: goto label_2d1bf4;
        case 0x2d1bf8u: goto label_2d1bf8;
        case 0x2d1bfcu: goto label_2d1bfc;
        case 0x2d1c00u: goto label_2d1c00;
        case 0x2d1c04u: goto label_2d1c04;
        case 0x2d1c08u: goto label_2d1c08;
        case 0x2d1c0cu: goto label_2d1c0c;
        case 0x2d1c10u: goto label_2d1c10;
        case 0x2d1c14u: goto label_2d1c14;
        case 0x2d1c18u: goto label_2d1c18;
        case 0x2d1c1cu: goto label_2d1c1c;
        case 0x2d1c20u: goto label_2d1c20;
        case 0x2d1c24u: goto label_2d1c24;
        case 0x2d1c28u: goto label_2d1c28;
        case 0x2d1c2cu: goto label_2d1c2c;
        case 0x2d1c30u: goto label_2d1c30;
        case 0x2d1c34u: goto label_2d1c34;
        case 0x2d1c38u: goto label_2d1c38;
        case 0x2d1c3cu: goto label_2d1c3c;
        case 0x2d1c40u: goto label_2d1c40;
        case 0x2d1c44u: goto label_2d1c44;
        case 0x2d1c48u: goto label_2d1c48;
        case 0x2d1c4cu: goto label_2d1c4c;
        case 0x2d1c50u: goto label_2d1c50;
        case 0x2d1c54u: goto label_2d1c54;
        case 0x2d1c58u: goto label_2d1c58;
        case 0x2d1c5cu: goto label_2d1c5c;
        case 0x2d1c60u: goto label_2d1c60;
        case 0x2d1c64u: goto label_2d1c64;
        case 0x2d1c68u: goto label_2d1c68;
        case 0x2d1c6cu: goto label_2d1c6c;
        case 0x2d1c70u: goto label_2d1c70;
        case 0x2d1c74u: goto label_2d1c74;
        case 0x2d1c78u: goto label_2d1c78;
        case 0x2d1c7cu: goto label_2d1c7c;
        case 0x2d1c80u: goto label_2d1c80;
        case 0x2d1c84u: goto label_2d1c84;
        case 0x2d1c88u: goto label_2d1c88;
        case 0x2d1c8cu: goto label_2d1c8c;
        case 0x2d1c90u: goto label_2d1c90;
        case 0x2d1c94u: goto label_2d1c94;
        case 0x2d1c98u: goto label_2d1c98;
        case 0x2d1c9cu: goto label_2d1c9c;
        case 0x2d1ca0u: goto label_2d1ca0;
        case 0x2d1ca4u: goto label_2d1ca4;
        case 0x2d1ca8u: goto label_2d1ca8;
        case 0x2d1cacu: goto label_2d1cac;
        case 0x2d1cb0u: goto label_2d1cb0;
        case 0x2d1cb4u: goto label_2d1cb4;
        case 0x2d1cb8u: goto label_2d1cb8;
        case 0x2d1cbcu: goto label_2d1cbc;
        case 0x2d1cc0u: goto label_2d1cc0;
        case 0x2d1cc4u: goto label_2d1cc4;
        case 0x2d1cc8u: goto label_2d1cc8;
        case 0x2d1cccu: goto label_2d1ccc;
        case 0x2d1cd0u: goto label_2d1cd0;
        case 0x2d1cd4u: goto label_2d1cd4;
        case 0x2d1cd8u: goto label_2d1cd8;
        case 0x2d1cdcu: goto label_2d1cdc;
        case 0x2d1ce0u: goto label_2d1ce0;
        case 0x2d1ce4u: goto label_2d1ce4;
        case 0x2d1ce8u: goto label_2d1ce8;
        case 0x2d1cecu: goto label_2d1cec;
        case 0x2d1cf0u: goto label_2d1cf0;
        case 0x2d1cf4u: goto label_2d1cf4;
        case 0x2d1cf8u: goto label_2d1cf8;
        case 0x2d1cfcu: goto label_2d1cfc;
        case 0x2d1d00u: goto label_2d1d00;
        case 0x2d1d04u: goto label_2d1d04;
        case 0x2d1d08u: goto label_2d1d08;
        case 0x2d1d0cu: goto label_2d1d0c;
        default: break;
    }

    ctx->pc = 0x2d1870u;

label_2d1870:
    // 0x2d1870: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d1870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2d1874:
    // 0x2d1874: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2d1874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2d1878:
    // 0x2d1878: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2d1878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2d187c:
    // 0x2d187c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d187cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2d1880:
    // 0x2d1880: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d1880u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d1884:
    // 0x2d1884: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2d1884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_2d1888:
    // 0x2d1888: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d1888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d188c:
    // 0x2d188c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2d188cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d1890:
    // 0x2d1890: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2d1890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2d1894:
    // 0x2d1894: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2d1894u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2d1898:
    // 0x2d1898: 0x8e110040  lw          $s1, 0x40($s0)
    ctx->pc = 0x2d1898u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_2d189c:
    // 0x2d189c: 0x34a50900  ori         $a1, $a1, 0x900
    ctx->pc = 0x2d189cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
label_2d18a0:
    // 0x2d18a0: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x2d18a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_2d18a4:
    // 0x2d18a4: 0x8e260078  lw          $a2, 0x78($s1)
    ctx->pc = 0x2d18a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_2d18a8:
    // 0x2d18a8: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x2d18a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2d18ac:
    // 0x2d18ac: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2d18acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2d18b0:
    // 0x2d18b0: 0x8e27007c  lw          $a3, 0x7C($s1)
    ctx->pc = 0x2d18b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
label_2d18b4:
    // 0x2d18b4: 0x24920001  addiu       $s2, $a0, 0x1
    ctx->pc = 0x2d18b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2d18b8:
    // 0x2d18b8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2d18b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2d18bc:
    // 0x2d18bc: 0x24630026  addiu       $v1, $v1, 0x26
    ctx->pc = 0x2d18bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 38));
label_2d18c0:
    // 0x2d18c0: 0x122040  sll         $a0, $s2, 1
    ctx->pc = 0x2d18c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_2d18c4:
    // 0x2d18c4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2d18c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2d18c8:
    // 0x2d18c8: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2d18c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_2d18cc:
    // 0x2d18cc: 0x40f809  jalr        $v0
label_2d18d0:
    if (ctx->pc == 0x2D18D0u) {
        ctx->pc = 0x2D18D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D18CCu;
        // 0x2d18d0: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D18D4u;
        goto label_2d18d4;
    }
    ctx->pc = 0x2D18CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D18D4u);
        ctx->pc = 0x2D18D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D18CCu;
        // 0x2d18d0: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D18CCu, 0x2D18D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D18D4u;
label_2d18d4:
    // 0x2d18d4: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x2d18d4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d18d8:
    // 0x2d18d8: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x2d18d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_2d18dc:
    // 0x2d18dc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2d18dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_2d18e0:
    // 0x2d18e0: 0x248426b0  addiu       $a0, $a0, 0x26B0
    ctx->pc = 0x2d18e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9904));
label_2d18e4:
    // 0x2d18e4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2d18e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_2d18e8:
    // 0x2d18e8: 0x240f0026  addiu       $t7, $zero, 0x26
    ctx->pc = 0x2d18e8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_2d18ec:
    // 0x2d18ec: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x2d18ecu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
label_2d18f0:
    // 0x2d18f0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x2d18f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2d18f4:
    // 0x2d18f4: 0xada30004  sw          $v1, 0x4($t5)
    ctx->pc = 0x2d18f4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 3));
label_2d18f8:
    // 0x2d18f8: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x2d18f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_2d18fc:
    // 0x2d18fc: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x2d18fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
label_2d1900:
    // 0x2d1900: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2d1900u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2d1904:
    // 0x2d1904: 0xada20008  sw          $v0, 0x8($t5)
    ctx->pc = 0x2d1904u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 2));
label_2d1908:
    // 0x2d1908: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x2d1908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2d190c:
    // 0x2d190c: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x2d190cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2d1910:
    // 0x2d1910: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2d1910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2d1914:
    // 0x2d1914: 0xb1a20013  sdl         $v0, 0x13($t5)
    ctx->pc = 0x2d1914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d1918:
    // 0x2d1918: 0xb5a2000c  sdr         $v0, 0xC($t5)
    ctx->pc = 0x2d1918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d191c:
    // 0x2d191c: 0xada30014  sw          $v1, 0x14($t5)
    ctx->pc = 0x2d191cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 20), GPR_U32(ctx, 3));
label_2d1920:
    // 0x2d1920: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x2d1920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2d1924:
    // 0x2d1924: 0x96240036  lhu         $a0, 0x36($s1)
    ctx->pc = 0x2d1924u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 54)));
label_2d1928:
    // 0x2d1928: 0xada30018  sw          $v1, 0x18($t5)
    ctx->pc = 0x2d1928u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 24), GPR_U32(ctx, 3));
label_2d192c:
    // 0x2d192c: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x2d192cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2d1930:
    // 0x2d1930: 0xada2001c  sw          $v0, 0x1C($t5)
    ctx->pc = 0x2d1930u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 28), GPR_U32(ctx, 2));
label_2d1934:
    // 0x2d1934: 0x86230030  lh          $v1, 0x30($s1)
    ctx->pc = 0x2d1934u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
label_2d1938:
    // 0x2d1938: 0xada30020  sw          $v1, 0x20($t5)
    ctx->pc = 0x2d1938u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 32), GPR_U32(ctx, 3));
label_2d193c:
    // 0x2d193c: 0x86220032  lh          $v0, 0x32($s1)
    ctx->pc = 0x2d193cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
label_2d1940:
    // 0x2d1940: 0xada20024  sw          $v0, 0x24($t5)
    ctx->pc = 0x2d1940u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 36), GPR_U32(ctx, 2));
label_2d1944:
    // 0x2d1944: 0x86230034  lh          $v1, 0x34($s1)
    ctx->pc = 0x2d1944u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 52)));
label_2d1948:
    // 0x2d1948: 0xada4002c  sw          $a0, 0x2C($t5)
    ctx->pc = 0x2d1948u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 44), GPR_U32(ctx, 4));
label_2d194c:
    // 0x2d194c: 0xada30028  sw          $v1, 0x28($t5)
    ctx->pc = 0x2d194cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 40), GPR_U32(ctx, 3));
label_2d1950:
    // 0x2d1950: 0x6a220043  ldl         $v0, 0x43($s1)
    ctx->pc = 0x2d1950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2d1954:
    // 0x2d1954: 0x6e22003c  ldr         $v0, 0x3C($s1)
    ctx->pc = 0x2d1954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2d1958:
    // 0x2d1958: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x2d1958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_2d195c:
    // 0x2d195c: 0xb1a20037  sdl         $v0, 0x37($t5)
    ctx->pc = 0x2d195cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d1960:
    // 0x2d1960: 0xb5a20030  sdr         $v0, 0x30($t5)
    ctx->pc = 0x2d1960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d1964:
    // 0x2d1964: 0xada30038  sw          $v1, 0x38($t5)
    ctx->pc = 0x2d1964u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 56), GPR_U32(ctx, 3));
label_2d1968:
    // 0x2d1968: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x2d1968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_2d196c:
    // 0x2d196c: 0xada2003c  sw          $v0, 0x3C($t5)
    ctx->pc = 0x2d196cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 60), GPR_U32(ctx, 2));
label_2d1970:
    // 0x2d1970: 0x6a220057  ldl         $v0, 0x57($s1)
    ctx->pc = 0x2d1970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2d1974:
    // 0x2d1974: 0x6e220050  ldr         $v0, 0x50($s1)
    ctx->pc = 0x2d1974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2d1978:
    // 0x2d1978: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x2d1978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_2d197c:
    // 0x2d197c: 0xb1a20047  sdl         $v0, 0x47($t5)
    ctx->pc = 0x2d197cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d1980:
    // 0x2d1980: 0xb5a20040  sdr         $v0, 0x40($t5)
    ctx->pc = 0x2d1980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d1984:
    // 0x2d1984: 0xada30048  sw          $v1, 0x48($t5)
    ctx->pc = 0x2d1984u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 72), GPR_U32(ctx, 3));
label_2d1988:
    // 0x2d1988: 0x6a220067  ldl         $v0, 0x67($s1)
    ctx->pc = 0x2d1988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2d198c:
    // 0x2d198c: 0x6e220060  ldr         $v0, 0x60($s1)
    ctx->pc = 0x2d198cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2d1990:
    // 0x2d1990: 0x8e230068  lw          $v1, 0x68($s1)
    ctx->pc = 0x2d1990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2d1994:
    // 0x2d1994: 0xb1a20053  sdl         $v0, 0x53($t5)
    ctx->pc = 0x2d1994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d1998:
    // 0x2d1998: 0xb5a2004c  sdr         $v0, 0x4C($t5)
    ctx->pc = 0x2d1998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d199c:
    // 0x2d199c: 0xada30054  sw          $v1, 0x54($t5)
    ctx->pc = 0x2d199cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 84), GPR_U32(ctx, 3));
label_2d19a0:
    // 0x2d19a0: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x2d19a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_2d19a4:
    // 0x2d19a4: 0xada20058  sw          $v0, 0x58($t5)
    ctx->pc = 0x2d19a4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 88), GPR_U32(ctx, 2));
label_2d19a8:
    // 0x2d19a8: 0x8e230074  lw          $v1, 0x74($s1)
    ctx->pc = 0x2d19a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2d19ac:
    // 0x2d19ac: 0xada3005c  sw          $v1, 0x5C($t5)
    ctx->pc = 0x2d19acu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 92), GPR_U32(ctx, 3));
label_2d19b0:
    // 0x2d19b0: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x2d19b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_2d19b4:
    // 0x2d19b4: 0xada20060  sw          $v0, 0x60($t5)
    ctx->pc = 0x2d19b4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 96), GPR_U32(ctx, 2));
label_2d19b8:
    // 0x2d19b8: 0x8e23007c  lw          $v1, 0x7C($s1)
    ctx->pc = 0x2d19b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
label_2d19bc:
    // 0x2d19bc: 0xada30064  sw          $v1, 0x64($t5)
    ctx->pc = 0x2d19bcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 100), GPR_U32(ctx, 3));
label_2d19c0:
    // 0x2d19c0: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x2d19c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2d19c4:
    // 0x2d19c4: 0xada20068  sw          $v0, 0x68($t5)
    ctx->pc = 0x2d19c4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 104), GPR_U32(ctx, 2));
label_2d19c8:
    // 0x2d19c8: 0x8e230084  lw          $v1, 0x84($s1)
    ctx->pc = 0x2d19c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_2d19cc:
    // 0x2d19cc: 0xada3006c  sw          $v1, 0x6C($t5)
    ctx->pc = 0x2d19ccu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 108), GPR_U32(ctx, 3));
label_2d19d0:
    // 0x2d19d0: 0x6a22008f  ldl         $v0, 0x8F($s1)
    ctx->pc = 0x2d19d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2d19d4:
    // 0x2d19d4: 0x6e220088  ldr         $v0, 0x88($s1)
    ctx->pc = 0x2d19d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2d19d8:
    // 0x2d19d8: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x2d19d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_2d19dc:
    // 0x2d19dc: 0xb1a20077  sdl         $v0, 0x77($t5)
    ctx->pc = 0x2d19dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d19e0:
    // 0x2d19e0: 0xb5a20070  sdr         $v0, 0x70($t5)
    ctx->pc = 0x2d19e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d19e4:
    // 0x2d19e4: 0xada30078  sw          $v1, 0x78($t5)
    ctx->pc = 0x2d19e4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 120), GPR_U32(ctx, 3));
label_2d19e8:
    // 0x2d19e8: 0x6a22009b  ldl         $v0, 0x9B($s1)
    ctx->pc = 0x2d19e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 155); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2d19ec:
    // 0x2d19ec: 0x6e220094  ldr         $v0, 0x94($s1)
    ctx->pc = 0x2d19ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 148); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2d19f0:
    // 0x2d19f0: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x2d19f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_2d19f4:
    // 0x2d19f4: 0xb1a20083  sdl         $v0, 0x83($t5)
    ctx->pc = 0x2d19f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 131); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d19f8:
    // 0x2d19f8: 0xb5a2007c  sdr         $v0, 0x7C($t5)
    ctx->pc = 0x2d19f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 124); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d19fc:
    // 0x2d19fc: 0xada30084  sw          $v1, 0x84($t5)
    ctx->pc = 0x2d19fcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 132), GPR_U32(ctx, 3));
label_2d1a00:
    // 0x2d1a00: 0x6a2200a7  ldl         $v0, 0xA7($s1)
    ctx->pc = 0x2d1a00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2d1a04:
    // 0x2d1a04: 0x6e2200a0  ldr         $v0, 0xA0($s1)
    ctx->pc = 0x2d1a04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2d1a08:
    // 0x2d1a08: 0x6a2300af  ldl         $v1, 0xAF($s1)
    ctx->pc = 0x2d1a08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2d1a0c:
    // 0x2d1a0c: 0x6e2300a8  ldr         $v1, 0xA8($s1)
    ctx->pc = 0x2d1a0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2d1a10:
    // 0x2d1a10: 0xb1a2008f  sdl         $v0, 0x8F($t5)
    ctx->pc = 0x2d1a10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d1a14:
    // 0x2d1a14: 0xb5a20088  sdr         $v0, 0x88($t5)
    ctx->pc = 0x2d1a14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d1a18:
    // 0x2d1a18: 0xb1a30097  sdl         $v1, 0x97($t5)
    ctx->pc = 0x2d1a18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d1a1c:
    // 0x2d1a1c: 0xb5a30090  sdr         $v1, 0x90($t5)
    ctx->pc = 0x2d1a1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d1a20:
    // 0x2d1a20: 0x12400031  beqz        $s2, . + 4 + (0x31 << 2)
label_2d1a24:
    if (ctx->pc == 0x2D1A24u) {
        ctx->pc = 0x2D1A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1A20u;
        // 0x2d1a24: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1A28u;
        goto label_2d1a28;
    }
    ctx->pc = 0x2D1A20u;
    {
        const bool branch_taken_0x2d1a20 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1A20u;
        // 0x2d1a24: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1a20) {
            ctx->pc = 0x2D1AE8u;
            goto label_2d1ae8;
        }
    }
    ctx->pc = 0x2D1A28u;
label_2d1a28:
    // 0x2d1a28: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x2d1a28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2d1a2c:
    // 0x2d1a2c: 0x25a60098  addiu       $a2, $t5, 0x98
    ctx->pc = 0x2d1a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), 152));
label_2d1a30:
    // 0x2d1a30: 0x32440003  andi        $a0, $s2, 0x3
    ctx->pc = 0x2d1a30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
label_2d1a34:
    // 0x2d1a34: 0x1a400014  blez        $s2, . + 4 + (0x14 << 2)
label_2d1a38:
    if (ctx->pc == 0x2D1A38u) {
        ctx->pc = 0x2D1A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1A34u;
        // 0x2d1a38: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1A3Cu;
        goto label_2d1a3c;
    }
    ctx->pc = 0x2D1A34u;
    {
        const bool branch_taken_0x2d1a34 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x2D1A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1A34u;
        // 0x2d1a38: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1a34) {
            ctx->pc = 0x2D1A88u;
            goto label_2d1a88;
        }
    }
    ctx->pc = 0x2D1A3Cu;
label_2d1a3c:
    // 0x2d1a3c: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
label_2d1a40:
    if (ctx->pc == 0x2D1A40u) {
        ctx->pc = 0x2D1A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1A3Cu;
        // 0x2d1a40: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1A44u;
        goto label_2d1a44;
    }
    ctx->pc = 0x2D1A3Cu;
    {
        const bool branch_taken_0x2d1a3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1A3Cu;
        // 0x2d1a40: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1a3c) {
            ctx->pc = 0x2D1AA8u;
            goto label_2d1aa8;
        }
    }
    ctx->pc = 0x2D1A44u;
label_2d1a44:
    // 0x2d1a44: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_2d1a48:
    if (ctx->pc == 0x2D1A48u) {
        ctx->pc = 0x2D1A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1A44u;
        // 0x2d1a48: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1A4Cu;
        goto label_2d1a4c;
    }
    ctx->pc = 0x2D1A44u;
    {
        const bool branch_taken_0x2d1a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1a44) {
            ctx->pc = 0x2D1A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1A44u;
            // 0x2d1a48: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1A8Cu;
            goto label_2d1a8c;
        }
    }
    ctx->pc = 0x2D1A4Cu;
label_2d1a4c:
    // 0x2d1a4c: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x2d1a4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_2d1a50:
    // 0x2d1a50: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_2d1a54:
    if (ctx->pc == 0x2D1A54u) {
        ctx->pc = 0x2D1A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1A50u;
        // 0x2d1a54: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1A58u;
        goto label_2d1a58;
    }
    ctx->pc = 0x2D1A50u;
    {
        const bool branch_taken_0x2d1a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1a50) {
            ctx->pc = 0x2D1A54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1A50u;
            // 0x2d1a54: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1A74u;
            goto label_2d1a74;
        }
    }
    ctx->pc = 0x2D1A58u;
label_2d1a58:
    // 0x2d1a58: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2d1a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2d1a5c:
    // 0x2d1a5c: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x2d1a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_2d1a60:
    // 0x2d1a60: 0x25a6009c  addiu       $a2, $t5, 0x9C
    ctx->pc = 0x2d1a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), 156));
label_2d1a64:
    // 0x2d1a64: 0x240f0027  addiu       $t7, $zero, 0x27
    ctx->pc = 0x2d1a64u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_2d1a68:
    // 0x2d1a68: 0xada20098  sw          $v0, 0x98($t5)
    ctx->pc = 0x2d1a68u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 152), GPR_U32(ctx, 2));
label_2d1a6c:
    // 0x2d1a6c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2d1a6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d1a70:
    // 0x2d1a70: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d1a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2d1a74:
    // 0x2d1a74: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x2d1a74u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_2d1a78:
    // 0x2d1a78: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2d1a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_2d1a7c:
    // 0x2d1a7c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2d1a7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_2d1a80:
    // 0x2d1a80: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2d1a80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_2d1a84:
    // 0x2d1a84: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2d1a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_2d1a88:
    // 0x2d1a88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d1a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2d1a8c:
    // 0x2d1a8c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2d1a8cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_2d1a90:
    // 0x2d1a90: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x2d1a90u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_2d1a94:
    // 0x2d1a94: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2d1a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_2d1a98:
    // 0x2d1a98: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2d1a98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_2d1a9c:
    // 0x2d1a9c: 0x152382b  sltu        $a3, $t2, $s2
    ctx->pc = 0x2d1a9cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_2d1aa0:
    // 0x2d1aa0: 0x10e00011  beqz        $a3, . + 4 + (0x11 << 2)
label_2d1aa4:
    if (ctx->pc == 0x2D1AA4u) {
        ctx->pc = 0x2D1AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1AA0u;
        // 0x2d1aa4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1AA8u;
        goto label_2d1aa8;
    }
    ctx->pc = 0x2D1AA0u;
    {
        const bool branch_taken_0x2d1aa0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1AA0u;
        // 0x2d1aa4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1aa0) {
            ctx->pc = 0x2D1AE8u;
            goto label_2d1ae8;
        }
    }
    ctx->pc = 0x2D1AA8u;
label_2d1aa8:
    // 0x2d1aa8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2d1aa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2d1aac:
    // 0x2d1aac: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2d1aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2d1ab0:
    // 0x2d1ab0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2d1ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2d1ab4:
    // 0x2d1ab4: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x2d1ab4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_2d1ab8:
    // 0x2d1ab8: 0x25ef0004  addiu       $t7, $t7, 0x4
    ctx->pc = 0x2d1ab8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
label_2d1abc:
    // 0x2d1abc: 0x152382b  sltu        $a3, $t2, $s2
    ctx->pc = 0x2d1abcu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_2d1ac0:
    // 0x2d1ac0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2d1ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2d1ac4:
    // 0x2d1ac4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2d1ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2d1ac8:
    // 0x2d1ac8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2d1ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_2d1acc:
    // 0x2d1acc: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2d1accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2d1ad0:
    // 0x2d1ad0: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2d1ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_2d1ad4:
    // 0x2d1ad4: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x2d1ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_2d1ad8:
    // 0x2d1ad8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x2d1ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_2d1adc:
    // 0x2d1adc: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x2d1adcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_2d1ae0:
    // 0x2d1ae0: 0x14e0fff3  bnez        $a3, . + 4 + (-0xD << 2)
label_2d1ae4:
    if (ctx->pc == 0x2D1AE4u) {
        ctx->pc = 0x2D1AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1AE0u;
        // 0x2d1ae4: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1AE8u;
        goto label_2d1ae8;
    }
    ctx->pc = 0x2D1AE0u;
    {
        const bool branch_taken_0x2d1ae0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1AE0u;
        // 0x2d1ae4: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1ae0) {
            ctx->pc = 0x2D1AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d1ab0;
        }
    }
    ctx->pc = 0x2D1AE8u;
label_2d1ae8:
    // 0x2d1ae8: 0x1240004b  beqz        $s2, . + 4 + (0x4B << 2)
label_2d1aec:
    if (ctx->pc == 0x2D1AECu) {
        ctx->pc = 0x2D1AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1AE8u;
        // 0x2d1aec: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1AF0u;
        goto label_2d1af0;
    }
    ctx->pc = 0x2D1AE8u;
    {
        const bool branch_taken_0x2d1ae8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1AE8u;
        // 0x2d1aec: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1ae8) {
            ctx->pc = 0x2D1C18u;
            goto label_2d1c18;
        }
    }
    ctx->pc = 0x2D1AF0u;
label_2d1af0:
    // 0x2d1af0: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x2d1af0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2d1af4:
    // 0x2d1af4: 0xf1080  sll         $v0, $t7, 2
    ctx->pc = 0x2d1af4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
label_2d1af8:
    // 0x2d1af8: 0x4d3821  addu        $a3, $v0, $t5
    ctx->pc = 0x2d1af8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
label_2d1afc:
    // 0x2d1afc: 0x3c0caaaa  lui         $t4, 0xAAAA
    ctx->pc = 0x2d1afcu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)43690 << 16));
label_2d1b00:
    // 0x2d1b00: 0x8e2e0020  lw          $t6, 0x20($s1)
    ctx->pc = 0x2d1b00u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2d1b04:
    // 0x2d1b04: 0x358caaab  ori         $t4, $t4, 0xAAAB
    ctx->pc = 0x2d1b04u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)43691);
label_2d1b08:
    // 0x2d1b08: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2d1b08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2d1b0c:
    // 0x2d1b0c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2d1b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2d1b10:
    // 0x2d1b10: 0x1a40001a  blez        $s2, . + 4 + (0x1A << 2)
label_2d1b14:
    if (ctx->pc == 0x2D1B14u) {
        ctx->pc = 0x2D1B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1B10u;
        // 0x2d1b14: 0x32440003  andi        $a0, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1B18u;
        goto label_2d1b18;
    }
    ctx->pc = 0x2D1B10u;
    {
        const bool branch_taken_0x2d1b10 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x2D1B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1B10u;
        // 0x2d1b14: 0x32440003  andi        $a0, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1b10) {
            ctx->pc = 0x2D1B7Cu;
            goto label_2d1b7c;
        }
    }
    ctx->pc = 0x2D1B18u;
label_2d1b18:
    // 0x2d1b18: 0x10800023  beqz        $a0, . + 4 + (0x23 << 2)
label_2d1b1c:
    if (ctx->pc == 0x2D1B1Cu) {
        ctx->pc = 0x2D1B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1B18u;
        // 0x2d1b1c: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1B20u;
        goto label_2d1b20;
    }
    ctx->pc = 0x2D1B18u;
    {
        const bool branch_taken_0x2d1b18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1B18u;
        // 0x2d1b1c: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1b18) {
            ctx->pc = 0x2D1BA8u;
            goto label_2d1ba8;
        }
    }
    ctx->pc = 0x2D1B20u;
label_2d1b20:
    // 0x2d1b20: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_2d1b24:
    if (ctx->pc == 0x2D1B24u) {
        ctx->pc = 0x2D1B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1B20u;
        // 0x2d1b24: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1B28u;
        goto label_2d1b28;
    }
    ctx->pc = 0x2D1B20u;
    {
        const bool branch_taken_0x2d1b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1b20) {
            ctx->pc = 0x2D1B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1B20u;
            // 0x2d1b24: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1B80u;
            goto label_2d1b80;
        }
    }
    ctx->pc = 0x2D1B28u;
label_2d1b28:
    // 0x2d1b28: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x2d1b28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_2d1b2c:
    // 0x2d1b2c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_2d1b30:
    if (ctx->pc == 0x2D1B30u) {
        ctx->pc = 0x2D1B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1B2Cu;
        // 0x2d1b30: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1B34u;
        goto label_2d1b34;
    }
    ctx->pc = 0x2D1B2Cu;
    {
        const bool branch_taken_0x2d1b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1b2c) {
            ctx->pc = 0x2D1B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1B2Cu;
            // 0x2d1b30: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1B5Cu;
            goto label_2d1b5c;
        }
    }
    ctx->pc = 0x2D1B34u;
label_2d1b34:
    // 0x2d1b34: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2d1b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2d1b38:
    // 0x2d1b38: 0x24e50004  addiu       $a1, $a3, 0x4
    ctx->pc = 0x2d1b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_2d1b3c:
    // 0x2d1b3c: 0x24c30004  addiu       $v1, $a2, 0x4
    ctx->pc = 0x2d1b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_2d1b40:
    // 0x2d1b40: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x2d1b40u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_2d1b44:
    // 0x2d1b44: 0x4e1023  subu        $v0, $v0, $t6
    ctx->pc = 0x2d1b44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
label_2d1b48:
    // 0x2d1b48: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2d1b48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d1b4c:
    // 0x2d1b4c: 0x4c1018  mult        $v0, $v0, $t4
    ctx->pc = 0x2d1b4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2d1b50:
    // 0x2d1b50: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2d1b50u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_2d1b54:
    // 0x2d1b54: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x2d1b54u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_2d1b58:
    // 0x2d1b58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d1b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2d1b5c:
    // 0x2d1b5c: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x2d1b5cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_2d1b60:
    // 0x2d1b60: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2d1b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_2d1b64:
    // 0x2d1b64: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2d1b64u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_2d1b68:
    // 0x2d1b68: 0x4e1023  subu        $v0, $v0, $t6
    ctx->pc = 0x2d1b68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
label_2d1b6c:
    // 0x2d1b6c: 0x4c1018  mult        $v0, $v0, $t4
    ctx->pc = 0x2d1b6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2d1b70:
    // 0x2d1b70: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2d1b70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_2d1b74:
    // 0x2d1b74: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2d1b74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_2d1b78:
    // 0x2d1b78: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2d1b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_2d1b7c:
    // 0x2d1b7c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d1b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2d1b80:
    // 0x2d1b80: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2d1b80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_2d1b84:
    // 0x2d1b84: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x2d1b84u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_2d1b88:
    // 0x2d1b88: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2d1b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_2d1b8c:
    // 0x2d1b8c: 0x4e1023  subu        $v0, $v0, $t6
    ctx->pc = 0x2d1b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
label_2d1b90:
    // 0x2d1b90: 0x152382b  sltu        $a3, $t2, $s2
    ctx->pc = 0x2d1b90u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_2d1b94:
    // 0x2d1b94: 0x4c1018  mult        $v0, $v0, $t4
    ctx->pc = 0x2d1b94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2d1b98:
    // 0x2d1b98: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2d1b98u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_2d1b9c:
    // 0x2d1b9c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2d1b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_2d1ba0:
    // 0x2d1ba0: 0x10e0001d  beqz        $a3, . + 4 + (0x1D << 2)
label_2d1ba4:
    if (ctx->pc == 0x2D1BA4u) {
        ctx->pc = 0x2D1BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1BA0u;
        // 0x2d1ba4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1BA8u;
        goto label_2d1ba8;
    }
    ctx->pc = 0x2D1BA0u;
    {
        const bool branch_taken_0x2d1ba0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1BA0u;
        // 0x2d1ba4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1ba0) {
            ctx->pc = 0x2D1C18u;
            goto label_2d1c18;
        }
    }
    ctx->pc = 0x2D1BA8u;
label_2d1ba8:
    // 0x2d1ba8: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x2d1ba8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2d1bac:
    // 0x2d1bac: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2d1bacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d1bb0:
    // 0x2d1bb0: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2d1bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_2d1bb4:
    // 0x2d1bb4: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x2d1bb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_2d1bb8:
    // 0x2d1bb8: 0x8d050004  lw          $a1, 0x4($t0)
    ctx->pc = 0x2d1bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_2d1bbc:
    // 0x2d1bbc: 0x25ef0004  addiu       $t7, $t7, 0x4
    ctx->pc = 0x2d1bbcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
label_2d1bc0:
    // 0x2d1bc0: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x2d1bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_2d1bc4:
    // 0x2d1bc4: 0x6e1823  subu        $v1, $v1, $t6
    ctx->pc = 0x2d1bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
label_2d1bc8:
    // 0x2d1bc8: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x2d1bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_2d1bcc:
    // 0x2d1bcc: 0xae2823  subu        $a1, $a1, $t6
    ctx->pc = 0x2d1bccu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
label_2d1bd0:
    // 0x2d1bd0: 0x8e2023  subu        $a0, $a0, $t6
    ctx->pc = 0x2d1bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
label_2d1bd4:
    // 0x2d1bd4: 0x6c1818  mult        $v1, $v1, $t4
    ctx->pc = 0x2d1bd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2d1bd8:
    // 0x2d1bd8: 0x4e1023  subu        $v0, $v0, $t6
    ctx->pc = 0x2d1bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
label_2d1bdc:
    // 0x2d1bdc: 0xac2818  mult        $a1, $a1, $t4
    ctx->pc = 0x2d1bdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_2d1be0:
    // 0x2d1be0: 0x8c2018  mult        $a0, $a0, $t4
    ctx->pc = 0x2d1be0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2d1be4:
    // 0x2d1be4: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x2d1be4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_2d1be8:
    // 0x2d1be8: 0x4c1018  mult        $v0, $v0, $t4
    ctx->pc = 0x2d1be8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2d1bec:
    // 0x2d1bec: 0x152382b  sltu        $a3, $t2, $s2
    ctx->pc = 0x2d1becu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_2d1bf0:
    // 0x2d1bf0: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x2d1bf0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_2d1bf4:
    // 0x2d1bf4: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x2d1bf4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
label_2d1bf8:
    // 0x2d1bf8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x2d1bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_2d1bfc:
    // 0x2d1bfc: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x2d1bfcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
label_2d1c00:
    // 0x2d1c00: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x2d1c00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
label_2d1c04:
    // 0x2d1c04: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2d1c04u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_2d1c08:
    // 0x2d1c08: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x2d1c08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_2d1c0c:
    // 0x2d1c0c: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x2d1c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_2d1c10:
    // 0x2d1c10: 0x14e0ffe7  bnez        $a3, . + 4 + (-0x19 << 2)
label_2d1c14:
    if (ctx->pc == 0x2D1C14u) {
        ctx->pc = 0x2D1C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1C10u;
        // 0x2d1c14: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1C18u;
        goto label_2d1c18;
    }
    ctx->pc = 0x2D1C10u;
    {
        const bool branch_taken_0x2d1c10 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1C10u;
        // 0x2d1c14: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1c10) {
            ctx->pc = 0x2D1BB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d1bb0;
        }
    }
    ctx->pc = 0x2D1C18u;
label_2d1c18:
    // 0x2d1c18: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x2d1c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_2d1c1c:
    // 0x2d1c1c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_2d1c20:
    if (ctx->pc == 0x2D1C20u) {
        ctx->pc = 0x2D1C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1C1Cu;
        // 0x2d1c20: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1C24u;
        goto label_2d1c24;
    }
    ctx->pc = 0x2D1C1Cu;
    {
        const bool branch_taken_0x2d1c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1C1Cu;
        // 0x2d1c20: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1c1c) {
            ctx->pc = 0x2D1C94u;
            goto label_2d1c94;
        }
    }
    ctx->pc = 0x2D1C24u;
label_2d1c24:
    // 0x2d1c24: 0xf1080  sll         $v0, $t7, 2
    ctx->pc = 0x2d1c24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
label_2d1c28:
    // 0x2d1c28: 0x8e270024  lw          $a3, 0x24($s1)
    ctx->pc = 0x2d1c28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2d1c2c:
    // 0x2d1c2c: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x2d1c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2d1c30:
    // 0x2d1c30: 0x4d2821  addu        $a1, $v0, $t5
    ctx->pc = 0x2d1c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
label_2d1c34:
    // 0x2d1c34: 0x0  nop
    ctx->pc = 0x2d1c34u;
    // NOP
label_2d1c38:
    // 0x2d1c38: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x2d1c38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_2d1c3c:
    // 0x2d1c3c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2d1c3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_2d1c40:
    // 0x2d1c40: 0x94c40006  lhu         $a0, 0x6($a2)
    ctx->pc = 0x2d1c40u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_2d1c44:
    // 0x2d1c44: 0x25ef0005  addiu       $t7, $t7, 0x5
    ctx->pc = 0x2d1c44u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 5));
label_2d1c48:
    // 0x2d1c48: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2d1c48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_2d1c4c:
    // 0x2d1c4c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2d1c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_2d1c50:
    // 0x2d1c50: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x2d1c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2d1c54:
    // 0x2d1c54: 0x84c20002  lh          $v0, 0x2($a2)
    ctx->pc = 0x2d1c54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_2d1c58:
    // 0x2d1c58: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x2d1c58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2d1c5c:
    // 0x2d1c5c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2d1c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_2d1c60:
    // 0x2d1c60: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x2d1c60u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_2d1c64:
    // 0x2d1c64: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2d1c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_2d1c68:
    // 0x2d1c68: 0x84c20004  lh          $v0, 0x4($a2)
    ctx->pc = 0x2d1c68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
label_2d1c6c:
    // 0x2d1c6c: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x2d1c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
label_2d1c70:
    // 0x2d1c70: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2d1c70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_2d1c74:
    // 0x2d1c74: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2d1c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_2d1c78:
    // 0x2d1c78: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x2d1c78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_2d1c7c:
    // 0x2d1c7c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2d1c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_2d1c80:
    // 0x2d1c80: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2d1c80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_2d1c84:
    // 0x2d1c84: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x2d1c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_2d1c88:
    // 0x2d1c88: 0x142102b  sltu        $v0, $t2, $v0
    ctx->pc = 0x2d1c88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2d1c8c:
    // 0x2d1c8c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_2d1c90:
    if (ctx->pc == 0x2D1C90u) {
        ctx->pc = 0x2D1C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1C8Cu;
        // 0x2d1c90: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1C94u;
        goto label_2d1c94;
    }
    ctx->pc = 0x2D1C8Cu;
    {
        const bool branch_taken_0x2d1c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1C8Cu;
        // 0x2d1c90: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1c8c) {
            ctx->pc = 0x2D1C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d1c38;
        }
    }
    ctx->pc = 0x2D1C94u;
label_2d1c94:
    // 0x2d1c94: 0x8e22007c  lw          $v0, 0x7C($s1)
    ctx->pc = 0x2d1c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
label_2d1c98:
    // 0x2d1c98: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_2d1c9c:
    if (ctx->pc == 0x2D1C9Cu) {
        ctx->pc = 0x2D1C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1C98u;
        // 0x2d1c9c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1CA0u;
        goto label_2d1ca0;
    }
    ctx->pc = 0x2D1C98u;
    {
        const bool branch_taken_0x2d1c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1C98u;
        // 0x2d1c9c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1c98) {
            ctx->pc = 0x2D1CE8u;
            goto label_2d1ce8;
        }
    }
    ctx->pc = 0x2D1CA0u;
label_2d1ca0:
    // 0x2d1ca0: 0x3c05aaaa  lui         $a1, 0xAAAA
    ctx->pc = 0x2d1ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43690 << 16));
label_2d1ca4:
    // 0x2d1ca4: 0xf1080  sll         $v0, $t7, 2
    ctx->pc = 0x2d1ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
label_2d1ca8:
    // 0x2d1ca8: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x2d1ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2d1cac:
    // 0x2d1cac: 0x4d2021  addu        $a0, $v0, $t5
    ctx->pc = 0x2d1cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
label_2d1cb0:
    // 0x2d1cb0: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x2d1cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2d1cb4:
    // 0x2d1cb4: 0x34a5aaab  ori         $a1, $a1, 0xAAAB
    ctx->pc = 0x2d1cb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43691);
label_2d1cb8:
    // 0x2d1cb8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d1cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2d1cbc:
    // 0x2d1cbc: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2d1cbcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_2d1cc0:
    // 0x2d1cc0: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x2d1cc0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_2d1cc4:
    // 0x2d1cc4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2d1cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_2d1cc8:
    // 0x2d1cc8: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2d1cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2d1ccc:
    // 0x2d1ccc: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x2d1cccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2d1cd0:
    // 0x2d1cd0: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x2d1cd0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_2d1cd4:
    // 0x2d1cd4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2d1cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2d1cd8:
    // 0x2d1cd8: 0x8e22007c  lw          $v0, 0x7C($s1)
    ctx->pc = 0x2d1cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
label_2d1cdc:
    // 0x2d1cdc: 0x142102b  sltu        $v0, $t2, $v0
    ctx->pc = 0x2d1cdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2d1ce0:
    // 0x2d1ce0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_2d1ce4:
    if (ctx->pc == 0x2D1CE4u) {
        ctx->pc = 0x2D1CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1CE0u;
        // 0x2d1ce4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1CE8u;
        goto label_2d1ce8;
    }
    ctx->pc = 0x2D1CE0u;
    {
        const bool branch_taken_0x2d1ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1CE0u;
        // 0x2d1ce4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1ce0) {
            ctx->pc = 0x2D1CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d1cb8;
        }
    }
    ctx->pc = 0x2D1CE8u;
label_2d1ce8:
    // 0x2d1ce8: 0xae6d0000  sw          $t5, 0x0($s3)
    ctx->pc = 0x2d1ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 13));
label_2d1cec:
    // 0x2d1cec: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x2d1cecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_2d1cf0:
    // 0x2d1cf0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2d1cf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2d1cf4:
    // 0x2d1cf4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2d1cf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2d1cf8:
    // 0x2d1cf8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d1cf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d1cfc:
    // 0x2d1cfc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2d1cfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d1d00:
    // 0x2d1d00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d1d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d1d04:
    // 0x2d1d04: 0x3e00008  jr          $ra
label_2d1d08:
    if (ctx->pc == 0x2D1D08u) {
        ctx->pc = 0x2D1D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1D04u;
        // 0x2d1d08: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1D0Cu;
        goto label_2d1d0c;
    }
    ctx->pc = 0x2D1D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1D04u;
        // 0x2d1d08: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1D0Cu;
label_2d1d0c:
    // 0x2d1d0c: 0x0  nop
    ctx->pc = 0x2d1d0cu;
    // NOP
    ctx->pc = 0x2d1d10u;
}
