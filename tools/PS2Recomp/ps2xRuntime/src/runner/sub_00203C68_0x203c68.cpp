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

// Function: sub_00203C68
// Address: 0x203c68 - 0x203dd0
void sub_00203C68_0x203c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203C68_0x203c68");
#endif

    switch (ctx->pc) {
        case 0x203c68u: goto label_203c68;
        case 0x203c6cu: goto label_203c6c;
        case 0x203c70u: goto label_203c70;
        case 0x203c74u: goto label_203c74;
        case 0x203c78u: goto label_203c78;
        case 0x203c7cu: goto label_203c7c;
        case 0x203c80u: goto label_203c80;
        case 0x203c84u: goto label_203c84;
        case 0x203c88u: goto label_203c88;
        case 0x203c8cu: goto label_203c8c;
        case 0x203c90u: goto label_203c90;
        case 0x203c94u: goto label_203c94;
        case 0x203c98u: goto label_203c98;
        case 0x203c9cu: goto label_203c9c;
        case 0x203ca0u: goto label_203ca0;
        case 0x203ca4u: goto label_203ca4;
        case 0x203ca8u: goto label_203ca8;
        case 0x203cacu: goto label_203cac;
        case 0x203cb0u: goto label_203cb0;
        case 0x203cb4u: goto label_203cb4;
        case 0x203cb8u: goto label_203cb8;
        case 0x203cbcu: goto label_203cbc;
        case 0x203cc0u: goto label_203cc0;
        case 0x203cc4u: goto label_203cc4;
        case 0x203cc8u: goto label_203cc8;
        case 0x203cccu: goto label_203ccc;
        case 0x203cd0u: goto label_203cd0;
        case 0x203cd4u: goto label_203cd4;
        case 0x203cd8u: goto label_203cd8;
        case 0x203cdcu: goto label_203cdc;
        case 0x203ce0u: goto label_203ce0;
        case 0x203ce4u: goto label_203ce4;
        case 0x203ce8u: goto label_203ce8;
        case 0x203cecu: goto label_203cec;
        case 0x203cf0u: goto label_203cf0;
        case 0x203cf4u: goto label_203cf4;
        case 0x203cf8u: goto label_203cf8;
        case 0x203cfcu: goto label_203cfc;
        case 0x203d00u: goto label_203d00;
        case 0x203d04u: goto label_203d04;
        case 0x203d08u: goto label_203d08;
        case 0x203d0cu: goto label_203d0c;
        case 0x203d10u: goto label_203d10;
        case 0x203d14u: goto label_203d14;
        case 0x203d18u: goto label_203d18;
        case 0x203d1cu: goto label_203d1c;
        case 0x203d20u: goto label_203d20;
        case 0x203d24u: goto label_203d24;
        case 0x203d28u: goto label_203d28;
        case 0x203d2cu: goto label_203d2c;
        case 0x203d30u: goto label_203d30;
        case 0x203d34u: goto label_203d34;
        case 0x203d38u: goto label_203d38;
        case 0x203d3cu: goto label_203d3c;
        case 0x203d40u: goto label_203d40;
        case 0x203d44u: goto label_203d44;
        case 0x203d48u: goto label_203d48;
        case 0x203d4cu: goto label_203d4c;
        case 0x203d50u: goto label_203d50;
        case 0x203d54u: goto label_203d54;
        case 0x203d58u: goto label_203d58;
        case 0x203d5cu: goto label_203d5c;
        case 0x203d60u: goto label_203d60;
        case 0x203d64u: goto label_203d64;
        case 0x203d68u: goto label_203d68;
        case 0x203d6cu: goto label_203d6c;
        case 0x203d70u: goto label_203d70;
        case 0x203d74u: goto label_203d74;
        case 0x203d78u: goto label_203d78;
        case 0x203d7cu: goto label_203d7c;
        case 0x203d80u: goto label_203d80;
        case 0x203d84u: goto label_203d84;
        case 0x203d88u: goto label_203d88;
        case 0x203d8cu: goto label_203d8c;
        case 0x203d90u: goto label_203d90;
        case 0x203d94u: goto label_203d94;
        case 0x203d98u: goto label_203d98;
        case 0x203d9cu: goto label_203d9c;
        case 0x203da0u: goto label_203da0;
        case 0x203da4u: goto label_203da4;
        case 0x203da8u: goto label_203da8;
        case 0x203dacu: goto label_203dac;
        case 0x203db0u: goto label_203db0;
        case 0x203db4u: goto label_203db4;
        case 0x203db8u: goto label_203db8;
        case 0x203dbcu: goto label_203dbc;
        case 0x203dc0u: goto label_203dc0;
        case 0x203dc4u: goto label_203dc4;
        case 0x203dc8u: goto label_203dc8;
        case 0x203dccu: goto label_203dcc;
        default: break;
    }

    ctx->pc = 0x203c68u;

label_203c68:
    // 0x203c68: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x203c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_203c6c:
    // 0x203c6c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x203c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_203c70:
    // 0x203c70: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x203c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_203c74:
    // 0x203c74: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x203c74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_203c78:
    // 0x203c78: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x203c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_203c7c:
    // 0x203c7c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x203c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_203c80:
    // 0x203c80: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x203c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_203c84:
    // 0x203c84: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x203c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_203c88:
    // 0x203c88: 0x12800047  beqz        $s4, . + 4 + (0x47 << 2)
label_203c8c:
    if (ctx->pc == 0x203C8Cu) {
        ctx->pc = 0x203C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C88u;
        // 0x203c8c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203C90u;
        goto label_203c90;
    }
    ctx->pc = 0x203C88u;
    {
        const bool branch_taken_0x203c88 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x203C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C88u;
        // 0x203c8c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c88) {
            ctx->pc = 0x203DA8u;
            goto label_203da8;
        }
    }
    ctx->pc = 0x203C90u;
label_203c90:
    // 0x203c90: 0x2482000c  addiu       $v0, $a0, 0xC
    ctx->pc = 0x203c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_203c94:
    // 0x203c94: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x203c94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_203c98:
    // 0x203c98: 0x12000043  beqz        $s0, . + 4 + (0x43 << 2)
label_203c9c:
    if (ctx->pc == 0x203C9Cu) {
        ctx->pc = 0x203C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C98u;
        // 0x203c9c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203CA0u;
        goto label_203ca0;
    }
    ctx->pc = 0x203C98u;
    {
        const bool branch_taken_0x203c98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x203C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C98u;
        // 0x203c9c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c98) {
            ctx->pc = 0x203DA8u;
            goto label_203da8;
        }
    }
    ctx->pc = 0x203CA0u;
label_203ca0:
    // 0x203ca0: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x203ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_203ca4:
    // 0x203ca4: 0x2455108c  addiu       $s5, $v0, 0x108C
    ctx->pc = 0x203ca4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4236));
label_203ca8:
    // 0x203ca8: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x203ca8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_203cac:
    // 0x203cac: 0x0  nop
    ctx->pc = 0x203cacu;
    // NOP
label_203cb0:
    // 0x203cb0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x203cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_203cb4:
    // 0x203cb4: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x203cb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_203cb8:
    // 0x203cb8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x203cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_203cbc:
    // 0x203cbc: 0x40f809  jalr        $v0
label_203cc0:
    if (ctx->pc == 0x203CC0u) {
        ctx->pc = 0x203CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CBCu;
        // 0x203cc0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203CC4u;
        goto label_203cc4;
    }
    ctx->pc = 0x203CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x203CC4u);
        ctx->pc = 0x203CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CBCu;
        // 0x203cc0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203CBCu, 0x203CC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x203CC4u;
label_203cc4:
    // 0x203cc4: 0x54400036  bnel        $v0, $zero, . + 4 + (0x36 << 2)
label_203cc8:
    if (ctx->pc == 0x203CC8u) {
        ctx->pc = 0x203CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CC4u;
        // 0x203cc8: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203CCCu;
        goto label_203ccc;
    }
    ctx->pc = 0x203CC4u;
    {
        const bool branch_taken_0x203cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x203cc4) {
            ctx->pc = 0x203CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203CC4u;
            // 0x203cc8: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203DA0u;
            goto label_203da0;
        }
    }
    ctx->pc = 0x203CCCu;
label_203ccc:
    // 0x203ccc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x203cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_203cd0:
    // 0x203cd0: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x203cd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_203cd4:
    // 0x203cd4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x203cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_203cd8:
    // 0x203cd8: 0x40f809  jalr        $v0
label_203cdc:
    if (ctx->pc == 0x203CDCu) {
        ctx->pc = 0x203CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CD8u;
        // 0x203cdc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203CE0u;
        goto label_203ce0;
    }
    ctx->pc = 0x203CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x203CE0u);
        ctx->pc = 0x203CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CD8u;
        // 0x203cdc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203CD8u, 0x203CE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x203CE0u;
label_203ce0:
    // 0x203ce0: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x203ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_203ce4:
    // 0x203ce4: 0x50a0002e  beql        $a1, $zero, . + 4 + (0x2E << 2)
label_203ce8:
    if (ctx->pc == 0x203CE8u) {
        ctx->pc = 0x203CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CE4u;
        // 0x203ce8: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203CECu;
        goto label_203cec;
    }
    ctx->pc = 0x203CE4u;
    {
        const bool branch_taken_0x203ce4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x203ce4) {
            ctx->pc = 0x203CE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203CE4u;
            // 0x203ce8: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203DA0u;
            goto label_203da0;
        }
    }
    ctx->pc = 0x203CECu;
label_203cec:
    // 0x203cec: 0x8ea2002c  lw          $v0, 0x2C($s5)
    ctx->pc = 0x203cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
label_203cf0:
    // 0x203cf0: 0x40f809  jalr        $v0
label_203cf4:
    if (ctx->pc == 0x203CF4u) {
        ctx->pc = 0x203CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CF0u;
        // 0x203cf4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203CF8u;
        goto label_203cf8;
    }
    ctx->pc = 0x203CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x203CF8u);
        ctx->pc = 0x203CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CF0u;
        // 0x203cf4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203CF0u, 0x203CF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x203CF8u;
label_203cf8:
    // 0x203cf8: 0x50400029  beql        $v0, $zero, . + 4 + (0x29 << 2)
label_203cfc:
    if (ctx->pc == 0x203CFCu) {
        ctx->pc = 0x203CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CF8u;
        // 0x203cfc: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203D00u;
        goto label_203d00;
    }
    ctx->pc = 0x203CF8u;
    {
        const bool branch_taken_0x203cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203cf8) {
            ctx->pc = 0x203CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203CF8u;
            // 0x203cfc: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203DA0u;
            goto label_203da0;
        }
    }
    ctx->pc = 0x203D00u;
label_203d00:
    // 0x203d00: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x203d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_203d04:
    // 0x203d04: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_203d08:
    if (ctx->pc == 0x203D08u) {
        ctx->pc = 0x203D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D04u;
        // 0x203d08: 0x8e130004  lw          $s3, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203D0Cu;
        goto label_203d0c;
    }
    ctx->pc = 0x203D04u;
    {
        const bool branch_taken_0x203d04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x203D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D04u;
        // 0x203d08: 0x8e130004  lw          $s3, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d04) {
            ctx->pc = 0x203D30u;
            goto label_203d30;
        }
    }
    ctx->pc = 0x203D0Cu;
label_203d0c:
    // 0x203d0c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x203d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_203d10:
    // 0x203d10: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x203d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_203d14:
    // 0x203d14: 0x0  nop
    ctx->pc = 0x203d14u;
    // NOP
label_203d18:
    // 0x203d18: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_203d1c:
    if (ctx->pc == 0x203D1Cu) {
        ctx->pc = 0x203D20u;
        goto label_203d20;
    }
    ctx->pc = 0x203D18u;
    {
        const bool branch_taken_0x203d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x203d18) {
            ctx->pc = 0x203D34u;
            goto label_203d34;
        }
    }
    ctx->pc = 0x203D20u;
label_203d20:
    // 0x203d20: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x203d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_203d24:
    // 0x203d24: 0x0  nop
    ctx->pc = 0x203d24u;
    // NOP
label_203d28:
    // 0x203d28: 0x5480fffb  bnel        $a0, $zero, . + 4 + (-0x5 << 2)
label_203d2c:
    if (ctx->pc == 0x203D2Cu) {
        ctx->pc = 0x203D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D28u;
        // 0x203d2c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203D30u;
        goto label_203d30;
    }
    ctx->pc = 0x203D28u;
    {
        const bool branch_taken_0x203d28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x203d28) {
            ctx->pc = 0x203D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203D28u;
            // 0x203d2c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203d18;
        }
    }
    ctx->pc = 0x203D30u;
label_203d30:
    // 0x203d30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x203d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203d34:
    // 0x203d34: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
label_203d38:
    if (ctx->pc == 0x203D38u) {
        ctx->pc = 0x203D3Cu;
        goto label_203d3c;
    }
    ctx->pc = 0x203D34u;
    {
        const bool branch_taken_0x203d34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x203d34) {
            ctx->pc = 0x203D80u;
            goto label_203d80;
        }
    }
    ctx->pc = 0x203D3Cu;
label_203d3c:
    // 0x203d3c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x203d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_203d40:
    // 0x203d40: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_203d44:
    if (ctx->pc == 0x203D44u) {
        ctx->pc = 0x203D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D40u;
        // 0x203d44: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203D48u;
        goto label_203d48;
    }
    ctx->pc = 0x203D40u;
    {
        const bool branch_taken_0x203d40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x203D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D40u;
        // 0x203d44: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d40) {
            ctx->pc = 0x203D50u;
            goto label_203d50;
        }
    }
    ctx->pc = 0x203D48u;
label_203d48:
    // 0x203d48: 0x10000002  b           . + 4 + (0x2 << 2)
label_203d4c:
    if (ctx->pc == 0x203D4Cu) {
        ctx->pc = 0x203D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D48u;
        // 0x203d4c: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203D50u;
        goto label_203d50;
    }
    ctx->pc = 0x203D48u;
    {
        const bool branch_taken_0x203d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D48u;
        // 0x203d4c: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d48) {
            ctx->pc = 0x203D54u;
            goto label_203d54;
        }
    }
    ctx->pc = 0x203D50u;
label_203d50:
    // 0x203d50: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x203d50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_203d54:
    // 0x203d54: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x203d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_203d58:
    // 0x203d58: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_203d5c:
    if (ctx->pc == 0x203D5Cu) {
        ctx->pc = 0x203D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D58u;
        // 0x203d5c: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203D60u;
        goto label_203d60;
    }
    ctx->pc = 0x203D58u;
    {
        const bool branch_taken_0x203d58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x203D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D58u;
        // 0x203d5c: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d58) {
            ctx->pc = 0x203D68u;
            goto label_203d68;
        }
    }
    ctx->pc = 0x203D60u;
label_203d60:
    // 0x203d60: 0x10000002  b           . + 4 + (0x2 << 2)
label_203d64:
    if (ctx->pc == 0x203D64u) {
        ctx->pc = 0x203D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D60u;
        // 0x203d64: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203D68u;
        goto label_203d68;
    }
    ctx->pc = 0x203D60u;
    {
        const bool branch_taken_0x203d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D60u;
        // 0x203d64: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d60) {
            ctx->pc = 0x203D6Cu;
            goto label_203d6c;
        }
    }
    ctx->pc = 0x203D68u;
label_203d68:
    // 0x203d68: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x203d68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_203d6c:
    // 0x203d6c: 0xc0808b8  jal         func_2022E0
label_203d70:
    if (ctx->pc == 0x203D70u) {
        ctx->pc = 0x203D74u;
        goto label_203d74;
    }
    ctx->pc = 0x203D6Cu;
    SET_GPR_U32(ctx, 31, 0x203D74u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x203D6Cu, 0x203D74u)) {
        return;
    }
    ctx->pc = 0x203D74u;
label_203d74:
    // 0x203d74: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x203d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_203d78:
    // 0x203d78: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x203d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_203d7c:
    // 0x203d7c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x203d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_203d80:
    // 0x203d80: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_203d84:
    if (ctx->pc == 0x203D84u) {
        ctx->pc = 0x203D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D80u;
        // 0x203d84: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203D88u;
        goto label_203d88;
    }
    ctx->pc = 0x203D80u;
    {
        const bool branch_taken_0x203d80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x203D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D80u;
        // 0x203d84: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d80) {
            ctx->pc = 0x203DA0u;
            goto label_203da0;
        }
    }
    ctx->pc = 0x203D88u;
label_203d88:
    // 0x203d88: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x203d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_203d8c:
    // 0x203d8c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x203d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_203d90:
    // 0x203d90: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x203d90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_203d94:
    // 0x203d94: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x203d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_203d98:
    // 0x203d98: 0x60f809  jalr        $v1
label_203d9c:
    if (ctx->pc == 0x203D9Cu) {
        ctx->pc = 0x203D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D98u;
        // 0x203d9c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203DA0u;
        goto label_203da0;
    }
    ctx->pc = 0x203D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x203DA0u);
        ctx->pc = 0x203D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D98u;
        // 0x203d9c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203D98u, 0x203DA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x203DA0u;
label_203da0:
    // 0x203da0: 0x5600ffc3  bnel        $s0, $zero, . + 4 + (-0x3D << 2)
label_203da4:
    if (ctx->pc == 0x203DA4u) {
        ctx->pc = 0x203DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203DA0u;
        // 0x203da4: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203DA8u;
        goto label_203da8;
    }
    ctx->pc = 0x203DA0u;
    {
        const bool branch_taken_0x203da0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x203da0) {
            ctx->pc = 0x203DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203DA0u;
            // 0x203da4: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203cb0;
        }
    }
    ctx->pc = 0x203DA8u;
label_203da8:
    // 0x203da8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x203da8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_203dac:
    // 0x203dac: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x203dacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_203db0:
    // 0x203db0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x203db0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_203db4:
    // 0x203db4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x203db4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_203db8:
    // 0x203db8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x203db8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_203dbc:
    // 0x203dbc: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x203dbcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_203dc0:
    // 0x203dc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x203dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_203dc4:
    // 0x203dc4: 0x3e00008  jr          $ra
label_203dc8:
    if (ctx->pc == 0x203DC8u) {
        ctx->pc = 0x203DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203DC4u;
        // 0x203dc8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203DCCu;
        goto label_203dcc;
    }
    ctx->pc = 0x203DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203DC4u;
        // 0x203dc8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203DCCu;
label_203dcc:
    // 0x203dcc: 0x0  nop
    ctx->pc = 0x203dccu;
    // NOP
    ctx->pc = 0x203dd0u;
}
