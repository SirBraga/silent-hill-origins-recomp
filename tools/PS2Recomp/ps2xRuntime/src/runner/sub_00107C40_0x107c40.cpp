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

// Function: sub_00107C40
// Address: 0x107c40 - 0x107d20
void sub_00107C40_0x107c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107C40_0x107c40");
#endif

    switch (ctx->pc) {
        case 0x107c40u: goto label_107c40;
        case 0x107c44u: goto label_107c44;
        case 0x107c48u: goto label_107c48;
        case 0x107c4cu: goto label_107c4c;
        case 0x107c50u: goto label_107c50;
        case 0x107c54u: goto label_107c54;
        case 0x107c58u: goto label_107c58;
        case 0x107c5cu: goto label_107c5c;
        case 0x107c60u: goto label_107c60;
        case 0x107c64u: goto label_107c64;
        case 0x107c68u: goto label_107c68;
        case 0x107c6cu: goto label_107c6c;
        case 0x107c70u: goto label_107c70;
        case 0x107c74u: goto label_107c74;
        case 0x107c78u: goto label_107c78;
        case 0x107c7cu: goto label_107c7c;
        case 0x107c80u: goto label_107c80;
        case 0x107c84u: goto label_107c84;
        case 0x107c88u: goto label_107c88;
        case 0x107c8cu: goto label_107c8c;
        case 0x107c90u: goto label_107c90;
        case 0x107c94u: goto label_107c94;
        case 0x107c98u: goto label_107c98;
        case 0x107c9cu: goto label_107c9c;
        case 0x107ca0u: goto label_107ca0;
        case 0x107ca4u: goto label_107ca4;
        case 0x107ca8u: goto label_107ca8;
        case 0x107cacu: goto label_107cac;
        case 0x107cb0u: goto label_107cb0;
        case 0x107cb4u: goto label_107cb4;
        case 0x107cb8u: goto label_107cb8;
        case 0x107cbcu: goto label_107cbc;
        case 0x107cc0u: goto label_107cc0;
        case 0x107cc4u: goto label_107cc4;
        case 0x107cc8u: goto label_107cc8;
        case 0x107cccu: goto label_107ccc;
        case 0x107cd0u: goto label_107cd0;
        case 0x107cd4u: goto label_107cd4;
        case 0x107cd8u: goto label_107cd8;
        case 0x107cdcu: goto label_107cdc;
        case 0x107ce0u: goto label_107ce0;
        case 0x107ce4u: goto label_107ce4;
        case 0x107ce8u: goto label_107ce8;
        case 0x107cecu: goto label_107cec;
        case 0x107cf0u: goto label_107cf0;
        case 0x107cf4u: goto label_107cf4;
        case 0x107cf8u: goto label_107cf8;
        case 0x107cfcu: goto label_107cfc;
        case 0x107d00u: goto label_107d00;
        case 0x107d04u: goto label_107d04;
        case 0x107d08u: goto label_107d08;
        case 0x107d0cu: goto label_107d0c;
        case 0x107d10u: goto label_107d10;
        case 0x107d14u: goto label_107d14;
        case 0x107d18u: goto label_107d18;
        case 0x107d1cu: goto label_107d1c;
        default: break;
    }

    ctx->pc = 0x107c40u;

label_107c40:
    // 0x107c40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x107c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_107c44:
    // 0x107c44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x107c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_107c48:
    // 0x107c48: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x107c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_107c4c:
    // 0x107c4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x107c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_107c50:
    // 0x107c50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x107c50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_107c54:
    // 0x107c54: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x107c54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_107c58:
    // 0x107c58: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x107c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_107c5c:
    // 0x107c5c: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_107c60:
    if (ctx->pc == 0x107C60u) {
        ctx->pc = 0x107C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C5Cu;
        // 0x107c60: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107C64u;
        goto label_107c64;
    }
    ctx->pc = 0x107C5Cu;
    {
        const bool branch_taken_0x107c5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x107C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C5Cu;
        // 0x107c60: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107c5c) {
            ctx->pc = 0x107CE8u;
            goto label_107ce8;
        }
    }
    ctx->pc = 0x107C64u;
label_107c64:
    // 0x107c64: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x107c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_107c68:
    // 0x107c68: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_107c6c:
    if (ctx->pc == 0x107C6Cu) {
        ctx->pc = 0x107C70u;
        goto label_107c70;
    }
    ctx->pc = 0x107C68u;
    {
        const bool branch_taken_0x107c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x107c68) {
            ctx->pc = 0x107C84u;
            goto label_107c84;
        }
    }
    ctx->pc = 0x107C70u;
label_107c70:
    // 0x107c70: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x107c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_107c74:
    // 0x107c74: 0xc09d926  jal         func_276498
label_107c78:
    if (ctx->pc == 0x107C78u) {
        ctx->pc = 0x107C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C74u;
        // 0x107c78: 0xc60c0028  lwc1        $f12, 0x28($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x107C7Cu;
        goto label_107c7c;
    }
    ctx->pc = 0x107C74u;
    SET_GPR_U32(ctx, 31, 0x107C7Cu);
    ctx->pc = 0x107C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107C74u;
    // 0x107c78: 0xc60c0028  lwc1        $f12, 0x28($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x276498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276498u, 0x107C74u, 0x107C7Cu)) {
        return;
    }
    ctx->pc = 0x107C7Cu;
label_107c7c:
    // 0x107c7c: 0xc0942f2  jal         func_250BC8
label_107c80:
    if (ctx->pc == 0x107C80u) {
        ctx->pc = 0x107C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C7Cu;
        // 0x107c80: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107C84u;
        goto label_107c84;
    }
    ctx->pc = 0x107C7Cu;
    SET_GPR_U32(ctx, 31, 0x107C84u);
    ctx->pc = 0x107C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107C7Cu;
    // 0x107c80: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250BC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x250BC8u, 0x107C7Cu, 0x107C84u)) {
        return;
    }
    ctx->pc = 0x107C84u;
label_107c84:
    // 0x107c84: 0xc07600c  jal         func_1D8030
label_107c88:
    if (ctx->pc == 0x107C88u) {
        ctx->pc = 0x107C8Cu;
        goto label_107c8c;
    }
    ctx->pc = 0x107C84u;
    SET_GPR_U32(ctx, 31, 0x107C8Cu);
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x107C84u, 0x107C8Cu)) {
        return;
    }
    ctx->pc = 0x107C8Cu;
label_107c8c:
    // 0x107c8c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x107c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_107c90:
    // 0x107c90: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x107c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_107c94:
    // 0x107c94: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x107c94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_107c98:
    // 0x107c98: 0xc077b78  jal         func_1DEDE0
label_107c9c:
    if (ctx->pc == 0x107C9Cu) {
        ctx->pc = 0x107C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C98u;
        // 0x107c9c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107CA0u;
        goto label_107ca0;
    }
    ctx->pc = 0x107C98u;
    SET_GPR_U32(ctx, 31, 0x107CA0u);
    ctx->pc = 0x107C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107C98u;
    // 0x107c9c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEDE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DEDE0u, 0x107C98u, 0x107CA0u)) {
        return;
    }
    ctx->pc = 0x107CA0u;
label_107ca0:
    // 0x107ca0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x107ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_107ca4:
    // 0x107ca4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_107ca8:
    if (ctx->pc == 0x107CA8u) {
        ctx->pc = 0x107CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107CA4u;
        // 0x107ca8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107CACu;
        goto label_107cac;
    }
    ctx->pc = 0x107CA4u;
    {
        const bool branch_taken_0x107ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x107ca4) {
            ctx->pc = 0x107CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107CA4u;
            // 0x107ca8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107CBCu;
            goto label_107cbc;
        }
    }
    ctx->pc = 0x107CACu;
label_107cac:
    // 0x107cac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x107cacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_107cb0:
    // 0x107cb0: 0xc076e48  jal         func_1DB920
label_107cb4:
    if (ctx->pc == 0x107CB4u) {
        ctx->pc = 0x107CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107CB0u;
        // 0x107cb4: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107CB8u;
        goto label_107cb8;
    }
    ctx->pc = 0x107CB0u;
    SET_GPR_U32(ctx, 31, 0x107CB8u);
    ctx->pc = 0x107CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107CB0u;
    // 0x107cb4: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB920u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DB920u, 0x107CB0u, 0x107CB8u)) {
        return;
    }
    ctx->pc = 0x107CB8u;
label_107cb8:
    // 0x107cb8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x107cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_107cbc:
    // 0x107cbc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_107cc0:
    if (ctx->pc == 0x107CC0u) {
        ctx->pc = 0x107CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107CBCu;
        // 0x107cc0: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107CC4u;
        goto label_107cc4;
    }
    ctx->pc = 0x107CBCu;
    {
        const bool branch_taken_0x107cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x107cbc) {
            ctx->pc = 0x107CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107CBCu;
            // 0x107cc0: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107CD4u;
            goto label_107cd4;
        }
    }
    ctx->pc = 0x107CC4u;
label_107cc4:
    // 0x107cc4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x107cc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_107cc8:
    // 0x107cc8: 0xc076e86  jal         func_1DBA18
label_107ccc:
    if (ctx->pc == 0x107CCCu) {
        ctx->pc = 0x107CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107CC8u;
        // 0x107ccc: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107CD0u;
        goto label_107cd0;
    }
    ctx->pc = 0x107CC8u;
    SET_GPR_U32(ctx, 31, 0x107CD0u);
    ctx->pc = 0x107CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107CC8u;
    // 0x107ccc: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBA18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DBA18u, 0x107CC8u, 0x107CD0u)) {
        return;
    }
    ctx->pc = 0x107CD0u;
label_107cd0:
    // 0x107cd0: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x107cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_107cd4:
    // 0x107cd4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_107cd8:
    if (ctx->pc == 0x107CD8u) {
        ctx->pc = 0x107CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107CD4u;
        // 0x107cd8: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107CDCu;
        goto label_107cdc;
    }
    ctx->pc = 0x107CD4u;
    {
        const bool branch_taken_0x107cd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x107cd4) {
            ctx->pc = 0x107CD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107CD4u;
            // 0x107cd8: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107CECu;
            goto label_107cec;
        }
    }
    ctx->pc = 0x107CDCu;
label_107cdc:
    // 0x107cdc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x107cdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_107ce0:
    // 0x107ce0: 0xc07b656  jal         func_1ED958
label_107ce4:
    if (ctx->pc == 0x107CE4u) {
        ctx->pc = 0x107CE8u;
        goto label_107ce8;
    }
    ctx->pc = 0x107CE0u;
    SET_GPR_U32(ctx, 31, 0x107CE8u);
    ctx->pc = 0x1ED958u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ED958u, 0x107CE0u, 0x107CE8u)) {
        return;
    }
    ctx->pc = 0x107CE8u;
label_107ce8:
    // 0x107ce8: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x107ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_107cec:
    // 0x107cec: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x107cecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_107cf0:
    // 0x107cf0: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x107cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_107cf4:
    // 0x107cf4: 0x60f809  jalr        $v1
label_107cf8:
    if (ctx->pc == 0x107CF8u) {
        ctx->pc = 0x107CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107CF4u;
        // 0x107cf8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107CFCu;
        goto label_107cfc;
    }
    ctx->pc = 0x107CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x107CFCu);
        ctx->pc = 0x107CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107CF4u;
        // 0x107cf8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107CF4u, 0x107CFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x107CFCu;
label_107cfc:
    // 0x107cfc: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x107cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_107d00:
    // 0x107d00: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_107d04:
    if (ctx->pc == 0x107D04u) {
        ctx->pc = 0x107D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D00u;
        // 0x107d04: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107D08u;
        goto label_107d08;
    }
    ctx->pc = 0x107D00u;
    {
        const bool branch_taken_0x107d00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x107D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D00u;
        // 0x107d04: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107d00) {
            ctx->pc = 0x107D14u;
            goto label_107d14;
        }
    }
    ctx->pc = 0x107D08u;
label_107d08:
    // 0x107d08: 0xc07b556  jal         func_1ED558
label_107d0c:
    if (ctx->pc == 0x107D0Cu) {
        ctx->pc = 0x107D10u;
        goto label_107d10;
    }
    ctx->pc = 0x107D08u;
    SET_GPR_U32(ctx, 31, 0x107D10u);
    ctx->pc = 0x1ED558u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ED558u, 0x107D08u, 0x107D10u)) {
        return;
    }
    ctx->pc = 0x107D10u;
label_107d10:
    // 0x107d10: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x107d10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_107d14:
    // 0x107d14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_107d18:
    // 0x107d18: 0x3e00008  jr          $ra
label_107d1c:
    if (ctx->pc == 0x107D1Cu) {
        ctx->pc = 0x107D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D18u;
        // 0x107d1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107D20u;
        goto label_fallthrough_0x107d18;
    }
    ctx->pc = 0x107D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D18u;
        // 0x107d1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x107d18:
    ctx->pc = 0x107D20u;
}
