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

// Function: sub_00273870
// Address: 0x273870 - 0x2738e0
void sub_00273870_0x273870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00273870_0x273870");
#endif

    switch (ctx->pc) {
        case 0x273870u: goto label_273870;
        case 0x273874u: goto label_273874;
        case 0x273878u: goto label_273878;
        case 0x27387cu: goto label_27387c;
        case 0x273880u: goto label_273880;
        case 0x273884u: goto label_273884;
        case 0x273888u: goto label_273888;
        case 0x27388cu: goto label_27388c;
        case 0x273890u: goto label_273890;
        case 0x273894u: goto label_273894;
        case 0x273898u: goto label_273898;
        case 0x27389cu: goto label_27389c;
        case 0x2738a0u: goto label_2738a0;
        case 0x2738a4u: goto label_2738a4;
        case 0x2738a8u: goto label_2738a8;
        case 0x2738acu: goto label_2738ac;
        case 0x2738b0u: goto label_2738b0;
        case 0x2738b4u: goto label_2738b4;
        case 0x2738b8u: goto label_2738b8;
        case 0x2738bcu: goto label_2738bc;
        case 0x2738c0u: goto label_2738c0;
        case 0x2738c4u: goto label_2738c4;
        case 0x2738c8u: goto label_2738c8;
        case 0x2738ccu: goto label_2738cc;
        case 0x2738d0u: goto label_2738d0;
        case 0x2738d4u: goto label_2738d4;
        case 0x2738d8u: goto label_2738d8;
        case 0x2738dcu: goto label_2738dc;
        default: break;
    }

    ctx->pc = 0x273870u;

label_273870:
    // 0x273870: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x273870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_273874:
    // 0x273874: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x273874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_273878:
    // 0x273878: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x273878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_27387c:
    // 0x27387c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x27387cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_273880:
    // 0x273880: 0x8c5053c8  lw          $s0, 0x53C8($v0)
    ctx->pc = 0x273880u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21448)));
label_273884:
    // 0x273884: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x273884u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_273888:
    // 0x273888: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x273888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_27388c:
    // 0x27388c: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_273890:
    if (ctx->pc == 0x273890u) {
        ctx->pc = 0x273890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27388Cu;
        // 0x273890: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273894u;
        goto label_273894;
    }
    ctx->pc = 0x27388Cu;
    {
        const bool branch_taken_0x27388c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x273890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27388Cu;
        // 0x273890: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27388c) {
            ctx->pc = 0x2738C4u;
            goto label_2738c4;
        }
    }
    ctx->pc = 0x273894u;
label_273894:
    // 0x273894: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x273894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_273898:
    // 0x273898: 0x24520fc8  addiu       $s2, $v0, 0xFC8
    ctx->pc = 0x273898u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_27389c:
    // 0x27389c: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x27389cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_2738a0:
    // 0x2738a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2738a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2738a4:
    // 0x2738a4: 0x40f809  jalr        $v0
label_2738a8:
    if (ctx->pc == 0x2738A8u) {
        ctx->pc = 0x2738A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2738A4u;
        // 0x2738a8: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2738ACu;
        goto label_2738ac;
    }
    ctx->pc = 0x2738A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2738ACu);
        ctx->pc = 0x2738A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2738A4u;
        // 0x2738a8: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2738A4u, 0x2738ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2738ACu;
label_2738ac:
    // 0x2738ac: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_2738b0:
    if (ctx->pc == 0x2738B0u) {
        ctx->pc = 0x2738B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2738ACu;
        // 0x2738b0: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2738B4u;
        goto label_2738b4;
    }
    ctx->pc = 0x2738ACu;
    {
        const bool branch_taken_0x2738ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2738ac) {
            ctx->pc = 0x2738B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2738ACu;
            // 0x2738b0: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2738BCu;
            goto label_2738bc;
        }
    }
    ctx->pc = 0x2738B4u;
label_2738b4:
    // 0x2738b4: 0x10000004  b           . + 4 + (0x4 << 2)
label_2738b8:
    if (ctx->pc == 0x2738B8u) {
        ctx->pc = 0x2738B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2738B4u;
        // 0x2738b8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2738BCu;
        goto label_2738bc;
    }
    ctx->pc = 0x2738B4u;
    {
        const bool branch_taken_0x2738b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2738B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2738B4u;
        // 0x2738b8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2738b4) {
            ctx->pc = 0x2738C8u;
            goto label_2738c8;
        }
    }
    ctx->pc = 0x2738BCu;
label_2738bc:
    // 0x2738bc: 0x5600fff8  bnel        $s0, $zero, . + 4 + (-0x8 << 2)
label_2738c0:
    if (ctx->pc == 0x2738C0u) {
        ctx->pc = 0x2738C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2738BCu;
        // 0x2738c0: 0x8e4200f0  lw          $v0, 0xF0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2738C4u;
        goto label_2738c4;
    }
    ctx->pc = 0x2738BCu;
    {
        const bool branch_taken_0x2738bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2738bc) {
            ctx->pc = 0x2738C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2738BCu;
            // 0x2738c0: 0x8e4200f0  lw          $v0, 0xF0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2738A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2738a0;
        }
    }
    ctx->pc = 0x2738C4u;
label_2738c4:
    // 0x2738c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2738c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2738c8:
    // 0x2738c8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2738c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2738cc:
    // 0x2738cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2738ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2738d0:
    // 0x2738d0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2738d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2738d4:
    // 0x2738d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2738d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2738d8:
    // 0x2738d8: 0x3e00008  jr          $ra
label_2738dc:
    if (ctx->pc == 0x2738DCu) {
        ctx->pc = 0x2738DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2738D8u;
        // 0x2738dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2738E0u;
        goto label_fallthrough_0x2738d8;
    }
    ctx->pc = 0x2738D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2738DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2738D8u;
        // 0x2738dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2738D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2738d8:
    ctx->pc = 0x2738E0u;
}
