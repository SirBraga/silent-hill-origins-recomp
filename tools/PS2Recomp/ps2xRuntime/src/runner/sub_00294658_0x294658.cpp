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

// Function: sub_00294658
// Address: 0x294658 - 0x2946f8
void sub_00294658_0x294658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294658_0x294658");
#endif

    switch (ctx->pc) {
        case 0x29467cu: goto label_29467c;
        case 0x294698u: goto label_294698;
        case 0x2946b4u: goto label_2946b4;
        case 0x2946c8u: goto label_2946c8;
        case 0x2946d4u: goto label_2946d4;
        default: break;
    }

    ctx->pc = 0x294658u;

    // 0x294658: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x294658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x29465c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x29465cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x294660: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x294660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x294664: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x294664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294668: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x294668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x29466c: 0x2484d018  addiu       $a0, $a0, -0x2FE8
    ctx->pc = 0x29466cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955032));
    // 0x294670: 0xffb10110  sd          $s1, 0x110($sp)
    ctx->pc = 0x294670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x294674: 0xc0c95f6  jal         func_3257D8
    ctx->pc = 0x294674u;
    SET_GPR_U32(ctx, 31, 0x29467Cu);
    ctx->pc = 0x294678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294674u;
    // 0x294678: 0xffb00100  sd          $s0, 0x100($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3257D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3257D8u, 0x294674u, 0x29467Cu)) {
        return;
    }
    ctx->pc = 0x29467Cu;
label_29467c:
    // 0x29467c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x29467cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294680: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x294680u;
    {
        const bool branch_taken_0x294680 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x294684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294680u;
        // 0x294684: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294680) {
            ctx->pc = 0x294690u;
            goto label_294690;
        }
    }
    ctx->pc = 0x294688u;
    // 0x294688: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x294688u;
    {
        const bool branch_taken_0x294688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294688u;
        // 0x29468c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294688) {
            ctx->pc = 0x2946E0u;
            goto label_2946e0;
        }
    }
    ctx->pc = 0x294690u;
label_294690:
    // 0x294690: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x294690u;
    {
        const bool branch_taken_0x294690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294690u;
        // 0x294694: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294690) {
            ctx->pc = 0x29469Cu;
            goto label_29469c;
        }
    }
    ctx->pc = 0x294698u;
label_294698:
    // 0x294698: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x294698u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_29469c:
    // 0x29469c: 0x2e220100  sltiu       $v0, $s1, 0x100
    ctx->pc = 0x29469cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2946a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2946A0u;
    {
        const bool branch_taken_0x2946a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2946A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2946A0u;
        // 0x2946a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2946a0) {
            ctx->pc = 0x2946C0u;
            goto label_2946c0;
        }
    }
    ctx->pc = 0x2946A8u;
    // 0x2946a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2946a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2946ac: 0xc0c9788  jal         func_325E20
    ctx->pc = 0x2946ACu;
    SET_GPR_U32(ctx, 31, 0x2946B4u);
    ctx->pc = 0x2946B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2946ACu;
    // 0x2946b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325E20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x325E20u, 0x2946ACu, 0x2946B4u)) {
        return;
    }
    ctx->pc = 0x2946B4u;
label_2946b4:
    // 0x2946b4: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x2946b4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2946b8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2946B8u;
    {
        const bool branch_taken_0x2946b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2946BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2946B8u;
        // 0x2946bc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2946b8) {
            ctx->pc = 0x294698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294698;
        }
    }
    ctx->pc = 0x2946C0u;
label_2946c0:
    // 0x2946c0: 0xc0c969a  jal         func_325A68
    ctx->pc = 0x2946C0u;
    SET_GPR_U32(ctx, 31, 0x2946C8u);
    ctx->pc = 0x2946C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2946C0u;
    // 0x2946c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325A68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x325A68u, 0x2946C0u, 0x2946C8u)) {
        return;
    }
    ctx->pc = 0x2946C8u;
label_2946c8:
    // 0x2946c8: 0x2624fff7  addiu       $a0, $s1, -0x9
    ctx->pc = 0x2946c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967287));
    // 0x2946cc: 0xc0c53de  jal         func_314F78
    ctx->pc = 0x2946CCu;
    SET_GPR_U32(ctx, 31, 0x2946D4u);
    ctx->pc = 0x2946D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2946CCu;
    // 0x2946d0: 0x3a42021  addu        $a0, $sp, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314F78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314F78u, 0x2946CCu, 0x2946D4u)) {
        return;
    }
    ctx->pc = 0x2946D4u;
label_2946d4:
    // 0x2946d4: 0x3c030131  lui         $v1, 0x131
    ctx->pc = 0x2946d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)305 << 16));
    // 0x2946d8: 0x34635670  ori         $v1, $v1, 0x5670
    ctx->pc = 0x2946d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)22128);
    // 0x2946dc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2946dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2946e0:
    // 0x2946e0: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x2946e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2946e4: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x2946e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2946e8: 0xdfb10110  ld          $s1, 0x110($sp)
    ctx->pc = 0x2946e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2946ec: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x2946ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2946f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2946F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2946F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2946F0u;
        // 0x2946f4: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2946F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2946F8u;
}
