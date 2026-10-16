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

// Function: sub_00205870
// Address: 0x205870 - 0x2058f8
void sub_00205870_0x205870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205870_0x205870");
#endif

    switch (ctx->pc) {
        case 0x205870u: goto label_205870;
        case 0x205874u: goto label_205874;
        case 0x205878u: goto label_205878;
        case 0x20587cu: goto label_20587c;
        case 0x205880u: goto label_205880;
        case 0x205884u: goto label_205884;
        case 0x205888u: goto label_205888;
        case 0x20588cu: goto label_20588c;
        case 0x205890u: goto label_205890;
        case 0x205894u: goto label_205894;
        case 0x205898u: goto label_205898;
        case 0x20589cu: goto label_20589c;
        case 0x2058a0u: goto label_2058a0;
        case 0x2058a4u: goto label_2058a4;
        case 0x2058a8u: goto label_2058a8;
        case 0x2058acu: goto label_2058ac;
        case 0x2058b0u: goto label_2058b0;
        case 0x2058b4u: goto label_2058b4;
        case 0x2058b8u: goto label_2058b8;
        case 0x2058bcu: goto label_2058bc;
        case 0x2058c0u: goto label_2058c0;
        case 0x2058c4u: goto label_2058c4;
        case 0x2058c8u: goto label_2058c8;
        case 0x2058ccu: goto label_2058cc;
        case 0x2058d0u: goto label_2058d0;
        case 0x2058d4u: goto label_2058d4;
        case 0x2058d8u: goto label_2058d8;
        case 0x2058dcu: goto label_2058dc;
        case 0x2058e0u: goto label_2058e0;
        case 0x2058e4u: goto label_2058e4;
        case 0x2058e8u: goto label_2058e8;
        case 0x2058ecu: goto label_2058ec;
        case 0x2058f0u: goto label_2058f0;
        case 0x2058f4u: goto label_2058f4;
        default: break;
    }

    ctx->pc = 0x205870u;

label_205870:
    // 0x205870: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x205870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_205874:
    // 0x205874: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x205874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_205878:
    // 0x205878: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x205878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_20587c:
    // 0x20587c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20587cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_205880:
    // 0x205880: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x205880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_205884:
    // 0x205884: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x205884u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_205888:
    // 0x205888: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_20588c:
    if (ctx->pc == 0x20588Cu) {
        ctx->pc = 0x20588Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205888u;
        // 0x20588c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205890u;
        goto label_205890;
    }
    ctx->pc = 0x205888u;
    {
        const bool branch_taken_0x205888 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x20588Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205888u;
        // 0x20588c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205888) {
            ctx->pc = 0x2058C8u;
            goto label_2058c8;
        }
    }
    ctx->pc = 0x205890u;
label_205890:
    // 0x205890: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x205890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_205894:
    // 0x205894: 0x2452108c  addiu       $s2, $v0, 0x108C
    ctx->pc = 0x205894u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4236));
label_205898:
    // 0x205898: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x205898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20589c:
    // 0x20589c: 0x0  nop
    ctx->pc = 0x20589cu;
    // NOP
label_2058a0:
    // 0x2058a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2058a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2058a4:
    // 0x2058a4: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x2058a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_2058a8:
    // 0x2058a8: 0x40f809  jalr        $v0
label_2058ac:
    if (ctx->pc == 0x2058ACu) {
        ctx->pc = 0x2058ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2058A8u;
        // 0x2058ac: 0x8c65001c  lw          $a1, 0x1C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2058B0u;
        goto label_2058b0;
    }
    ctx->pc = 0x2058A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2058B0u);
        ctx->pc = 0x2058ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2058A8u;
        // 0x2058ac: 0x8c65001c  lw          $a1, 0x1C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2058A8u, 0x2058B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2058B0u;
label_2058b0:
    // 0x2058b0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_2058b4:
    if (ctx->pc == 0x2058B4u) {
        ctx->pc = 0x2058B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2058B0u;
        // 0x2058b4: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2058B8u;
        goto label_2058b8;
    }
    ctx->pc = 0x2058B0u;
    {
        const bool branch_taken_0x2058b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2058b0) {
            ctx->pc = 0x2058B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2058B0u;
            // 0x2058b4: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x2058B8u;
label_2058b8:
    // 0x2058b8: 0x10000004  b           . + 4 + (0x4 << 2)
label_2058bc:
    if (ctx->pc == 0x2058BCu) {
        ctx->pc = 0x2058BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2058B8u;
        // 0x2058bc: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2058C0u;
        goto label_2058c0;
    }
    ctx->pc = 0x2058B8u;
    {
        const bool branch_taken_0x2058b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2058BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2058B8u;
        // 0x2058bc: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2058b8) {
            ctx->pc = 0x2058CCu;
            goto label_2058cc;
        }
    }
    ctx->pc = 0x2058C0u;
label_2058c0:
    // 0x2058c0: 0x5600fff7  bnel        $s0, $zero, . + 4 + (-0x9 << 2)
label_2058c4:
    if (ctx->pc == 0x2058C4u) {
        ctx->pc = 0x2058C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2058C0u;
        // 0x2058c4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2058C8u;
        goto label_2058c8;
    }
    ctx->pc = 0x2058C0u;
    {
        const bool branch_taken_0x2058c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2058c0) {
            ctx->pc = 0x2058C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2058C0u;
            // 0x2058c4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2058A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2058a0;
        }
    }
    ctx->pc = 0x2058C8u;
label_2058c8:
    // 0x2058c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2058c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2058cc:
    // 0x2058cc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2058ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2058d0:
    // 0x2058d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2058d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2058d4:
    // 0x2058d4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2058d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2058d8:
    // 0x2058d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2058d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2058dc:
    // 0x2058dc: 0x3e00008  jr          $ra
label_2058e0:
    if (ctx->pc == 0x2058E0u) {
        ctx->pc = 0x2058E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2058DCu;
        // 0x2058e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2058E4u;
        goto label_2058e4;
    }
    ctx->pc = 0x2058DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2058E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2058DCu;
        // 0x2058e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2058DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2058E4u;
label_2058e4:
    // 0x2058e4: 0x0  nop
    ctx->pc = 0x2058e4u;
    // NOP
label_2058e8:
    // 0x2058e8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2058e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2058ec:
    // 0x2058ec: 0x0  nop
    ctx->pc = 0x2058ecu;
    // NOP
label_2058f0:
    // 0x2058f0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2058f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2058f4:
    // 0x2058f4: 0x0  nop
    ctx->pc = 0x2058f4u;
    // NOP
    ctx->pc = 0x2058f8u;
}
