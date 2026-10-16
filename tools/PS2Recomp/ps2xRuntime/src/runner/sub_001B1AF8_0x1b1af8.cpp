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

// Function: sub_001B1AF8
// Address: 0x1b1af8 - 0x1b1e60
void sub_001B1AF8_0x1b1af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1AF8_0x1b1af8");
#endif

    switch (ctx->pc) {
        case 0x1b1af8u: goto label_1b1af8;
        case 0x1b1afcu: goto label_1b1afc;
        case 0x1b1b00u: goto label_1b1b00;
        case 0x1b1b04u: goto label_1b1b04;
        case 0x1b1b08u: goto label_1b1b08;
        case 0x1b1b0cu: goto label_1b1b0c;
        case 0x1b1b10u: goto label_1b1b10;
        case 0x1b1b14u: goto label_1b1b14;
        case 0x1b1b18u: goto label_1b1b18;
        case 0x1b1b1cu: goto label_1b1b1c;
        case 0x1b1b20u: goto label_1b1b20;
        case 0x1b1b24u: goto label_1b1b24;
        case 0x1b1b28u: goto label_1b1b28;
        case 0x1b1b2cu: goto label_1b1b2c;
        case 0x1b1b30u: goto label_1b1b30;
        case 0x1b1b34u: goto label_1b1b34;
        case 0x1b1b38u: goto label_1b1b38;
        case 0x1b1b3cu: goto label_1b1b3c;
        case 0x1b1b40u: goto label_1b1b40;
        case 0x1b1b44u: goto label_1b1b44;
        case 0x1b1b48u: goto label_1b1b48;
        case 0x1b1b4cu: goto label_1b1b4c;
        case 0x1b1b50u: goto label_1b1b50;
        case 0x1b1b54u: goto label_1b1b54;
        case 0x1b1b58u: goto label_1b1b58;
        case 0x1b1b5cu: goto label_1b1b5c;
        case 0x1b1b60u: goto label_1b1b60;
        case 0x1b1b64u: goto label_1b1b64;
        case 0x1b1b68u: goto label_1b1b68;
        case 0x1b1b6cu: goto label_1b1b6c;
        case 0x1b1b70u: goto label_1b1b70;
        case 0x1b1b74u: goto label_1b1b74;
        case 0x1b1b78u: goto label_1b1b78;
        case 0x1b1b7cu: goto label_1b1b7c;
        case 0x1b1b80u: goto label_1b1b80;
        case 0x1b1b84u: goto label_1b1b84;
        case 0x1b1b88u: goto label_1b1b88;
        case 0x1b1b8cu: goto label_1b1b8c;
        case 0x1b1b90u: goto label_1b1b90;
        case 0x1b1b94u: goto label_1b1b94;
        case 0x1b1b98u: goto label_1b1b98;
        case 0x1b1b9cu: goto label_1b1b9c;
        case 0x1b1ba0u: goto label_1b1ba0;
        case 0x1b1ba4u: goto label_1b1ba4;
        case 0x1b1ba8u: goto label_1b1ba8;
        case 0x1b1bacu: goto label_1b1bac;
        case 0x1b1bb0u: goto label_1b1bb0;
        case 0x1b1bb4u: goto label_1b1bb4;
        case 0x1b1bb8u: goto label_1b1bb8;
        case 0x1b1bbcu: goto label_1b1bbc;
        case 0x1b1bc0u: goto label_1b1bc0;
        case 0x1b1bc4u: goto label_1b1bc4;
        case 0x1b1bc8u: goto label_1b1bc8;
        case 0x1b1bccu: goto label_1b1bcc;
        case 0x1b1bd0u: goto label_1b1bd0;
        case 0x1b1bd4u: goto label_1b1bd4;
        case 0x1b1bd8u: goto label_1b1bd8;
        case 0x1b1bdcu: goto label_1b1bdc;
        case 0x1b1be0u: goto label_1b1be0;
        case 0x1b1be4u: goto label_1b1be4;
        case 0x1b1be8u: goto label_1b1be8;
        case 0x1b1becu: goto label_1b1bec;
        case 0x1b1bf0u: goto label_1b1bf0;
        case 0x1b1bf4u: goto label_1b1bf4;
        case 0x1b1bf8u: goto label_1b1bf8;
        case 0x1b1bfcu: goto label_1b1bfc;
        case 0x1b1c00u: goto label_1b1c00;
        case 0x1b1c04u: goto label_1b1c04;
        case 0x1b1c08u: goto label_1b1c08;
        case 0x1b1c0cu: goto label_1b1c0c;
        case 0x1b1c10u: goto label_1b1c10;
        case 0x1b1c14u: goto label_1b1c14;
        case 0x1b1c18u: goto label_1b1c18;
        case 0x1b1c1cu: goto label_1b1c1c;
        case 0x1b1c20u: goto label_1b1c20;
        case 0x1b1c24u: goto label_1b1c24;
        case 0x1b1c28u: goto label_1b1c28;
        case 0x1b1c2cu: goto label_1b1c2c;
        case 0x1b1c30u: goto label_1b1c30;
        case 0x1b1c34u: goto label_1b1c34;
        case 0x1b1c38u: goto label_1b1c38;
        case 0x1b1c3cu: goto label_1b1c3c;
        case 0x1b1c40u: goto label_1b1c40;
        case 0x1b1c44u: goto label_1b1c44;
        case 0x1b1c48u: goto label_1b1c48;
        case 0x1b1c4cu: goto label_1b1c4c;
        case 0x1b1c50u: goto label_1b1c50;
        case 0x1b1c54u: goto label_1b1c54;
        case 0x1b1c58u: goto label_1b1c58;
        case 0x1b1c5cu: goto label_1b1c5c;
        case 0x1b1c60u: goto label_1b1c60;
        case 0x1b1c64u: goto label_1b1c64;
        case 0x1b1c68u: goto label_1b1c68;
        case 0x1b1c6cu: goto label_1b1c6c;
        case 0x1b1c70u: goto label_1b1c70;
        case 0x1b1c74u: goto label_1b1c74;
        case 0x1b1c78u: goto label_1b1c78;
        case 0x1b1c7cu: goto label_1b1c7c;
        case 0x1b1c80u: goto label_1b1c80;
        case 0x1b1c84u: goto label_1b1c84;
        case 0x1b1c88u: goto label_1b1c88;
        case 0x1b1c8cu: goto label_1b1c8c;
        case 0x1b1c90u: goto label_1b1c90;
        case 0x1b1c94u: goto label_1b1c94;
        case 0x1b1c98u: goto label_1b1c98;
        case 0x1b1c9cu: goto label_1b1c9c;
        case 0x1b1ca0u: goto label_1b1ca0;
        case 0x1b1ca4u: goto label_1b1ca4;
        case 0x1b1ca8u: goto label_1b1ca8;
        case 0x1b1cacu: goto label_1b1cac;
        case 0x1b1cb0u: goto label_1b1cb0;
        case 0x1b1cb4u: goto label_1b1cb4;
        case 0x1b1cb8u: goto label_1b1cb8;
        case 0x1b1cbcu: goto label_1b1cbc;
        case 0x1b1cc0u: goto label_1b1cc0;
        case 0x1b1cc4u: goto label_1b1cc4;
        case 0x1b1cc8u: goto label_1b1cc8;
        case 0x1b1cccu: goto label_1b1ccc;
        case 0x1b1cd0u: goto label_1b1cd0;
        case 0x1b1cd4u: goto label_1b1cd4;
        case 0x1b1cd8u: goto label_1b1cd8;
        case 0x1b1cdcu: goto label_1b1cdc;
        case 0x1b1ce0u: goto label_1b1ce0;
        case 0x1b1ce4u: goto label_1b1ce4;
        case 0x1b1ce8u: goto label_1b1ce8;
        case 0x1b1cecu: goto label_1b1cec;
        case 0x1b1cf0u: goto label_1b1cf0;
        case 0x1b1cf4u: goto label_1b1cf4;
        case 0x1b1cf8u: goto label_1b1cf8;
        case 0x1b1cfcu: goto label_1b1cfc;
        case 0x1b1d00u: goto label_1b1d00;
        case 0x1b1d04u: goto label_1b1d04;
        case 0x1b1d08u: goto label_1b1d08;
        case 0x1b1d0cu: goto label_1b1d0c;
        case 0x1b1d10u: goto label_1b1d10;
        case 0x1b1d14u: goto label_1b1d14;
        case 0x1b1d18u: goto label_1b1d18;
        case 0x1b1d1cu: goto label_1b1d1c;
        case 0x1b1d20u: goto label_1b1d20;
        case 0x1b1d24u: goto label_1b1d24;
        case 0x1b1d28u: goto label_1b1d28;
        case 0x1b1d2cu: goto label_1b1d2c;
        case 0x1b1d30u: goto label_1b1d30;
        case 0x1b1d34u: goto label_1b1d34;
        case 0x1b1d38u: goto label_1b1d38;
        case 0x1b1d3cu: goto label_1b1d3c;
        case 0x1b1d40u: goto label_1b1d40;
        case 0x1b1d44u: goto label_1b1d44;
        case 0x1b1d48u: goto label_1b1d48;
        case 0x1b1d4cu: goto label_1b1d4c;
        case 0x1b1d50u: goto label_1b1d50;
        case 0x1b1d54u: goto label_1b1d54;
        case 0x1b1d58u: goto label_1b1d58;
        case 0x1b1d5cu: goto label_1b1d5c;
        case 0x1b1d60u: goto label_1b1d60;
        case 0x1b1d64u: goto label_1b1d64;
        case 0x1b1d68u: goto label_1b1d68;
        case 0x1b1d6cu: goto label_1b1d6c;
        case 0x1b1d70u: goto label_1b1d70;
        case 0x1b1d74u: goto label_1b1d74;
        case 0x1b1d78u: goto label_1b1d78;
        case 0x1b1d7cu: goto label_1b1d7c;
        case 0x1b1d80u: goto label_1b1d80;
        case 0x1b1d84u: goto label_1b1d84;
        case 0x1b1d88u: goto label_1b1d88;
        case 0x1b1d8cu: goto label_1b1d8c;
        case 0x1b1d90u: goto label_1b1d90;
        case 0x1b1d94u: goto label_1b1d94;
        case 0x1b1d98u: goto label_1b1d98;
        case 0x1b1d9cu: goto label_1b1d9c;
        case 0x1b1da0u: goto label_1b1da0;
        case 0x1b1da4u: goto label_1b1da4;
        case 0x1b1da8u: goto label_1b1da8;
        case 0x1b1dacu: goto label_1b1dac;
        case 0x1b1db0u: goto label_1b1db0;
        case 0x1b1db4u: goto label_1b1db4;
        case 0x1b1db8u: goto label_1b1db8;
        case 0x1b1dbcu: goto label_1b1dbc;
        case 0x1b1dc0u: goto label_1b1dc0;
        case 0x1b1dc4u: goto label_1b1dc4;
        case 0x1b1dc8u: goto label_1b1dc8;
        case 0x1b1dccu: goto label_1b1dcc;
        case 0x1b1dd0u: goto label_1b1dd0;
        case 0x1b1dd4u: goto label_1b1dd4;
        case 0x1b1dd8u: goto label_1b1dd8;
        case 0x1b1ddcu: goto label_1b1ddc;
        case 0x1b1de0u: goto label_1b1de0;
        case 0x1b1de4u: goto label_1b1de4;
        case 0x1b1de8u: goto label_1b1de8;
        case 0x1b1decu: goto label_1b1dec;
        case 0x1b1df0u: goto label_1b1df0;
        case 0x1b1df4u: goto label_1b1df4;
        case 0x1b1df8u: goto label_1b1df8;
        case 0x1b1dfcu: goto label_1b1dfc;
        case 0x1b1e00u: goto label_1b1e00;
        case 0x1b1e04u: goto label_1b1e04;
        case 0x1b1e08u: goto label_1b1e08;
        case 0x1b1e0cu: goto label_1b1e0c;
        case 0x1b1e10u: goto label_1b1e10;
        case 0x1b1e14u: goto label_1b1e14;
        case 0x1b1e18u: goto label_1b1e18;
        case 0x1b1e1cu: goto label_1b1e1c;
        case 0x1b1e20u: goto label_1b1e20;
        case 0x1b1e24u: goto label_1b1e24;
        case 0x1b1e28u: goto label_1b1e28;
        case 0x1b1e2cu: goto label_1b1e2c;
        case 0x1b1e30u: goto label_1b1e30;
        case 0x1b1e34u: goto label_1b1e34;
        case 0x1b1e38u: goto label_1b1e38;
        case 0x1b1e3cu: goto label_1b1e3c;
        case 0x1b1e40u: goto label_1b1e40;
        case 0x1b1e44u: goto label_1b1e44;
        case 0x1b1e48u: goto label_1b1e48;
        case 0x1b1e4cu: goto label_1b1e4c;
        case 0x1b1e50u: goto label_1b1e50;
        case 0x1b1e54u: goto label_1b1e54;
        case 0x1b1e58u: goto label_1b1e58;
        case 0x1b1e5cu: goto label_1b1e5c;
        default: break;
    }

    ctx->pc = 0x1b1af8u;

label_1b1af8:
    // 0x1b1af8: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x1b1af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
label_1b1afc:
    // 0x1b1afc: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1b1afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1b1b00:
    // 0x1b1b00: 0x7fb20170  sq          $s2, 0x170($sp)
    ctx->pc = 0x1b1b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 18));
label_1b1b04:
    // 0x1b1b04: 0xe7b601b0  swc1        $f22, 0x1B0($sp)
    ctx->pc = 0x1b1b04u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
label_1b1b08:
    // 0x1b1b08: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b1b08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b1b0c:
    // 0x1b1b0c: 0x7fb00190  sq          $s0, 0x190($sp)
    ctx->pc = 0x1b1b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 16));
label_1b1b10:
    // 0x1b1b10: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x1b1b10u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
label_1b1b14:
    // 0x1b1b14: 0x7fb10180  sq          $s1, 0x180($sp)
    ctx->pc = 0x1b1b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 17));
label_1b1b18:
    // 0x1b1b18: 0x7fb30160  sq          $s3, 0x160($sp)
    ctx->pc = 0x1b1b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 19));
label_1b1b1c:
    // 0x1b1b1c: 0x7fb40150  sq          $s4, 0x150($sp)
    ctx->pc = 0x1b1b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 20));
label_1b1b20:
    // 0x1b1b20: 0x7fb50140  sq          $s5, 0x140($sp)
    ctx->pc = 0x1b1b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 21));
label_1b1b24:
    // 0x1b1b24: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x1b1b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
label_1b1b28:
    // 0x1b1b28: 0xe7b501a8  swc1        $f21, 0x1A8($sp)
    ctx->pc = 0x1b1b28u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
label_1b1b2c:
    // 0x1b1b2c: 0xe7b401a0  swc1        $f20, 0x1A0($sp)
    ctx->pc = 0x1b1b2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_1b1b30:
    // 0x1b1b30: 0x8e43022c  lw          $v1, 0x22C($s2)
    ctx->pc = 0x1b1b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 556)));
label_1b1b34:
    // 0x1b1b34: 0xa3a20112  sb          $v0, 0x112($sp)
    ctx->pc = 0x1b1b34u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 274), (uint8_t)GPR_U32(ctx, 2));
label_1b1b38:
    // 0x1b1b38: 0xa3a20113  sb          $v0, 0x113($sp)
    ctx->pc = 0x1b1b38u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 275), (uint8_t)GPR_U32(ctx, 2));
label_1b1b3c:
    // 0x1b1b3c: 0xa3a20110  sb          $v0, 0x110($sp)
    ctx->pc = 0x1b1b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 272), (uint8_t)GPR_U32(ctx, 2));
label_1b1b40:
    // 0x1b1b40: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1b1b44:
    if (ctx->pc == 0x1B1B44u) {
        ctx->pc = 0x1B1B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B40u;
        // 0x1b1b44: 0xa3a20111  sb          $v0, 0x111($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 273), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1B48u;
        goto label_1b1b48;
    }
    ctx->pc = 0x1B1B40u;
    {
        const bool branch_taken_0x1b1b40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B40u;
        // 0x1b1b44: 0xa3a20111  sb          $v0, 0x111($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 273), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1b40) {
            ctx->pc = 0x1B1B54u;
            goto label_1b1b54;
        }
    }
    ctx->pc = 0x1B1B48u;
label_1b1b48:
    // 0x1b1b48: 0x8e420234  lw          $v0, 0x234($s2)
    ctx->pc = 0x1b1b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 564)));
label_1b1b4c:
    // 0x1b1b4c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1b1b50:
    if (ctx->pc == 0x1B1B50u) {
        ctx->pc = 0x1B1B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B4Cu;
        // 0x1b1b50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1B54u;
        goto label_1b1b54;
    }
    ctx->pc = 0x1B1B4Cu;
    {
        const bool branch_taken_0x1b1b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B4Cu;
        // 0x1b1b50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1b4c) {
            ctx->pc = 0x1B1B58u;
            goto label_1b1b58;
        }
    }
    ctx->pc = 0x1B1B54u;
label_1b1b54:
    // 0x1b1b54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b1b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b1b58:
    // 0x1b1b58: 0xc06ccfe  jal         func_1B33F8
label_1b1b5c:
    if (ctx->pc == 0x1B1B5Cu) {
        ctx->pc = 0x1B1B60u;
        goto label_1b1b60;
    }
    ctx->pc = 0x1B1B58u;
    SET_GPR_U32(ctx, 31, 0x1B1B60u);
    ctx->pc = 0x1B33F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B33F8u, 0x1B1B58u, 0x1B1B60u)) {
        return;
    }
    ctx->pc = 0x1B1B60u;
label_1b1b60:
    // 0x1b1b60: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b1b60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b1b64:
    // 0x1b1b64: 0x8cc20050  lw          $v0, 0x50($a2)
    ctx->pc = 0x1b1b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
label_1b1b68:
    // 0x1b1b68: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x1b1b68u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
label_1b1b6c:
    // 0x1b1b6c: 0x361000ff  ori         $s0, $s0, 0xFF
    ctx->pc = 0x1b1b6cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)255);
label_1b1b70:
    // 0x1b1b70: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x1b1b70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_1b1b74:
    // 0x1b1b74: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x1b1b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_1b1b78:
    // 0x1b1b78: 0x24710fd8  addiu       $s1, $v1, 0xFD8
    ctx->pc = 0x1b1b78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4056));
label_1b1b7c:
    // 0x1b1b7c: 0x34423300  ori         $v0, $v0, 0x3300
    ctx->pc = 0x1b1b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13056);
label_1b1b80:
    // 0x1b1b80: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1b1b80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1b1b84:
    // 0x1b1b84: 0xacc20050  sw          $v0, 0x50($a2)
    ctx->pc = 0x1b1b84u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 80), GPR_U32(ctx, 2));
label_1b1b88:
    // 0x1b1b88: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x1b1b88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1b1b8c:
    // 0x1b1b8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b1b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b1b90:
    // 0x1b1b90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b1b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b1b94:
    // 0x1b1b94: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b1b94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1b1b98:
    // 0x1b1b98: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1b1b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1b1b9c:
    // 0x1b1b9c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1b1b9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1b1ba0:
    // 0x1b1ba0: 0x40f809  jalr        $v0
label_1b1ba4:
    if (ctx->pc == 0x1B1BA4u) {
        ctx->pc = 0x1B1BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1BA0u;
        // 0x1b1ba4: 0x2633fff0  addiu       $s3, $s1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1BA8u;
        goto label_1b1ba8;
    }
    ctx->pc = 0x1B1BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B1BA8u);
        ctx->pc = 0x1B1BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1BA0u;
        // 0x1b1ba4: 0x2633fff0  addiu       $s3, $s1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1BA0u, 0x1B1BA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B1BA8u;
label_1b1ba8:
    // 0x1b1ba8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1b1ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1b1bac:
    // 0x1b1bac: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1b1bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1b1bb0:
    // 0x1b1bb0: 0x40f809  jalr        $v0
label_1b1bb4:
    if (ctx->pc == 0x1B1BB4u) {
        ctx->pc = 0x1B1BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1BB0u;
        // 0x1b1bb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1BB8u;
        goto label_1b1bb8;
    }
    ctx->pc = 0x1B1BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B1BB8u);
        ctx->pc = 0x1B1BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1BB0u;
        // 0x1b1bb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1BB0u, 0x1B1BB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B1BB8u;
label_1b1bb8:
    // 0x1b1bb8: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x1b1bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
label_1b1bbc:
    // 0x1b1bbc: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1b1bbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1b1bc0:
    // 0x1b1bc0: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x1b1bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1b1bc4:
    // 0x1b1bc4: 0xc6700018  lwc1        $f16, 0x18($s3)
    ctx->pc = 0x1b1bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_1b1bc8:
    // 0x1b1bc8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b1bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1b1bcc:
    // 0x1b1bcc: 0x3c014360  lui         $at, 0x4360
    ctx->pc = 0x1b1bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17248 << 16));
label_1b1bd0:
    // 0x1b1bd0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b1bd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b1bd4:
    // 0x1b1bd4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1b1bd4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b1bd8:
    // 0x1b1bd8: 0x3c0143b5  lui         $at, 0x43B5
    ctx->pc = 0x1b1bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17333 << 16));
label_1b1bdc:
    // 0x1b1bdc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1b1bdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b1be0:
    // 0x1b1be0: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x1b1be0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
label_1b1be4:
    // 0x1b1be4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1b1be4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1b1be8:
    // 0x1b1be8: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1b1be8u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
label_1b1bec:
    // 0x1b1bec: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x1b1becu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1b1bf0:
    // 0x1b1bf0: 0x4600ac86  mov.s       $f18, $f21
    ctx->pc = 0x1b1bf0u;
    ctx->f[18] = FPU_MOV_S(ctx->f[21]);
label_1b1bf4:
    // 0x1b1bf4: 0x4600acc6  mov.s       $f19, $f21
    ctx->pc = 0x1b1bf4u;
    ctx->f[19] = FPU_MOV_S(ctx->f[21]);
label_1b1bf8:
    // 0x1b1bf8: 0xc06ce2a  jal         func_1B38A8
label_1b1bfc:
    if (ctx->pc == 0x1B1BFCu) {
        ctx->pc = 0x1B1BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1BF8u;
        // 0x1b1bfc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1C00u;
        goto label_1b1c00;
    }
    ctx->pc = 0x1B1BF8u;
    SET_GPR_U32(ctx, 31, 0x1B1C00u);
    ctx->pc = 0x1B1BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1BF8u;
    // 0x1b1bfc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1B1BF8u, 0x1B1C00u)) {
        return;
    }
    ctx->pc = 0x1B1C00u;
label_1b1c00:
    // 0x1b1c00: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b1c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1b1c04:
    // 0x1b1c04: 0xc06cff8  jal         func_1B3FE0
label_1b1c08:
    if (ctx->pc == 0x1B1C08u) {
        ctx->pc = 0x1B1C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C04u;
        // 0x1b1c08: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1C0Cu;
        goto label_1b1c0c;
    }
    ctx->pc = 0x1B1C04u;
    SET_GPR_U32(ctx, 31, 0x1B1C0Cu);
    ctx->pc = 0x1B1C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1C04u;
    // 0x1b1c08: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1B1C04u, 0x1B1C0Cu)) {
        return;
    }
    ctx->pc = 0x1B1C0Cu;
label_1b1c0c:
    // 0x1b1c0c: 0x8e42022c  lw          $v0, 0x22C($s2)
    ctx->pc = 0x1b1c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 556)));
label_1b1c10:
    // 0x1b1c10: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1b1c14:
    if (ctx->pc == 0x1B1C14u) {
        ctx->pc = 0x1B1C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C10u;
        // 0x1b1c14: 0x8e420234  lw          $v0, 0x234($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 564)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1C18u;
        goto label_1b1c18;
    }
    ctx->pc = 0x1B1C10u;
    {
        const bool branch_taken_0x1b1c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C10u;
        // 0x1b1c14: 0x8e420234  lw          $v0, 0x234($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 564)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1c10) {
            ctx->pc = 0x1B1C20u;
            goto label_1b1c20;
        }
    }
    ctx->pc = 0x1B1C18u;
label_1b1c18:
    // 0x1b1c18: 0x5040003e  beql        $v0, $zero, . + 4 + (0x3E << 2)
label_1b1c1c:
    if (ctx->pc == 0x1B1C1Cu) {
        ctx->pc = 0x1B1C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C18u;
        // 0x1b1c1c: 0xae40022c  sw          $zero, 0x22C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 556), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1C20u;
        goto label_1b1c20;
    }
    ctx->pc = 0x1B1C18u;
    {
        const bool branch_taken_0x1b1c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1c18) {
            ctx->pc = 0x1B1C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1C18u;
            // 0x1b1c1c: 0xae40022c  sw          $zero, 0x22C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 556), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1D14u;
            goto label_1b1d14;
        }
    }
    ctx->pc = 0x1B1C20u;
label_1b1c20:
    // 0x1b1c20: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1b1c24:
    if (ctx->pc == 0x1B1C24u) {
        ctx->pc = 0x1B1C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C20u;
        // 0x1b1c24: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1C28u;
        goto label_1b1c28;
    }
    ctx->pc = 0x1B1C20u;
    {
        const bool branch_taken_0x1b1c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C20u;
        // 0x1b1c24: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1c20) {
            ctx->pc = 0x1B1C34u;
            goto label_1b1c34;
        }
    }
    ctx->pc = 0x1B1C28u;
label_1b1c28:
    // 0x1b1c28: 0xa3a20112  sb          $v0, 0x112($sp)
    ctx->pc = 0x1b1c28u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 274), (uint8_t)GPR_U32(ctx, 2));
label_1b1c2c:
    // 0x1b1c2c: 0xa3a20110  sb          $v0, 0x110($sp)
    ctx->pc = 0x1b1c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 272), (uint8_t)GPR_U32(ctx, 2));
label_1b1c30:
    // 0x1b1c30: 0xa3a20111  sb          $v0, 0x111($sp)
    ctx->pc = 0x1b1c30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 273), (uint8_t)GPR_U32(ctx, 2));
label_1b1c34:
    // 0x1b1c34: 0xc06ccfe  jal         func_1B33F8
label_1b1c38:
    if (ctx->pc == 0x1B1C38u) {
        ctx->pc = 0x1B1C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C34u;
        // 0x1b1c38: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1C3Cu;
        goto label_1b1c3c;
    }
    ctx->pc = 0x1B1C34u;
    SET_GPR_U32(ctx, 31, 0x1B1C3Cu);
    ctx->pc = 0x1B1C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1C34u;
    // 0x1b1c38: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B33F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B33F8u, 0x1B1C34u, 0x1B1C3Cu)) {
        return;
    }
    ctx->pc = 0x1B1C3Cu;
label_1b1c3c:
    // 0x1b1c3c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b1c3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b1c40:
    // 0x1b1c40: 0x8cc20050  lw          $v0, 0x50($a2)
    ctx->pc = 0x1b1c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
label_1b1c44:
    // 0x1b1c44: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1b1c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1b1c48:
    // 0x1b1c48: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x1b1c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_1b1c4c:
    // 0x1b1c4c: 0x34423300  ori         $v0, $v0, 0x3300
    ctx->pc = 0x1b1c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13056);
label_1b1c50:
    // 0x1b1c50: 0xacc20050  sw          $v0, 0x50($a2)
    ctx->pc = 0x1b1c50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 80), GPR_U32(ctx, 2));
label_1b1c54:
    // 0x1b1c54: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1b1c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1b1c58:
    // 0x1b1c58: 0x40f809  jalr        $v0
label_1b1c5c:
    if (ctx->pc == 0x1B1C5Cu) {
        ctx->pc = 0x1B1C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C58u;
        // 0x1b1c5c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1C60u;
        goto label_1b1c60;
    }
    ctx->pc = 0x1B1C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B1C60u);
        ctx->pc = 0x1B1C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C58u;
        // 0x1b1c5c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1C58u, 0x1B1C60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B1C60u;
label_1b1c60:
    // 0x1b1c60: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1b1c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1b1c64:
    // 0x1b1c64: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1b1c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1b1c68:
    // 0x1b1c68: 0x40f809  jalr        $v0
label_1b1c6c:
    if (ctx->pc == 0x1B1C6Cu) {
        ctx->pc = 0x1B1C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C68u;
        // 0x1b1c6c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1C70u;
        goto label_1b1c70;
    }
    ctx->pc = 0x1B1C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B1C70u);
        ctx->pc = 0x1B1C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C68u;
        // 0x1b1c6c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1C68u, 0x1B1C70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B1C70u;
label_1b1c70:
    // 0x1b1c70: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1b1c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1b1c74:
    // 0x1b1c74: 0x27a50124  addiu       $a1, $sp, 0x124
    ctx->pc = 0x1b1c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
label_1b1c78:
    // 0x1b1c78: 0x40f809  jalr        $v0
label_1b1c7c:
    if (ctx->pc == 0x1B1C7Cu) {
        ctx->pc = 0x1B1C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C78u;
        // 0x1b1c7c: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1C80u;
        goto label_1b1c80;
    }
    ctx->pc = 0x1B1C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B1C80u);
        ctx->pc = 0x1B1C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C78u;
        // 0x1b1c7c: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1C78u, 0x1B1C80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B1C80u;
label_1b1c80:
    // 0x1b1c80: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1b1c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1b1c84:
    // 0x1b1c84: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1b1c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1b1c88:
    // 0x1b1c88: 0x40f809  jalr        $v0
label_1b1c8c:
    if (ctx->pc == 0x1B1C8Cu) {
        ctx->pc = 0x1B1C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C88u;
        // 0x1b1c8c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1C90u;
        goto label_1b1c90;
    }
    ctx->pc = 0x1B1C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B1C90u);
        ctx->pc = 0x1B1C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C88u;
        // 0x1b1c8c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1C88u, 0x1B1C90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B1C90u;
label_1b1c90:
    // 0x1b1c90: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1b1c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1b1c94:
    // 0x1b1c94: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1b1c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1b1c98:
    // 0x1b1c98: 0x40f809  jalr        $v0
label_1b1c9c:
    if (ctx->pc == 0x1B1C9Cu) {
        ctx->pc = 0x1B1C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C98u;
        // 0x1b1c9c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1CA0u;
        goto label_1b1ca0;
    }
    ctx->pc = 0x1B1C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B1CA0u);
        ctx->pc = 0x1B1C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C98u;
        // 0x1b1c9c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1C98u, 0x1B1CA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B1CA0u;
label_1b1ca0:
    // 0x1b1ca0: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x1b1ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
label_1b1ca4:
    // 0x1b1ca4: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1b1ca4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1b1ca8:
    // 0x1b1ca8: 0x4600ac86  mov.s       $f18, $f21
    ctx->pc = 0x1b1ca8u;
    ctx->f[18] = FPU_MOV_S(ctx->f[21]);
label_1b1cac:
    // 0x1b1cac: 0xc6700018  lwc1        $f16, 0x18($s3)
    ctx->pc = 0x1b1cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_1b1cb0:
    // 0x1b1cb0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b1cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1b1cb4:
    // 0x1b1cb4: 0x3c01435c  lui         $at, 0x435C
    ctx->pc = 0x1b1cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17244 << 16));
label_1b1cb8:
    // 0x1b1cb8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b1cb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b1cbc:
    // 0x1b1cbc: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1b1cbcu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
label_1b1cc0:
    // 0x1b1cc0: 0x3c0143b3  lui         $at, 0x43B3
    ctx->pc = 0x1b1cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17331 << 16));
label_1b1cc4:
    // 0x1b1cc4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1b1cc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b1cc8:
    // 0x1b1cc8: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x1b1cc8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
label_1b1ccc:
    // 0x1b1ccc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1b1cccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1b1cd0:
    // 0x1b1cd0: 0x460094c6  mov.s       $f19, $f18
    ctx->pc = 0x1b1cd0u;
    ctx->f[19] = FPU_MOV_S(ctx->f[18]);
label_1b1cd4:
    // 0x1b1cd4: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x1b1cd4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1b1cd8:
    // 0x1b1cd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b1cd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b1cdc:
    // 0x1b1cdc: 0xc06ce2a  jal         func_1B38A8
label_1b1ce0:
    if (ctx->pc == 0x1B1CE0u) {
        ctx->pc = 0x1B1CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1CDCu;
        // 0x1b1ce0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1CE4u;
        goto label_1b1ce4;
    }
    ctx->pc = 0x1B1CDCu;
    SET_GPR_U32(ctx, 31, 0x1B1CE4u);
    ctx->pc = 0x1B1CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1CDCu;
    // 0x1b1ce0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1B1CDCu, 0x1B1CE4u)) {
        return;
    }
    ctx->pc = 0x1B1CE4u;
label_1b1ce4:
    // 0x1b1ce4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b1ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1b1ce8:
    // 0x1b1ce8: 0xc06cff8  jal         func_1B3FE0
label_1b1cec:
    if (ctx->pc == 0x1B1CECu) {
        ctx->pc = 0x1B1CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1CE8u;
        // 0x1b1cec: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1CF0u;
        goto label_1b1cf0;
    }
    ctx->pc = 0x1B1CE8u;
    SET_GPR_U32(ctx, 31, 0x1B1CF0u);
    ctx->pc = 0x1B1CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1CE8u;
    // 0x1b1cec: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1B1CE8u, 0x1B1CF0u)) {
        return;
    }
    ctx->pc = 0x1B1CF0u;
label_1b1cf0:
    // 0x1b1cf0: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x1b1cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_1b1cf4:
    // 0x1b1cf4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1b1cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1b1cf8:
    // 0x1b1cf8: 0x40f809  jalr        $v0
label_1b1cfc:
    if (ctx->pc == 0x1B1CFCu) {
        ctx->pc = 0x1B1CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1CF8u;
        // 0x1b1cfc: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1D00u;
        goto label_1b1d00;
    }
    ctx->pc = 0x1B1CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B1D00u);
        ctx->pc = 0x1B1CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1CF8u;
        // 0x1b1cfc: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1CF8u, 0x1B1D00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B1D00u;
label_1b1d00:
    // 0x1b1d00: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1b1d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1b1d04:
    // 0x1b1d04: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1b1d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1b1d08:
    // 0x1b1d08: 0x40f809  jalr        $v0
label_1b1d0c:
    if (ctx->pc == 0x1B1D0Cu) {
        ctx->pc = 0x1B1D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1D08u;
        // 0x1b1d0c: 0x8fa50124  lw          $a1, 0x124($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1D10u;
        goto label_1b1d10;
    }
    ctx->pc = 0x1B1D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B1D10u);
        ctx->pc = 0x1B1D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1D08u;
        // 0x1b1d0c: 0x8fa50124  lw          $a1, 0x124($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1D08u, 0x1B1D10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B1D10u;
label_1b1d10:
    // 0x1b1d10: 0xae40022c  sw          $zero, 0x22C($s2)
    ctx->pc = 0x1b1d10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 556), GPR_U32(ctx, 0));
label_1b1d14:
    // 0x1b1d14: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1b1d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1b1d18:
    // 0x1b1d18: 0xa3a20110  sb          $v0, 0x110($sp)
    ctx->pc = 0x1b1d18u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 272), (uint8_t)GPR_U32(ctx, 2));
label_1b1d1c:
    // 0x1b1d1c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1b1d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1b1d20:
    // 0x1b1d20: 0xa3a20113  sb          $v0, 0x113($sp)
    ctx->pc = 0x1b1d20u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 275), (uint8_t)GPR_U32(ctx, 2));
label_1b1d24:
    // 0x1b1d24: 0x26b10fd8  addiu       $s1, $s5, 0xFD8
    ctx->pc = 0x1b1d24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 4056));
label_1b1d28:
    // 0x1b1d28: 0xa3a20112  sb          $v0, 0x112($sp)
    ctx->pc = 0x1b1d28u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 274), (uint8_t)GPR_U32(ctx, 2));
label_1b1d2c:
    // 0x1b1d2c: 0x3c100034  lui         $s0, 0x34
    ctx->pc = 0x1b1d2cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
label_1b1d30:
    // 0x1b1d30: 0xc06ccfe  jal         func_1B33F8
label_1b1d34:
    if (ctx->pc == 0x1B1D34u) {
        ctx->pc = 0x1B1D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1D30u;
        // 0x1b1d34: 0xa3a20111  sb          $v0, 0x111($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 273), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1D38u;
        goto label_1b1d38;
    }
    ctx->pc = 0x1B1D30u;
    SET_GPR_U32(ctx, 31, 0x1B1D38u);
    ctx->pc = 0x1B1D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1D30u;
    // 0x1b1d34: 0xa3a20111  sb          $v0, 0x111($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 273), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B33F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B33F8u, 0x1B1D30u, 0x1B1D38u)) {
        return;
    }
    ctx->pc = 0x1B1D38u;
label_1b1d38:
    // 0x1b1d38: 0x3c0143af  lui         $at, 0x43AF
    ctx->pc = 0x1b1d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17327 << 16));
label_1b1d3c:
    // 0x1b1d3c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b1d3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1b1d40:
    // 0x1b1d40: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b1d40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b1d44:
    // 0x1b1d44: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1b1d44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_1b1d48:
    // 0x1b1d48: 0x8cc20050  lw          $v0, 0x50($a2)
    ctx->pc = 0x1b1d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
label_1b1d4c:
    // 0x1b1d4c: 0x346300ff  ori         $v1, $v1, 0xFF
    ctx->pc = 0x1b1d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
label_1b1d50:
    // 0x1b1d50: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1b1d50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1b1d54:
    // 0x1b1d54: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1b1d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1b1d58:
    // 0x1b1d58: 0x34423300  ori         $v0, $v0, 0x3300
    ctx->pc = 0x1b1d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13056);
label_1b1d5c:
    // 0x1b1d5c: 0xacc20050  sw          $v0, 0x50($a2)
    ctx->pc = 0x1b1d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 80), GPR_U32(ctx, 2));
label_1b1d60:
    // 0x1b1d60: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1b1d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1b1d64:
    // 0x1b1d64: 0x40f809  jalr        $v0
label_1b1d68:
    if (ctx->pc == 0x1B1D68u) {
        ctx->pc = 0x1B1D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1D64u;
        // 0x1b1d68: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1D6Cu;
        goto label_1b1d6c;
    }
    ctx->pc = 0x1B1D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B1D6Cu);
        ctx->pc = 0x1B1D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1D64u;
        // 0x1b1d68: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1D64u, 0x1B1D6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B1D6Cu;
label_1b1d6c:
    // 0x1b1d6c: 0xc60c91ec  lwc1        $f12, -0x6E14($s0)
    ctx->pc = 0x1b1d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294939116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b1d70:
    // 0x1b1d70: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1b1d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_1b1d74:
    // 0x1b1d74: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1b1d74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
label_1b1d78:
    // 0x1b1d78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b1d78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b1d7c:
    // 0x1b1d7c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x1b1d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
label_1b1d80:
    // 0x1b1d80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b1d80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b1d84:
    // 0x1b1d84: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1b1d84u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_1b1d88:
    // 0x1b1d88: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x1b1d88u;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[12], ctx->f[1]);
label_1b1d8c:
    // 0x1b1d8c: 0xc09b164  jal         func_26C590
label_1b1d90:
    if (ctx->pc == 0x1B1D90u) {
        ctx->pc = 0x1B1D94u;
        goto label_1b1d94;
    }
    ctx->pc = 0x1B1D8Cu;
    SET_GPR_U32(ctx, 31, 0x1B1D94u);
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x1B1D8Cu, 0x1B1D94u)) {
        return;
    }
    ctx->pc = 0x1B1D94u;
label_1b1d94:
    // 0x1b1d94: 0x3c0144e1  lui         $at, 0x44E1
    ctx->pc = 0x1b1d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17633 << 16));
label_1b1d98:
    // 0x1b1d98: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b1d98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b1d9c:
    // 0x1b1d9c: 0xc60391ec  lwc1        $f3, -0x6E14($s0)
    ctx->pc = 0x1b1d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294939116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b1da0:
    // 0x1b1da0: 0x4602b082  mul.s       $f2, $f22, $f2
    ctx->pc = 0x1b1da0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[2]);
label_1b1da4:
    // 0x1b1da4: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1b1da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_1b1da8:
    // 0x1b1da8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b1da8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b1dac:
    // 0x1b1dac: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x1b1dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
label_1b1db0:
    // 0x1b1db0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b1db0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b1db4:
    // 0x1b1db4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b1db4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1b1db8:
    // 0x1b1db8: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x1b1db8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_1b1dbc:
    // 0x1b1dbc: 0x46140500  add.s       $f20, $f0, $f20
    ctx->pc = 0x1b1dbcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_1b1dc0:
    // 0x1b1dc0: 0x46026034  c.lt.s      $f12, $f2
    ctx->pc = 0x1b1dc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b1dc4:
    // 0x1b1dc4: 0x0  nop
    ctx->pc = 0x1b1dc4u;
    // NOP
label_1b1dc8:
    // 0x1b1dc8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1b1dcc:
    if (ctx->pc == 0x1B1DCCu) {
        ctx->pc = 0x1B1DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1DC8u;
        // 0x1b1dcc: 0xe60291ec  swc1        $f2, -0x6E14($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294939116), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1DD0u;
        goto label_1b1dd0;
    }
    ctx->pc = 0x1B1DC8u;
    {
        const bool branch_taken_0x1b1dc8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B1DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1DC8u;
        // 0x1b1dcc: 0xe60291ec  swc1        $f2, -0x6E14($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294939116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1dc8) {
            ctx->pc = 0x1B1DD8u;
            goto label_1b1dd8;
        }
    }
    ctx->pc = 0x1B1DD0u;
label_1b1dd0:
    // 0x1b1dd0: 0x460c1001  sub.s       $f0, $f2, $f12
    ctx->pc = 0x1b1dd0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
label_1b1dd4:
    // 0x1b1dd4: 0xe60091ec  swc1        $f0, -0x6E14($s0)
    ctx->pc = 0x1b1dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294939116), bits); }
label_1b1dd8:
    // 0x1b1dd8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b1dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b1ddc:
    // 0x1b1ddc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b1ddcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b1de0:
    // 0x1b1de0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1b1de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b1de4:
    // 0x1b1de4: 0x3c0141c0  lui         $at, 0x41C0
    ctx->pc = 0x1b1de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16832 << 16));
label_1b1de8:
    // 0x1b1de8: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1b1de8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1b1dec:
    // 0x1b1dec: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1b1decu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_1b1df0:
    // 0x1b1df0: 0x44809000  mtc1        $zero, $f18
    ctx->pc = 0x1b1df0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_1b1df4:
    // 0x1b1df4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b1df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1b1df8:
    // 0x1b1df8: 0xc6300008  lwc1        $f16, 0x8($s1)
    ctx->pc = 0x1b1df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_1b1dfc:
    // 0x1b1dfc: 0x46000446  mov.s       $f17, $f0
    ctx->pc = 0x1b1dfcu;
    ctx->f[17] = FPU_MOV_S(ctx->f[0]);
label_1b1e00:
    // 0x1b1e00: 0x3c014364  lui         $at, 0x4364
    ctx->pc = 0x1b1e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17252 << 16));
label_1b1e04:
    // 0x1b1e04: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b1e04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b1e08:
    // 0x1b1e08: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x1b1e08u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
label_1b1e0c:
    // 0x1b1e0c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1b1e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1b1e10:
    // 0x1b1e10: 0x460094c6  mov.s       $f19, $f18
    ctx->pc = 0x1b1e10u;
    ctx->f[19] = FPU_MOV_S(ctx->f[18]);
label_1b1e14:
    // 0x1b1e14: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1b1e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1b1e18:
    // 0x1b1e18: 0xc06ce2a  jal         func_1B38A8
label_1b1e1c:
    if (ctx->pc == 0x1B1E1Cu) {
        ctx->pc = 0x1B1E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1E18u;
        // 0x1b1e1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1E20u;
        goto label_1b1e20;
    }
    ctx->pc = 0x1B1E18u;
    SET_GPR_U32(ctx, 31, 0x1B1E20u);
    ctx->pc = 0x1B1E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1E18u;
    // 0x1b1e1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1B1E18u, 0x1B1E20u)) {
        return;
    }
    ctx->pc = 0x1B1E20u;
label_1b1e20:
    // 0x1b1e20: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b1e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1b1e24:
    // 0x1b1e24: 0xc06cff8  jal         func_1B3FE0
label_1b1e28:
    if (ctx->pc == 0x1B1E28u) {
        ctx->pc = 0x1B1E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1E24u;
        // 0x1b1e28: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1E2Cu;
        goto label_1b1e2c;
    }
    ctx->pc = 0x1B1E24u;
    SET_GPR_U32(ctx, 31, 0x1B1E2Cu);
    ctx->pc = 0x1B1E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1E24u;
    // 0x1b1e28: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1B1E24u, 0x1B1E2Cu)) {
        return;
    }
    ctx->pc = 0x1B1E2Cu;
label_1b1e2c:
    // 0x1b1e2c: 0x7bb00190  lq          $s0, 0x190($sp)
    ctx->pc = 0x1b1e2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_1b1e30:
    // 0x1b1e30: 0x7bb10180  lq          $s1, 0x180($sp)
    ctx->pc = 0x1b1e30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_1b1e34:
    // 0x1b1e34: 0x7bb20170  lq          $s2, 0x170($sp)
    ctx->pc = 0x1b1e34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_1b1e38:
    // 0x1b1e38: 0x7bb30160  lq          $s3, 0x160($sp)
    ctx->pc = 0x1b1e38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_1b1e3c:
    // 0x1b1e3c: 0x7bb40150  lq          $s4, 0x150($sp)
    ctx->pc = 0x1b1e3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_1b1e40:
    // 0x1b1e40: 0x7bb50140  lq          $s5, 0x140($sp)
    ctx->pc = 0x1b1e40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_1b1e44:
    // 0x1b1e44: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x1b1e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_1b1e48:
    // 0x1b1e48: 0xc7b601b0  lwc1        $f22, 0x1B0($sp)
    ctx->pc = 0x1b1e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1b1e4c:
    // 0x1b1e4c: 0xc7b501a8  lwc1        $f21, 0x1A8($sp)
    ctx->pc = 0x1b1e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1b1e50:
    // 0x1b1e50: 0xc7b401a0  lwc1        $f20, 0x1A0($sp)
    ctx->pc = 0x1b1e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1b1e54:
    // 0x1b1e54: 0x3e00008  jr          $ra
label_1b1e58:
    if (ctx->pc == 0x1B1E58u) {
        ctx->pc = 0x1B1E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1E54u;
        // 0x1b1e58: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1E5Cu;
        goto label_1b1e5c;
    }
    ctx->pc = 0x1B1E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1E54u;
        // 0x1b1e58: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1E5Cu;
label_1b1e5c:
    // 0x1b1e5c: 0x0  nop
    ctx->pc = 0x1b1e5cu;
    // NOP
    ctx->pc = 0x1b1e60u;
}
