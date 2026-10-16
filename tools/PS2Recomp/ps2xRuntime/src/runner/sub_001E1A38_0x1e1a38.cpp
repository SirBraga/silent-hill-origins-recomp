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

// Function: sub_001E1A38
// Address: 0x1e1a38 - 0x1e1dd8
void sub_001E1A38_0x1e1a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1A38_0x1e1a38");
#endif

    switch (ctx->pc) {
        case 0x1e1a38u: goto label_1e1a38;
        case 0x1e1a3cu: goto label_1e1a3c;
        case 0x1e1a40u: goto label_1e1a40;
        case 0x1e1a44u: goto label_1e1a44;
        case 0x1e1a48u: goto label_1e1a48;
        case 0x1e1a4cu: goto label_1e1a4c;
        case 0x1e1a50u: goto label_1e1a50;
        case 0x1e1a54u: goto label_1e1a54;
        case 0x1e1a58u: goto label_1e1a58;
        case 0x1e1a5cu: goto label_1e1a5c;
        case 0x1e1a60u: goto label_1e1a60;
        case 0x1e1a64u: goto label_1e1a64;
        case 0x1e1a68u: goto label_1e1a68;
        case 0x1e1a6cu: goto label_1e1a6c;
        case 0x1e1a70u: goto label_1e1a70;
        case 0x1e1a74u: goto label_1e1a74;
        case 0x1e1a78u: goto label_1e1a78;
        case 0x1e1a7cu: goto label_1e1a7c;
        case 0x1e1a80u: goto label_1e1a80;
        case 0x1e1a84u: goto label_1e1a84;
        case 0x1e1a88u: goto label_1e1a88;
        case 0x1e1a8cu: goto label_1e1a8c;
        case 0x1e1a90u: goto label_1e1a90;
        case 0x1e1a94u: goto label_1e1a94;
        case 0x1e1a98u: goto label_1e1a98;
        case 0x1e1a9cu: goto label_1e1a9c;
        case 0x1e1aa0u: goto label_1e1aa0;
        case 0x1e1aa4u: goto label_1e1aa4;
        case 0x1e1aa8u: goto label_1e1aa8;
        case 0x1e1aacu: goto label_1e1aac;
        case 0x1e1ab0u: goto label_1e1ab0;
        case 0x1e1ab4u: goto label_1e1ab4;
        case 0x1e1ab8u: goto label_1e1ab8;
        case 0x1e1abcu: goto label_1e1abc;
        case 0x1e1ac0u: goto label_1e1ac0;
        case 0x1e1ac4u: goto label_1e1ac4;
        case 0x1e1ac8u: goto label_1e1ac8;
        case 0x1e1accu: goto label_1e1acc;
        case 0x1e1ad0u: goto label_1e1ad0;
        case 0x1e1ad4u: goto label_1e1ad4;
        case 0x1e1ad8u: goto label_1e1ad8;
        case 0x1e1adcu: goto label_1e1adc;
        case 0x1e1ae0u: goto label_1e1ae0;
        case 0x1e1ae4u: goto label_1e1ae4;
        case 0x1e1ae8u: goto label_1e1ae8;
        case 0x1e1aecu: goto label_1e1aec;
        case 0x1e1af0u: goto label_1e1af0;
        case 0x1e1af4u: goto label_1e1af4;
        case 0x1e1af8u: goto label_1e1af8;
        case 0x1e1afcu: goto label_1e1afc;
        case 0x1e1b00u: goto label_1e1b00;
        case 0x1e1b04u: goto label_1e1b04;
        case 0x1e1b08u: goto label_1e1b08;
        case 0x1e1b0cu: goto label_1e1b0c;
        case 0x1e1b10u: goto label_1e1b10;
        case 0x1e1b14u: goto label_1e1b14;
        case 0x1e1b18u: goto label_1e1b18;
        case 0x1e1b1cu: goto label_1e1b1c;
        case 0x1e1b20u: goto label_1e1b20;
        case 0x1e1b24u: goto label_1e1b24;
        case 0x1e1b28u: goto label_1e1b28;
        case 0x1e1b2cu: goto label_1e1b2c;
        case 0x1e1b30u: goto label_1e1b30;
        case 0x1e1b34u: goto label_1e1b34;
        case 0x1e1b38u: goto label_1e1b38;
        case 0x1e1b3cu: goto label_1e1b3c;
        case 0x1e1b40u: goto label_1e1b40;
        case 0x1e1b44u: goto label_1e1b44;
        case 0x1e1b48u: goto label_1e1b48;
        case 0x1e1b4cu: goto label_1e1b4c;
        case 0x1e1b50u: goto label_1e1b50;
        case 0x1e1b54u: goto label_1e1b54;
        case 0x1e1b58u: goto label_1e1b58;
        case 0x1e1b5cu: goto label_1e1b5c;
        case 0x1e1b60u: goto label_1e1b60;
        case 0x1e1b64u: goto label_1e1b64;
        case 0x1e1b68u: goto label_1e1b68;
        case 0x1e1b6cu: goto label_1e1b6c;
        case 0x1e1b70u: goto label_1e1b70;
        case 0x1e1b74u: goto label_1e1b74;
        case 0x1e1b78u: goto label_1e1b78;
        case 0x1e1b7cu: goto label_1e1b7c;
        case 0x1e1b80u: goto label_1e1b80;
        case 0x1e1b84u: goto label_1e1b84;
        case 0x1e1b88u: goto label_1e1b88;
        case 0x1e1b8cu: goto label_1e1b8c;
        case 0x1e1b90u: goto label_1e1b90;
        case 0x1e1b94u: goto label_1e1b94;
        case 0x1e1b98u: goto label_1e1b98;
        case 0x1e1b9cu: goto label_1e1b9c;
        case 0x1e1ba0u: goto label_1e1ba0;
        case 0x1e1ba4u: goto label_1e1ba4;
        case 0x1e1ba8u: goto label_1e1ba8;
        case 0x1e1bacu: goto label_1e1bac;
        case 0x1e1bb0u: goto label_1e1bb0;
        case 0x1e1bb4u: goto label_1e1bb4;
        case 0x1e1bb8u: goto label_1e1bb8;
        case 0x1e1bbcu: goto label_1e1bbc;
        case 0x1e1bc0u: goto label_1e1bc0;
        case 0x1e1bc4u: goto label_1e1bc4;
        case 0x1e1bc8u: goto label_1e1bc8;
        case 0x1e1bccu: goto label_1e1bcc;
        case 0x1e1bd0u: goto label_1e1bd0;
        case 0x1e1bd4u: goto label_1e1bd4;
        case 0x1e1bd8u: goto label_1e1bd8;
        case 0x1e1bdcu: goto label_1e1bdc;
        case 0x1e1be0u: goto label_1e1be0;
        case 0x1e1be4u: goto label_1e1be4;
        case 0x1e1be8u: goto label_1e1be8;
        case 0x1e1becu: goto label_1e1bec;
        case 0x1e1bf0u: goto label_1e1bf0;
        case 0x1e1bf4u: goto label_1e1bf4;
        case 0x1e1bf8u: goto label_1e1bf8;
        case 0x1e1bfcu: goto label_1e1bfc;
        case 0x1e1c00u: goto label_1e1c00;
        case 0x1e1c04u: goto label_1e1c04;
        case 0x1e1c08u: goto label_1e1c08;
        case 0x1e1c0cu: goto label_1e1c0c;
        case 0x1e1c10u: goto label_1e1c10;
        case 0x1e1c14u: goto label_1e1c14;
        case 0x1e1c18u: goto label_1e1c18;
        case 0x1e1c1cu: goto label_1e1c1c;
        case 0x1e1c20u: goto label_1e1c20;
        case 0x1e1c24u: goto label_1e1c24;
        case 0x1e1c28u: goto label_1e1c28;
        case 0x1e1c2cu: goto label_1e1c2c;
        case 0x1e1c30u: goto label_1e1c30;
        case 0x1e1c34u: goto label_1e1c34;
        case 0x1e1c38u: goto label_1e1c38;
        case 0x1e1c3cu: goto label_1e1c3c;
        case 0x1e1c40u: goto label_1e1c40;
        case 0x1e1c44u: goto label_1e1c44;
        case 0x1e1c48u: goto label_1e1c48;
        case 0x1e1c4cu: goto label_1e1c4c;
        case 0x1e1c50u: goto label_1e1c50;
        case 0x1e1c54u: goto label_1e1c54;
        case 0x1e1c58u: goto label_1e1c58;
        case 0x1e1c5cu: goto label_1e1c5c;
        case 0x1e1c60u: goto label_1e1c60;
        case 0x1e1c64u: goto label_1e1c64;
        case 0x1e1c68u: goto label_1e1c68;
        case 0x1e1c6cu: goto label_1e1c6c;
        case 0x1e1c70u: goto label_1e1c70;
        case 0x1e1c74u: goto label_1e1c74;
        case 0x1e1c78u: goto label_1e1c78;
        case 0x1e1c7cu: goto label_1e1c7c;
        case 0x1e1c80u: goto label_1e1c80;
        case 0x1e1c84u: goto label_1e1c84;
        case 0x1e1c88u: goto label_1e1c88;
        case 0x1e1c8cu: goto label_1e1c8c;
        case 0x1e1c90u: goto label_1e1c90;
        case 0x1e1c94u: goto label_1e1c94;
        case 0x1e1c98u: goto label_1e1c98;
        case 0x1e1c9cu: goto label_1e1c9c;
        case 0x1e1ca0u: goto label_1e1ca0;
        case 0x1e1ca4u: goto label_1e1ca4;
        case 0x1e1ca8u: goto label_1e1ca8;
        case 0x1e1cacu: goto label_1e1cac;
        case 0x1e1cb0u: goto label_1e1cb0;
        case 0x1e1cb4u: goto label_1e1cb4;
        case 0x1e1cb8u: goto label_1e1cb8;
        case 0x1e1cbcu: goto label_1e1cbc;
        case 0x1e1cc0u: goto label_1e1cc0;
        case 0x1e1cc4u: goto label_1e1cc4;
        case 0x1e1cc8u: goto label_1e1cc8;
        case 0x1e1cccu: goto label_1e1ccc;
        case 0x1e1cd0u: goto label_1e1cd0;
        case 0x1e1cd4u: goto label_1e1cd4;
        case 0x1e1cd8u: goto label_1e1cd8;
        case 0x1e1cdcu: goto label_1e1cdc;
        case 0x1e1ce0u: goto label_1e1ce0;
        case 0x1e1ce4u: goto label_1e1ce4;
        case 0x1e1ce8u: goto label_1e1ce8;
        case 0x1e1cecu: goto label_1e1cec;
        case 0x1e1cf0u: goto label_1e1cf0;
        case 0x1e1cf4u: goto label_1e1cf4;
        case 0x1e1cf8u: goto label_1e1cf8;
        case 0x1e1cfcu: goto label_1e1cfc;
        case 0x1e1d00u: goto label_1e1d00;
        case 0x1e1d04u: goto label_1e1d04;
        case 0x1e1d08u: goto label_1e1d08;
        case 0x1e1d0cu: goto label_1e1d0c;
        case 0x1e1d10u: goto label_1e1d10;
        case 0x1e1d14u: goto label_1e1d14;
        case 0x1e1d18u: goto label_1e1d18;
        case 0x1e1d1cu: goto label_1e1d1c;
        case 0x1e1d20u: goto label_1e1d20;
        case 0x1e1d24u: goto label_1e1d24;
        case 0x1e1d28u: goto label_1e1d28;
        case 0x1e1d2cu: goto label_1e1d2c;
        case 0x1e1d30u: goto label_1e1d30;
        case 0x1e1d34u: goto label_1e1d34;
        case 0x1e1d38u: goto label_1e1d38;
        case 0x1e1d3cu: goto label_1e1d3c;
        case 0x1e1d40u: goto label_1e1d40;
        case 0x1e1d44u: goto label_1e1d44;
        case 0x1e1d48u: goto label_1e1d48;
        case 0x1e1d4cu: goto label_1e1d4c;
        case 0x1e1d50u: goto label_1e1d50;
        case 0x1e1d54u: goto label_1e1d54;
        case 0x1e1d58u: goto label_1e1d58;
        case 0x1e1d5cu: goto label_1e1d5c;
        case 0x1e1d60u: goto label_1e1d60;
        case 0x1e1d64u: goto label_1e1d64;
        case 0x1e1d68u: goto label_1e1d68;
        case 0x1e1d6cu: goto label_1e1d6c;
        case 0x1e1d70u: goto label_1e1d70;
        case 0x1e1d74u: goto label_1e1d74;
        case 0x1e1d78u: goto label_1e1d78;
        case 0x1e1d7cu: goto label_1e1d7c;
        case 0x1e1d80u: goto label_1e1d80;
        case 0x1e1d84u: goto label_1e1d84;
        case 0x1e1d88u: goto label_1e1d88;
        case 0x1e1d8cu: goto label_1e1d8c;
        case 0x1e1d90u: goto label_1e1d90;
        case 0x1e1d94u: goto label_1e1d94;
        case 0x1e1d98u: goto label_1e1d98;
        case 0x1e1d9cu: goto label_1e1d9c;
        case 0x1e1da0u: goto label_1e1da0;
        case 0x1e1da4u: goto label_1e1da4;
        case 0x1e1da8u: goto label_1e1da8;
        case 0x1e1dacu: goto label_1e1dac;
        case 0x1e1db0u: goto label_1e1db0;
        case 0x1e1db4u: goto label_1e1db4;
        case 0x1e1db8u: goto label_1e1db8;
        case 0x1e1dbcu: goto label_1e1dbc;
        case 0x1e1dc0u: goto label_1e1dc0;
        case 0x1e1dc4u: goto label_1e1dc4;
        case 0x1e1dc8u: goto label_1e1dc8;
        case 0x1e1dccu: goto label_1e1dcc;
        case 0x1e1dd0u: goto label_1e1dd0;
        case 0x1e1dd4u: goto label_1e1dd4;
        default: break;
    }

    ctx->pc = 0x1e1a38u;

label_1e1a38:
    // 0x1e1a38: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1e1a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1e1a3c:
    // 0x1e1a3c: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x1e1a3cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e1a40:
    // 0x1e1a40: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1e1a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1e1a44:
    // 0x1e1a44: 0x3c0b0070  lui         $t3, 0x70
    ctx->pc = 0x1e1a44u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)112 << 16));
label_1e1a48:
    // 0x1e1a48: 0xe7b90098  swc1        $f25, 0x98($sp)
    ctx->pc = 0x1e1a48u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1e1a4c:
    // 0x1e1a4c: 0xe7b80090  swc1        $f24, 0x90($sp)
    ctx->pc = 0x1e1a4cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1e1a50:
    // 0x1e1a50: 0xe7b70088  swc1        $f23, 0x88($sp)
    ctx->pc = 0x1e1a50u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_1e1a54:
    // 0x1e1a54: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x1e1a54u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1e1a58:
    // 0x1e1a58: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x1e1a58u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1e1a5c:
    // 0x1e1a5c: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1e1a5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1e1a60:
    // 0x1e1a60: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x1e1a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
label_1e1a64:
    // 0x1e1a64: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x1e1a64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
label_1e1a68:
    // 0x1e1a68: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1e1a68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1e1a6c:
    // 0x1e1a6c: 0x94a20010  lhu         $v0, 0x10($a1)
    ctx->pc = 0x1e1a6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
label_1e1a70:
    // 0x1e1a70: 0x94a30012  lhu         $v1, 0x12($a1)
    ctx->pc = 0x1e1a70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 18)));
label_1e1a74:
    // 0x1e1a74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e1a74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e1a78:
    // 0x1e1a78: 0x0  nop
    ctx->pc = 0x1e1a78u;
    // NOP
label_1e1a7c:
    // 0x1e1a7c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e1a7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e1a80:
    // 0x1e1a80: 0x94a60014  lhu         $a2, 0x14($a1)
    ctx->pc = 0x1e1a80u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 20)));
label_1e1a84:
    // 0x1e1a84: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1e1a84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e1a88:
    // 0x1e1a88: 0x0  nop
    ctx->pc = 0x1e1a88u;
    // NOP
label_1e1a8c:
    // 0x1e1a8c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1e1a8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1e1a90:
    // 0x1e1a90: 0x94a80016  lhu         $t0, 0x16($a1)
    ctx->pc = 0x1e1a90u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 22)));
label_1e1a94:
    // 0x1e1a94: 0x94a20018  lhu         $v0, 0x18($a1)
    ctx->pc = 0x1e1a94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 24)));
label_1e1a98:
    // 0x1e1a98: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x1e1a98u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1e1a9c:
    // 0x1e1a9c: 0x0  nop
    ctx->pc = 0x1e1a9cu;
    // NOP
label_1e1aa0:
    // 0x1e1aa0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1e1aa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_1e1aa4:
    // 0x1e1aa4: 0x94a3001a  lhu         $v1, 0x1A($a1)
    ctx->pc = 0x1e1aa4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 26)));
label_1e1aa8:
    // 0x1e1aa8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1e1aa8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e1aac:
    // 0x1e1aac: 0x0  nop
    ctx->pc = 0x1e1aacu;
    // NOP
label_1e1ab0:
    // 0x1e1ab0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e1ab0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1e1ab4:
    // 0x1e1ab4: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1e1ab4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1e1ab8:
    // 0x1e1ab8: 0x0  nop
    ctx->pc = 0x1e1ab8u;
    // NOP
label_1e1abc:
    // 0x1e1abc: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x1e1abcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_1e1ac0:
    // 0x1e1ac0: 0x84a60008  lh          $a2, 0x8($a1)
    ctx->pc = 0x1e1ac0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
label_1e1ac4:
    // 0x1e1ac4: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x1e1ac4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1e1ac8:
    // 0x1e1ac8: 0x0  nop
    ctx->pc = 0x1e1ac8u;
    // NOP
label_1e1acc:
    // 0x1e1acc: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x1e1accu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_1e1ad0:
    // 0x1e1ad0: 0x84a2000a  lh          $v0, 0xA($a1)
    ctx->pc = 0x1e1ad0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
label_1e1ad4:
    // 0x1e1ad4: 0x84a3000c  lh          $v1, 0xC($a1)
    ctx->pc = 0x1e1ad4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
label_1e1ad8:
    // 0x1e1ad8: 0x0  nop
    ctx->pc = 0x1e1ad8u;
    // NOP
label_1e1adc:
    // 0x1e1adc: 0x0  nop
    ctx->pc = 0x1e1adcu;
    // NOP
label_1e1ae0:
    // 0x1e1ae0: 0x46070843  div.s       $f1, $f1, $f7
    ctx->pc = 0x1e1ae0u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[7]);
label_1e1ae4:
    // 0x1e1ae4: 0x84a8000e  lh          $t0, 0xE($a1)
    ctx->pc = 0x1e1ae4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
label_1e1ae8:
    // 0x1e1ae8: 0x0  nop
    ctx->pc = 0x1e1ae8u;
    // NOP
label_1e1aec:
    // 0x1e1aec: 0x0  nop
    ctx->pc = 0x1e1aecu;
    // NOP
label_1e1af0:
    // 0x1e1af0: 0x46071083  div.s       $f2, $f2, $f7
    ctx->pc = 0x1e1af0u;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[7]);
label_1e1af4:
    // 0x1e1af4: 0x0  nop
    ctx->pc = 0x1e1af4u;
    // NOP
label_1e1af8:
    // 0x1e1af8: 0x0  nop
    ctx->pc = 0x1e1af8u;
    // NOP
label_1e1afc:
    // 0x1e1afc: 0x460718c3  div.s       $f3, $f3, $f7
    ctx->pc = 0x1e1afcu;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[3], ctx->f[7]);
label_1e1b00:
    // 0x1e1b00: 0x3c01467f  lui         $at, 0x467F
    ctx->pc = 0x1e1b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18047 << 16));
label_1e1b04:
    // 0x1e1b04: 0x3421fc00  ori         $at, $at, 0xFC00
    ctx->pc = 0x1e1b04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64512);
label_1e1b08:
    // 0x1e1b08: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x1e1b08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_1e1b0c:
    // 0x1e1b0c: 0x0  nop
    ctx->pc = 0x1e1b0cu;
    // NOP
label_1e1b10:
    // 0x1e1b10: 0x0  nop
    ctx->pc = 0x1e1b10u;
    // NOP
label_1e1b14:
    // 0x1e1b14: 0x46070003  div.s       $f0, $f0, $f7
    ctx->pc = 0x1e1b14u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[7]);
label_1e1b18:
    // 0x1e1b18: 0xc4f8000c  lwc1        $f24, 0xC($a3)
    ctx->pc = 0x1e1b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_1e1b1c:
    // 0x1e1b1c: 0x0  nop
    ctx->pc = 0x1e1b1cu;
    // NOP
label_1e1b20:
    // 0x1e1b20: 0x0  nop
    ctx->pc = 0x1e1b20u;
    // NOP
label_1e1b24:
    // 0x1e1b24: 0x46072103  div.s       $f4, $f4, $f7
    ctx->pc = 0x1e1b24u;
    ctx->f[4] = FPU_DIV_S(ctx, ctx->f[4], ctx->f[7]);
label_1e1b28:
    // 0x1e1b28: 0xc4f60010  lwc1        $f22, 0x10($a3)
    ctx->pc = 0x1e1b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1e1b2c:
    // 0x1e1b2c: 0x0  nop
    ctx->pc = 0x1e1b2cu;
    // NOP
label_1e1b30:
    // 0x1e1b30: 0x0  nop
    ctx->pc = 0x1e1b30u;
    // NOP
label_1e1b34:
    // 0x1e1b34: 0x46072943  div.s       $f5, $f5, $f7
    ctx->pc = 0x1e1b34u;
    ctx->f[5] = FPU_DIV_S(ctx, ctx->f[5], ctx->f[7]);
label_1e1b38:
    // 0x1e1b38: 0xc4f70014  lwc1        $f23, 0x14($a3)
    ctx->pc = 0x1e1b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1e1b3c:
    // 0x1e1b3c: 0x44863000  mtc1        $a2, $f6
    ctx->pc = 0x1e1b3cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1e1b40:
    // 0x1e1b40: 0x0  nop
    ctx->pc = 0x1e1b40u;
    // NOP
label_1e1b44:
    // 0x1e1b44: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x1e1b44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
label_1e1b48:
    // 0x1e1b48: 0xc4f50024  lwc1        $f21, 0x24($a3)
    ctx->pc = 0x1e1b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1e1b4c:
    // 0x1e1b4c: 0x44824000  mtc1        $v0, $f8
    ctx->pc = 0x1e1b4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_1e1b50:
    // 0x1e1b50: 0x0  nop
    ctx->pc = 0x1e1b50u;
    // NOP
label_1e1b54:
    // 0x1e1b54: 0x46804220  cvt.s.w     $f8, $f8
    ctx->pc = 0x1e1b54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[8], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
label_1e1b58:
    // 0x1e1b58: 0xc4f30028  lwc1        $f19, 0x28($a3)
    ctx->pc = 0x1e1b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
label_1e1b5c:
    // 0x1e1b5c: 0x44834800  mtc1        $v1, $f9
    ctx->pc = 0x1e1b5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_1e1b60:
    // 0x1e1b60: 0x0  nop
    ctx->pc = 0x1e1b60u;
    // NOP
label_1e1b64:
    // 0x1e1b64: 0x46804a60  cvt.s.w     $f9, $f9
    ctx->pc = 0x1e1b64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
label_1e1b68:
    // 0x1e1b68: 0xc4f1002c  lwc1        $f17, 0x2C($a3)
    ctx->pc = 0x1e1b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
label_1e1b6c:
    // 0x1e1b6c: 0x44885000  mtc1        $t0, $f10
    ctx->pc = 0x1e1b6cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_1e1b70:
    // 0x1e1b70: 0x0  nop
    ctx->pc = 0x1e1b70u;
    // NOP
label_1e1b74:
    // 0x1e1b74: 0x468052a0  cvt.s.w     $f10, $f10
    ctx->pc = 0x1e1b74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[10], sizeof(tmp)); ctx->f[10] = FPU_CVT_S_W(tmp); }
label_1e1b78:
    // 0x1e1b78: 0xc4f90020  lwc1        $f25, 0x20($a3)
    ctx->pc = 0x1e1b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_1e1b7c:
    // 0x1e1b7c: 0x0  nop
    ctx->pc = 0x1e1b7cu;
    // NOP
label_1e1b80:
    // 0x1e1b80: 0x0  nop
    ctx->pc = 0x1e1b80u;
    // NOP
label_1e1b84:
    // 0x1e1b84: 0x460b3183  div.s       $f6, $f6, $f11
    ctx->pc = 0x1e1b84u;
    ctx->f[6] = FPU_DIV_S(ctx, ctx->f[6], ctx->f[11]);
label_1e1b88:
    // 0x1e1b88: 0xc4f40000  lwc1        $f20, 0x0($a3)
    ctx->pc = 0x1e1b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1e1b8c:
    // 0x1e1b8c: 0x0  nop
    ctx->pc = 0x1e1b8cu;
    // NOP
label_1e1b90:
    // 0x1e1b90: 0x0  nop
    ctx->pc = 0x1e1b90u;
    // NOP
label_1e1b94:
    // 0x1e1b94: 0x460b4203  div.s       $f8, $f8, $f11
    ctx->pc = 0x1e1b94u;
    ctx->f[8] = FPU_DIV_S(ctx, ctx->f[8], ctx->f[11]);
label_1e1b98:
    // 0x1e1b98: 0xc4f20004  lwc1        $f18, 0x4($a3)
    ctx->pc = 0x1e1b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_1e1b9c:
    // 0x1e1b9c: 0x0  nop
    ctx->pc = 0x1e1b9cu;
    // NOP
label_1e1ba0:
    // 0x1e1ba0: 0x0  nop
    ctx->pc = 0x1e1ba0u;
    // NOP
label_1e1ba4:
    // 0x1e1ba4: 0x460b4a43  div.s       $f9, $f9, $f11
    ctx->pc = 0x1e1ba4u;
    ctx->f[9] = FPU_DIV_S(ctx, ctx->f[9], ctx->f[11]);
label_1e1ba8:
    // 0x1e1ba8: 0xc4f00008  lwc1        $f16, 0x8($a3)
    ctx->pc = 0x1e1ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_1e1bac:
    // 0x1e1bac: 0x0  nop
    ctx->pc = 0x1e1bacu;
    // NOP
label_1e1bb0:
    // 0x1e1bb0: 0x0  nop
    ctx->pc = 0x1e1bb0u;
    // NOP
label_1e1bb4:
    // 0x1e1bb4: 0x460b5283  div.s       $f10, $f10, $f11
    ctx->pc = 0x1e1bb4u;
    ctx->f[10] = FPU_DIV_S(ctx, ctx->f[10], ctx->f[11]);
label_1e1bb8:
    // 0x1e1bb8: 0xc4ee0018  lwc1        $f14, 0x18($a3)
    ctx->pc = 0x1e1bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1e1bbc:
    // 0x1e1bbc: 0x46180842  mul.s       $f1, $f1, $f24
    ctx->pc = 0x1e1bbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
label_1e1bc0:
    // 0x1e1bc0: 0xc4ef001c  lwc1        $f15, 0x1C($a3)
    ctx->pc = 0x1e1bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1e1bc4:
    // 0x1e1bc4: 0x46161082  mul.s       $f2, $f2, $f22
    ctx->pc = 0x1e1bc4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
label_1e1bc8:
    // 0x1e1bc8: 0xc4ad0004  lwc1        $f13, 0x4($a1)
    ctx->pc = 0x1e1bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1e1bcc:
    // 0x1e1bcc: 0x461718c2  mul.s       $f3, $f3, $f23
    ctx->pc = 0x1e1bccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[23]);
label_1e1bd0:
    // 0x1e1bd0: 0xe7a60008  swc1        $f6, 0x8($sp)
    ctx->pc = 0x1e1bd0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1e1bd4:
    // 0x1e1bd4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1e1bd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_1e1bd8:
    // 0x1e1bd8: 0xe7a8000c  swc1        $f8, 0xC($sp)
    ctx->pc = 0x1e1bd8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1e1bdc:
    // 0x1e1bdc: 0x46132102  mul.s       $f4, $f4, $f19
    ctx->pc = 0x1e1bdcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[19]);
label_1e1be0:
    // 0x1e1be0: 0xe7a90010  swc1        $f9, 0x10($sp)
    ctx->pc = 0x1e1be0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1e1be4:
    // 0x1e1be4: 0x46112942  mul.s       $f5, $f5, $f17
    ctx->pc = 0x1e1be4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[17]);
label_1e1be8:
    // 0x1e1be8: 0xe7aa0014  swc1        $f10, 0x14($sp)
    ctx->pc = 0x1e1be8u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1e1bec:
    // 0x1e1bec: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x1e1becu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_1e1bf0:
    // 0x1e1bf0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e1bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e1bf4:
    // 0x1e1bf4: 0x46121080  add.s       $f2, $f2, $f18
    ctx->pc = 0x1e1bf4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[18]);
label_1e1bf8:
    // 0x1e1bf8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1e1bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1e1bfc:
    // 0x1e1bfc: 0x461018c0  add.s       $f3, $f3, $f16
    ctx->pc = 0x1e1bfcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[16]);
label_1e1c00:
    // 0x1e1c00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e1c00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1c04:
    // 0x1e1c04: 0x460e0000  add.s       $f0, $f0, $f14
    ctx->pc = 0x1e1c04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[14]);
label_1e1c08:
    // 0x1e1c08: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1e1c08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1e1c0c:
    // 0x1e1c0c: 0x460f2100  add.s       $f4, $f4, $f15
    ctx->pc = 0x1e1c0cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[15]);
label_1e1c10:
    // 0x1e1c10: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x1e1c10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_1e1c14:
    // 0x1e1c14: 0x46192940  add.s       $f5, $f5, $f25
    ctx->pc = 0x1e1c14u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[25]);
label_1e1c18:
    // 0x1e1c18: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x1e1c18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1e1c1c:
    // 0x1e1c1c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1e1c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1e1c20:
    // 0x1e1c20: 0xe7a40028  swc1        $f4, 0x28($sp)
    ctx->pc = 0x1e1c20u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1e1c24:
    // 0x1e1c24: 0xe7a5002c  swc1        $f5, 0x2C($sp)
    ctx->pc = 0x1e1c24u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_1e1c28:
    // 0x1e1c28: 0xe7ad0004  swc1        $f13, 0x4($sp)
    ctx->pc = 0x1e1c28u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1e1c2c:
    // 0x1e1c2c: 0x95420010  lhu         $v0, 0x10($t2)
    ctx->pc = 0x1e1c2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 16)));
label_1e1c30:
    // 0x1e1c30: 0x95430012  lhu         $v1, 0x12($t2)
    ctx->pc = 0x1e1c30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 18)));
label_1e1c34:
    // 0x1e1c34: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x1e1c34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1e1c38:
    // 0x1e1c38: 0x0  nop
    ctx->pc = 0x1e1c38u;
    // NOP
label_1e1c3c:
    // 0x1e1c3c: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x1e1c3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
label_1e1c40:
    // 0x1e1c40: 0x95480014  lhu         $t0, 0x14($t2)
    ctx->pc = 0x1e1c40u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 20)));
label_1e1c44:
    // 0x1e1c44: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x1e1c44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1e1c48:
    // 0x1e1c48: 0x0  nop
    ctx->pc = 0x1e1c48u;
    // NOP
label_1e1c4c:
    // 0x1e1c4c: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x1e1c4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_1e1c50:
    // 0x1e1c50: 0x95490016  lhu         $t1, 0x16($t2)
    ctx->pc = 0x1e1c50u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 22)));
label_1e1c54:
    // 0x1e1c54: 0x95420018  lhu         $v0, 0x18($t2)
    ctx->pc = 0x1e1c54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 24)));
label_1e1c58:
    // 0x1e1c58: 0x44882000  mtc1        $t0, $f4
    ctx->pc = 0x1e1c58u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1e1c5c:
    // 0x1e1c5c: 0x0  nop
    ctx->pc = 0x1e1c5cu;
    // NOP
label_1e1c60:
    // 0x1e1c60: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x1e1c60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_1e1c64:
    // 0x1e1c64: 0x9543001a  lhu         $v1, 0x1A($t2)
    ctx->pc = 0x1e1c64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 26)));
label_1e1c68:
    // 0x1e1c68: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x1e1c68u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e1c6c:
    // 0x1e1c6c: 0x0  nop
    ctx->pc = 0x1e1c6cu;
    // NOP
label_1e1c70:
    // 0x1e1c70: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1e1c70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1e1c74:
    // 0x1e1c74: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1e1c74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1e1c78:
    // 0x1e1c78: 0x0  nop
    ctx->pc = 0x1e1c78u;
    // NOP
label_1e1c7c:
    // 0x1e1c7c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1e1c7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_1e1c80:
    // 0x1e1c80: 0xc5400004  lwc1        $f0, 0x4($t2)
    ctx->pc = 0x1e1c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e1c84:
    // 0x1e1c84: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1e1c84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e1c88:
    // 0x1e1c88: 0x0  nop
    ctx->pc = 0x1e1c88u;
    // NOP
label_1e1c8c:
    // 0x1e1c8c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e1c8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e1c90:
    // 0x1e1c90: 0x85480008  lh          $t0, 0x8($t2)
    ctx->pc = 0x1e1c90u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 8)));
label_1e1c94:
    // 0x1e1c94: 0x0  nop
    ctx->pc = 0x1e1c94u;
    // NOP
label_1e1c98:
    // 0x1e1c98: 0x0  nop
    ctx->pc = 0x1e1c98u;
    // NOP
label_1e1c9c:
    // 0x1e1c9c: 0x46073183  div.s       $f6, $f6, $f7
    ctx->pc = 0x1e1c9cu;
    ctx->f[6] = FPU_DIV_S(ctx, ctx->f[6], ctx->f[7]);
label_1e1ca0:
    // 0x1e1ca0: 0x8549000a  lh          $t1, 0xA($t2)
    ctx->pc = 0x1e1ca0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 10)));
label_1e1ca4:
    // 0x1e1ca4: 0x0  nop
    ctx->pc = 0x1e1ca4u;
    // NOP
label_1e1ca8:
    // 0x1e1ca8: 0x0  nop
    ctx->pc = 0x1e1ca8u;
    // NOP
label_1e1cac:
    // 0x1e1cac: 0x46072943  div.s       $f5, $f5, $f7
    ctx->pc = 0x1e1cacu;
    ctx->f[5] = FPU_DIV_S(ctx, ctx->f[5], ctx->f[7]);
label_1e1cb0:
    // 0x1e1cb0: 0x8543000c  lh          $v1, 0xC($t2)
    ctx->pc = 0x1e1cb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 12)));
label_1e1cb4:
    // 0x1e1cb4: 0x0  nop
    ctx->pc = 0x1e1cb4u;
    // NOP
label_1e1cb8:
    // 0x1e1cb8: 0x0  nop
    ctx->pc = 0x1e1cb8u;
    // NOP
label_1e1cbc:
    // 0x1e1cbc: 0x46070843  div.s       $f1, $f1, $f7
    ctx->pc = 0x1e1cbcu;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[7]);
label_1e1cc0:
    // 0x1e1cc0: 0x8542000e  lh          $v0, 0xE($t2)
    ctx->pc = 0x1e1cc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 14)));
label_1e1cc4:
    // 0x1e1cc4: 0x0  nop
    ctx->pc = 0x1e1cc4u;
    // NOP
label_1e1cc8:
    // 0x1e1cc8: 0x0  nop
    ctx->pc = 0x1e1cc8u;
    // NOP
label_1e1ccc:
    // 0x1e1ccc: 0x46072103  div.s       $f4, $f4, $f7
    ctx->pc = 0x1e1cccu;
    ctx->f[4] = FPU_DIV_S(ctx, ctx->f[4], ctx->f[7]);
label_1e1cd0:
    // 0x1e1cd0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1e1cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1e1cd4:
    // 0x1e1cd4: 0x0  nop
    ctx->pc = 0x1e1cd4u;
    // NOP
label_1e1cd8:
    // 0x1e1cd8: 0x0  nop
    ctx->pc = 0x1e1cd8u;
    // NOP
label_1e1cdc:
    // 0x1e1cdc: 0x46071083  div.s       $f2, $f2, $f7
    ctx->pc = 0x1e1cdcu;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[7]);
label_1e1ce0:
    // 0x1e1ce0: 0x8d6a8d00  lw          $t2, -0x7300($t3)
    ctx->pc = 0x1e1ce0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294937856)));
label_1e1ce4:
    // 0x1e1ce4: 0x0  nop
    ctx->pc = 0x1e1ce4u;
    // NOP
label_1e1ce8:
    // 0x1e1ce8: 0x0  nop
    ctx->pc = 0x1e1ce8u;
    // NOP
label_1e1cec:
    // 0x1e1cec: 0x460718c3  div.s       $f3, $f3, $f7
    ctx->pc = 0x1e1cecu;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[3], ctx->f[7]);
label_1e1cf0:
    // 0x1e1cf0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1e1cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1e1cf4:
    // 0x1e1cf4: 0x44883800  mtc1        $t0, $f7
    ctx->pc = 0x1e1cf4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1e1cf8:
    // 0x1e1cf8: 0x0  nop
    ctx->pc = 0x1e1cf8u;
    // NOP
label_1e1cfc:
    // 0x1e1cfc: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x1e1cfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
label_1e1d00:
    // 0x1e1d00: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1e1d00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_1e1d04:
    // 0x1e1d04: 0x44894000  mtc1        $t1, $f8
    ctx->pc = 0x1e1d04u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_1e1d08:
    // 0x1e1d08: 0x0  nop
    ctx->pc = 0x1e1d08u;
    // NOP
label_1e1d0c:
    // 0x1e1d0c: 0x46804220  cvt.s.w     $f8, $f8
    ctx->pc = 0x1e1d0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[8], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
label_1e1d10:
    // 0x1e1d10: 0x44834800  mtc1        $v1, $f9
    ctx->pc = 0x1e1d10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_1e1d14:
    // 0x1e1d14: 0x0  nop
    ctx->pc = 0x1e1d14u;
    // NOP
label_1e1d18:
    // 0x1e1d18: 0x46804a60  cvt.s.w     $f9, $f9
    ctx->pc = 0x1e1d18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
label_1e1d1c:
    // 0x1e1d1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e1d1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e1d20:
    // 0x1e1d20: 0x0  nop
    ctx->pc = 0x1e1d20u;
    // NOP
label_1e1d24:
    // 0x1e1d24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e1d24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1e1d28:
    // 0x1e1d28: 0x46183182  mul.s       $f6, $f6, $f24
    ctx->pc = 0x1e1d28u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[24]);
label_1e1d2c:
    // 0x1e1d2c: 0x46162942  mul.s       $f5, $f5, $f22
    ctx->pc = 0x1e1d2cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[22]);
label_1e1d30:
    // 0x1e1d30: 0x0  nop
    ctx->pc = 0x1e1d30u;
    // NOP
label_1e1d34:
    // 0x1e1d34: 0x0  nop
    ctx->pc = 0x1e1d34u;
    // NOP
label_1e1d38:
    // 0x1e1d38: 0x460b0003  div.s       $f0, $f0, $f11
    ctx->pc = 0x1e1d38u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[11]);
label_1e1d3c:
    // 0x1e1d3c: 0x46172102  mul.s       $f4, $f4, $f23
    ctx->pc = 0x1e1d3cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[23]);
label_1e1d40:
    // 0x1e1d40: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x1e1d40u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
label_1e1d44:
    // 0x1e1d44: 0x461318c2  mul.s       $f3, $f3, $f19
    ctx->pc = 0x1e1d44u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[19]);
label_1e1d48:
    // 0x1e1d48: 0x46110842  mul.s       $f1, $f1, $f17
    ctx->pc = 0x1e1d48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[17]);
label_1e1d4c:
    // 0x1e1d4c: 0x0  nop
    ctx->pc = 0x1e1d4cu;
    // NOP
label_1e1d50:
    // 0x1e1d50: 0x0  nop
    ctx->pc = 0x1e1d50u;
    // NOP
label_1e1d54:
    // 0x1e1d54: 0x460b39c3  div.s       $f7, $f7, $f11
    ctx->pc = 0x1e1d54u;
    ctx->f[7] = FPU_DIV_S(ctx, ctx->f[7], ctx->f[11]);
label_1e1d58:
    // 0x1e1d58: 0x0  nop
    ctx->pc = 0x1e1d58u;
    // NOP
label_1e1d5c:
    // 0x1e1d5c: 0x0  nop
    ctx->pc = 0x1e1d5cu;
    // NOP
label_1e1d60:
    // 0x1e1d60: 0x460b4203  div.s       $f8, $f8, $f11
    ctx->pc = 0x1e1d60u;
    ctx->f[8] = FPU_DIV_S(ctx, ctx->f[8], ctx->f[11]);
label_1e1d64:
    // 0x1e1d64: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1e1d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1e1d68:
    // 0x1e1d68: 0x0  nop
    ctx->pc = 0x1e1d68u;
    // NOP
label_1e1d6c:
    // 0x1e1d6c: 0x0  nop
    ctx->pc = 0x1e1d6cu;
    // NOP
label_1e1d70:
    // 0x1e1d70: 0x460b4a43  div.s       $f9, $f9, $f11
    ctx->pc = 0x1e1d70u;
    ctx->f[9] = FPU_DIV_S(ctx, ctx->f[9], ctx->f[11]);
label_1e1d74:
    // 0x1e1d74: 0x46143180  add.s       $f6, $f6, $f20
    ctx->pc = 0x1e1d74u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[20]);
label_1e1d78:
    // 0x1e1d78: 0x46190840  add.s       $f1, $f1, $f25
    ctx->pc = 0x1e1d78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[25]);
label_1e1d7c:
    // 0x1e1d7c: 0x46122940  add.s       $f5, $f5, $f18
    ctx->pc = 0x1e1d7cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[18]);
label_1e1d80:
    // 0x1e1d80: 0x46102100  add.s       $f4, $f4, $f16
    ctx->pc = 0x1e1d80u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[16]);
label_1e1d84:
    // 0x1e1d84: 0xe7a70038  swc1        $f7, 0x38($sp)
    ctx->pc = 0x1e1d84u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1e1d88:
    // 0x1e1d88: 0x460e1080  add.s       $f2, $f2, $f14
    ctx->pc = 0x1e1d88u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[14]);
label_1e1d8c:
    // 0x1e1d8c: 0xe7a8003c  swc1        $f8, 0x3C($sp)
    ctx->pc = 0x1e1d8cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_1e1d90:
    // 0x1e1d90: 0x460f18c0  add.s       $f3, $f3, $f15
    ctx->pc = 0x1e1d90u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[15]);
label_1e1d94:
    // 0x1e1d94: 0xe7a90040  swc1        $f9, 0x40($sp)
    ctx->pc = 0x1e1d94u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1e1d98:
    // 0x1e1d98: 0xe7a60048  swc1        $f6, 0x48($sp)
    ctx->pc = 0x1e1d98u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1e1d9c:
    // 0x1e1d9c: 0xe7a5004c  swc1        $f5, 0x4C($sp)
    ctx->pc = 0x1e1d9cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_1e1da0:
    // 0x1e1da0: 0xe7a40050  swc1        $f4, 0x50($sp)
    ctx->pc = 0x1e1da0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1e1da4:
    // 0x1e1da4: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x1e1da4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1e1da8:
    // 0x1e1da8: 0xe7a30058  swc1        $f3, 0x58($sp)
    ctx->pc = 0x1e1da8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1e1dac:
    // 0x1e1dac: 0x140f809  jalr        $t2
label_1e1db0:
    if (ctx->pc == 0x1E1DB0u) {
        ctx->pc = 0x1E1DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1DACu;
        // 0x1e1db0: 0xe7a1005c  swc1        $f1, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1DB4u;
        goto label_1e1db4;
    }
    ctx->pc = 0x1E1DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 10);
        SET_GPR_U32(ctx, 31, 0x1E1DB4u);
        ctx->pc = 0x1E1DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1DACu;
        // 0x1e1db0: 0xe7a1005c  swc1        $f1, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1DACu, 0x1E1DB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1DB4u;
label_1e1db4:
    // 0x1e1db4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1e1db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1e1db8:
    // 0x1e1db8: 0xc7b90098  lwc1        $f25, 0x98($sp)
    ctx->pc = 0x1e1db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_1e1dbc:
    // 0x1e1dbc: 0xc7b80090  lwc1        $f24, 0x90($sp)
    ctx->pc = 0x1e1dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_1e1dc0:
    // 0x1e1dc0: 0xc7b70088  lwc1        $f23, 0x88($sp)
    ctx->pc = 0x1e1dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1e1dc4:
    // 0x1e1dc4: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x1e1dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1e1dc8:
    // 0x1e1dc8: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x1e1dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1e1dcc:
    // 0x1e1dcc: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1e1dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1e1dd0:
    // 0x1e1dd0: 0x3e00008  jr          $ra
label_1e1dd4:
    if (ctx->pc == 0x1E1DD4u) {
        ctx->pc = 0x1E1DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1DD0u;
        // 0x1e1dd4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1DD8u;
        goto label_fallthrough_0x1e1dd0;
    }
    ctx->pc = 0x1E1DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1DD0u;
        // 0x1e1dd4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1DD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e1dd0:
    ctx->pc = 0x1E1DD8u;
}
