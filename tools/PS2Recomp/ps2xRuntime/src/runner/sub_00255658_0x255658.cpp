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

// Function: sub_00255658
// Address: 0x255658 - 0x255708
void sub_00255658_0x255658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255658_0x255658");
#endif

    switch (ctx->pc) {
        case 0x255668u: goto label_255668;
        case 0x25567cu: goto label_25567c;
        case 0x2556acu: goto label_2556ac;
        case 0x2556b8u: goto label_2556b8;
        case 0x2556e4u: goto label_2556e4;
        case 0x2556f8u: goto label_2556f8;
        default: break;
    }

    ctx->pc = 0x255658u;

    // 0x255658: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x255658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25565c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25565cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x255660: 0xc0955ca  jal         func_255728
    ctx->pc = 0x255660u;
    SET_GPR_U32(ctx, 31, 0x255668u);
    ctx->pc = 0x255664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255660u;
    // 0x255664: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255728u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255728u, 0x255660u, 0x255668u)) {
        return;
    }
    ctx->pc = 0x255668u;
label_255668:
    // 0x255668: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x255668u;
    {
        const bool branch_taken_0x255668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25566Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255668u;
        // 0x25566c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255668) {
            ctx->pc = 0x2556F8u;
            goto label_2556f8;
        }
    }
    ctx->pc = 0x255670u;
    // 0x255670: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x255670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x255674: 0xc08982a  jal         func_2260A8
    ctx->pc = 0x255674u;
    SET_GPR_U32(ctx, 31, 0x25567Cu);
    ctx->pc = 0x255678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255674u;
    // 0x255678: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2260A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2260A8u, 0x255674u, 0x25567Cu)) {
        return;
    }
    ctx->pc = 0x25567Cu;
label_25567c:
    // 0x25567c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x25567cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x255680: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x255680u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x255684: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x255684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x255688: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x255688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x25568c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x25568Cu;
    {
        const bool branch_taken_0x25568c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x255690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25568Cu;
        // 0x255690: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25568c) {
            ctx->pc = 0x2556F0u;
            goto label_2556f0;
        }
    }
    ctx->pc = 0x255694u;
    // 0x255694: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x255694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x255698: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x255698u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x25569c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x25569cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2556a0: 0x24a54520  addiu       $a1, $a1, 0x4520
    ctx->pc = 0x2556a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17696));
    // 0x2556a4: 0xc09545a  jal         func_255168
    ctx->pc = 0x2556A4u;
    SET_GPR_U32(ctx, 31, 0x2556ACu);
    ctx->pc = 0x2556A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2556A4u;
    // 0x2556a8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255168u, 0x2556A4u, 0x2556ACu)) {
        return;
    }
    ctx->pc = 0x2556ACu;
label_2556ac:
    // 0x2556ac: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2556acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2556b0: 0xc08983c  jal         func_2260F0
    ctx->pc = 0x2556B0u;
    SET_GPR_U32(ctx, 31, 0x2556B8u);
    ctx->pc = 0x2556B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2556B0u;
    // 0x2556b4: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2260F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2260F0u, 0x2556B0u, 0x2556B8u)) {
        return;
    }
    ctx->pc = 0x2556B8u;
label_2556b8:
    // 0x2556b8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2556b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2556bc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2556BCu;
    {
        const bool branch_taken_0x2556bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2556C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2556BCu;
        // 0x2556c0: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2556bc) {
            ctx->pc = 0x2556ECu;
            goto label_2556ec;
        }
    }
    ctx->pc = 0x2556C4u;
    // 0x2556c4: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x2556c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x2556c8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2556c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2556cc: 0x248411f8  addiu       $a0, $a0, 0x11F8
    ctx->pc = 0x2556ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4600));
    // 0x2556d0: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x2556d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x2556d4: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x2556d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
    // 0x2556d8: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2556d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2556dc: 0xc093996  jal         func_24E658
    ctx->pc = 0x2556DCu;
    SET_GPR_U32(ctx, 31, 0x2556E4u);
    ctx->pc = 0x2556E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2556DCu;
    // 0x2556e0: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E658u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E658u, 0x2556DCu, 0x2556E4u)) {
        return;
    }
    ctx->pc = 0x2556E4u;
label_2556e4:
    // 0x2556e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2556E4u;
    {
        const bool branch_taken_0x2556e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2556E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2556E4u;
        // 0x2556e8: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2556e4) {
            ctx->pc = 0x2556FCu;
            goto label_2556fc;
        }
    }
    ctx->pc = 0x2556ECu;
label_2556ec:
    // 0x2556ec: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2556ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2556f0:
    // 0x2556f0: 0xc0955f8  jal         func_2557E0
    ctx->pc = 0x2556F0u;
    SET_GPR_U32(ctx, 31, 0x2556F8u);
    ctx->pc = 0x2557E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2557E0u, 0x2556F0u, 0x2556F8u)) {
        return;
    }
    ctx->pc = 0x2556F8u;
label_2556f8:
    // 0x2556f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2556f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2556fc:
    // 0x2556fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2556fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x255700: 0x3e00008  jr          $ra
    ctx->pc = 0x255700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255700u;
        // 0x255704: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255708u;
}
