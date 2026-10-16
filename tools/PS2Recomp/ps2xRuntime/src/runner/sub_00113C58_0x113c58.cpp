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

// Function: sub_00113C58
// Address: 0x113c58 - 0x113d00
void sub_00113C58_0x113c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113C58_0x113c58");
#endif

    switch (ctx->pc) {
        case 0x113c58u: goto label_113c58;
        case 0x113c5cu: goto label_113c5c;
        case 0x113c60u: goto label_113c60;
        case 0x113c64u: goto label_113c64;
        case 0x113c68u: goto label_113c68;
        case 0x113c6cu: goto label_113c6c;
        case 0x113c70u: goto label_113c70;
        case 0x113c74u: goto label_113c74;
        case 0x113c78u: goto label_113c78;
        case 0x113c7cu: goto label_113c7c;
        case 0x113c80u: goto label_113c80;
        case 0x113c84u: goto label_113c84;
        case 0x113c88u: goto label_113c88;
        case 0x113c8cu: goto label_113c8c;
        case 0x113c90u: goto label_113c90;
        case 0x113c94u: goto label_113c94;
        case 0x113c98u: goto label_113c98;
        case 0x113c9cu: goto label_113c9c;
        case 0x113ca0u: goto label_113ca0;
        case 0x113ca4u: goto label_113ca4;
        case 0x113ca8u: goto label_113ca8;
        case 0x113cacu: goto label_113cac;
        case 0x113cb0u: goto label_113cb0;
        case 0x113cb4u: goto label_113cb4;
        case 0x113cb8u: goto label_113cb8;
        case 0x113cbcu: goto label_113cbc;
        case 0x113cc0u: goto label_113cc0;
        case 0x113cc4u: goto label_113cc4;
        case 0x113cc8u: goto label_113cc8;
        case 0x113cccu: goto label_113ccc;
        case 0x113cd0u: goto label_113cd0;
        case 0x113cd4u: goto label_113cd4;
        case 0x113cd8u: goto label_113cd8;
        case 0x113cdcu: goto label_113cdc;
        case 0x113ce0u: goto label_113ce0;
        case 0x113ce4u: goto label_113ce4;
        case 0x113ce8u: goto label_113ce8;
        case 0x113cecu: goto label_113cec;
        case 0x113cf0u: goto label_113cf0;
        case 0x113cf4u: goto label_113cf4;
        case 0x113cf8u: goto label_113cf8;
        case 0x113cfcu: goto label_113cfc;
        default: break;
    }

    ctx->pc = 0x113c58u;

label_113c58:
    // 0x113c58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x113c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_113c5c:
    // 0x113c5c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x113c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_113c60:
    // 0x113c60: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x113c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_113c64:
    // 0x113c64: 0x249001a8  addiu       $s0, $a0, 0x1A8
    ctx->pc = 0x113c64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 424));
label_113c68:
    // 0x113c68: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x113c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_113c6c:
    // 0x113c6c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x113c6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_113c70:
    // 0x113c70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_113c74:
    // 0x113c74: 0x8c8401a8  lw          $a0, 0x1A8($a0)
    ctx->pc = 0x113c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 424)));
label_113c78:
    // 0x113c78: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
label_113c7c:
    if (ctx->pc == 0x113C7Cu) {
        ctx->pc = 0x113C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113C78u;
        // 0x113c7c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113C80u;
        goto label_113c80;
    }
    ctx->pc = 0x113C78u;
    {
        const bool branch_taken_0x113c78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x113C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113C78u;
        // 0x113c7c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113c78) {
            ctx->pc = 0x113CD0u;
            goto label_113cd0;
        }
    }
    ctx->pc = 0x113C80u;
label_113c80:
    // 0x113c80: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x113c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_113c84:
    // 0x113c84: 0x0  nop
    ctx->pc = 0x113c84u;
    // NOP
label_113c88:
    // 0x113c88: 0x5451000e  bnel        $v0, $s1, . + 4 + (0xE << 2)
label_113c8c:
    if (ctx->pc == 0x113C8Cu) {
        ctx->pc = 0x113C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113C88u;
        // 0x113c8c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113C90u;
        goto label_113c90;
    }
    ctx->pc = 0x113C88u;
    {
        const bool branch_taken_0x113c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x113c88) {
            ctx->pc = 0x113C8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113C88u;
            // 0x113c8c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113CC4u;
            goto label_113cc4;
        }
    }
    ctx->pc = 0x113C90u;
label_113c90:
    // 0x113c90: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x113c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_113c94:
    // 0x113c94: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_113c98:
    if (ctx->pc == 0x113C98u) {
        ctx->pc = 0x113C9Cu;
        goto label_113c9c;
    }
    ctx->pc = 0x113C94u;
    {
        const bool branch_taken_0x113c94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x113c94) {
            ctx->pc = 0x113CA4u;
            goto label_113ca4;
        }
    }
    ctx->pc = 0x113C9Cu;
label_113c9c:
    // 0x113c9c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x113c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_113ca0:
    // 0x113ca0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x113ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_113ca4:
    // 0x113ca4: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_113ca8:
    if (ctx->pc == 0x113CA8u) {
        ctx->pc = 0x113CACu;
        goto label_113cac;
    }
    ctx->pc = 0x113CA4u;
    {
        const bool branch_taken_0x113ca4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x113ca4) {
            ctx->pc = 0x113CB4u;
            goto label_113cb4;
        }
    }
    ctx->pc = 0x113CACu;
label_113cac:
    // 0x113cac: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x113cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_113cb0:
    // 0x113cb0: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x113cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_113cb4:
    // 0x113cb4: 0xc0808b8  jal         func_2022E0
label_113cb8:
    if (ctx->pc == 0x113CB8u) {
        ctx->pc = 0x113CBCu;
        goto label_113cbc;
    }
    ctx->pc = 0x113CB4u;
    SET_GPR_U32(ctx, 31, 0x113CBCu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x113CB4u, 0x113CBCu)) {
        return;
    }
    ctx->pc = 0x113CBCu;
label_113cbc:
    // 0x113cbc: 0x10000002  b           . + 4 + (0x2 << 2)
label_113cc0:
    if (ctx->pc == 0x113CC0u) {
        ctx->pc = 0x113CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113CBCu;
        // 0x113cc0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113CC4u;
        goto label_113cc4;
    }
    ctx->pc = 0x113CBCu;
    {
        const bool branch_taken_0x113cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113CBCu;
        // 0x113cc0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113cbc) {
            ctx->pc = 0x113CC8u;
            goto label_113cc8;
        }
    }
    ctx->pc = 0x113CC4u;
label_113cc4:
    // 0x113cc4: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x113cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_113cc8:
    // 0x113cc8: 0x5480ffef  bnel        $a0, $zero, . + 4 + (-0x11 << 2)
label_113ccc:
    if (ctx->pc == 0x113CCCu) {
        ctx->pc = 0x113CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113CC8u;
        // 0x113ccc: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113CD0u;
        goto label_113cd0;
    }
    ctx->pc = 0x113CC8u;
    {
        const bool branch_taken_0x113cc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x113cc8) {
            ctx->pc = 0x113CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113CC8u;
            // 0x113ccc: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113c88;
        }
    }
    ctx->pc = 0x113CD0u;
label_113cd0:
    // 0x113cd0: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x113cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_113cd4:
    // 0x113cd4: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x113cd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_113cd8:
    // 0x113cd8: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x113cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_113cdc:
    // 0x113cdc: 0x60f809  jalr        $v1
label_113ce0:
    if (ctx->pc == 0x113CE0u) {
        ctx->pc = 0x113CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113CDCu;
        // 0x113ce0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113CE4u;
        goto label_113ce4;
    }
    ctx->pc = 0x113CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x113CE4u);
        ctx->pc = 0x113CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113CDCu;
        // 0x113ce0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113CDCu, 0x113CE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x113CE4u;
label_113ce4:
    // 0x113ce4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x113ce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_113ce8:
    // 0x113ce8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x113ce8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_113cec:
    // 0x113cec: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x113cecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_113cf0:
    // 0x113cf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_113cf4:
    // 0x113cf4: 0x3e00008  jr          $ra
label_113cf8:
    if (ctx->pc == 0x113CF8u) {
        ctx->pc = 0x113CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113CF4u;
        // 0x113cf8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113CFCu;
        goto label_113cfc;
    }
    ctx->pc = 0x113CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113CF4u;
        // 0x113cf8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113CFCu;
label_113cfc:
    // 0x113cfc: 0x0  nop
    ctx->pc = 0x113cfcu;
    // NOP
    ctx->pc = 0x113d00u;
}
