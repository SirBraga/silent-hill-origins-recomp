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

// Function: sub_00227030
// Address: 0x227030 - 0x227140
void sub_00227030_0x227030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227030_0x227030");
#endif

    switch (ctx->pc) {
        case 0x227088u: goto label_227088;
        case 0x2270d0u: goto label_2270d0;
        case 0x2270e8u: goto label_2270e8;
        default: break;
    }

    ctx->pc = 0x227030u;

    // 0x227030: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x227030u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227034: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x227034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x227038: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x227038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x22703c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22703Cu;
    {
        const bool branch_taken_0x22703c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x227040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22703Cu;
        // 0x227040: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22703c) {
            ctx->pc = 0x227070u;
            goto label_227070;
        }
    }
    ctx->pc = 0x227044u;
    // 0x227044: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x227044u;
    {
        const bool branch_taken_0x227044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227044u;
        // 0x227048: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227044) {
            ctx->pc = 0x22705Cu;
            goto label_22705c;
        }
    }
    ctx->pc = 0x22704Cu;
    // 0x22704c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22704Cu;
    {
        const bool branch_taken_0x22704c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x227050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22704Cu;
        // 0x227050: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22704c) {
            ctx->pc = 0x227070u;
            goto label_227070;
        }
    }
    ctx->pc = 0x227054u;
    // 0x227054: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x227054u;
    {
        const bool branch_taken_0x227054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x227054) {
            ctx->pc = 0x227138u;
            goto label_227138;
        }
    }
    ctx->pc = 0x22705Cu;
label_22705c:
    // 0x22705c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x22705cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x227060: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x227060u;
    {
        const bool branch_taken_0x227060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x227064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227060u;
        // 0x227064: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227060) {
            ctx->pc = 0x2270BCu;
            goto label_2270bc;
        }
    }
    ctx->pc = 0x227068u;
    // 0x227068: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x227068u;
    {
        const bool branch_taken_0x227068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x227068) {
            ctx->pc = 0x227138u;
            goto label_227138;
        }
    }
    ctx->pc = 0x227070u;
label_227070:
    // 0x227070: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x227070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227074: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x227074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x227078: 0x1840002e  blez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x227078u;
    {
        const bool branch_taken_0x227078 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x22707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227078u;
        // 0x22707c: 0x8d240018  lw          $a0, 0x18($t1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227078) {
            ctx->pc = 0x227134u;
            goto label_227134;
        }
    }
    ctx->pc = 0x227080u;
    // 0x227080: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x227080u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227084: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x227084u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_227088:
    // 0x227088: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x227088u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x22708c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x22708cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x227090: 0x90e50001  lbu         $a1, 0x1($a3)
    ctx->pc = 0x227090u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x227094: 0x90e60002  lbu         $a2, 0x2($a3)
    ctx->pc = 0x227094u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x227098: 0x45182a  slt         $v1, $v0, $a1
    ctx->pc = 0x227098u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x22709c: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x22709cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5));
    // 0x2270a0: 0x46202a  slt         $a0, $v0, $a2
    ctx->pc = 0x2270a0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2270a4: 0xc4100b  movn        $v0, $a2, $a0
    ctx->pc = 0x2270a4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6));
    // 0x2270a8: 0xa0e20003  sb          $v0, 0x3($a3)
    ctx->pc = 0x2270a8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x2270ac: 0x1500fff6  bnez        $t0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2270ACu;
    {
        const bool branch_taken_0x2270ac = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2270B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2270ACu;
        // 0x2270b0: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2270ac) {
            ctx->pc = 0x227088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227088;
        }
    }
    ctx->pc = 0x2270B4u;
    // 0x2270b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2270B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2270B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2270B4u;
        // 0x2270b8: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2270B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2270BCu;
label_2270bc:
    // 0x2270bc: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x2270bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x2270c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2270c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2270c4: 0x1840001b  blez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2270C4u;
    {
        const bool branch_taken_0x2270c4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2270C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2270C4u;
        // 0x2270c8: 0x8d2a0014  lw          $t2, 0x14($t1) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2270c4) {
            ctx->pc = 0x227134u;
            goto label_227134;
        }
    }
    ctx->pc = 0x2270CCu;
    // 0x2270cc: 0x0  nop
    ctx->pc = 0x2270ccu;
    // NOP
label_2270d0:
    // 0x2270d0: 0x250b0001  addiu       $t3, $t0, 0x1
    ctx->pc = 0x2270d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2270d4: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x2270d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x2270d8: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2270D8u;
    {
        const bool branch_taken_0x2270d8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2270DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2270D8u;
        // 0x2270dc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2270d8) {
            ctx->pc = 0x22711Cu;
            goto label_22711c;
        }
    }
    ctx->pc = 0x2270E0u;
    // 0x2270e0: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x2270e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2270e4: 0x0  nop
    ctx->pc = 0x2270e4u;
    // NOP
label_2270e8:
    // 0x2270e8: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x2270e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2270ec: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2270ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2270f0: 0x90e50001  lbu         $a1, 0x1($a3)
    ctx->pc = 0x2270f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x2270f4: 0x90e60002  lbu         $a2, 0x2($a3)
    ctx->pc = 0x2270f4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x2270f8: 0x45182a  slt         $v1, $v0, $a1
    ctx->pc = 0x2270f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2270fc: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x2270fcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5));
    // 0x227100: 0x46202a  slt         $a0, $v0, $a2
    ctx->pc = 0x227100u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x227104: 0xc4100b  movn        $v0, $a2, $a0
    ctx->pc = 0x227104u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6));
    // 0x227108: 0xa0e20003  sb          $v0, 0x3($a3)
    ctx->pc = 0x227108u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x22710c: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x22710cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x227110: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x227110u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x227114: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x227114u;
    {
        const bool branch_taken_0x227114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x227118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227114u;
        // 0x227118: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227114) {
            ctx->pc = 0x2270E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2270e8;
        }
    }
    ctx->pc = 0x22711Cu;
label_22711c:
    // 0x22711c: 0x8d230010  lw          $v1, 0x10($t1)
    ctx->pc = 0x22711cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x227120: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x227120u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227124: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x227124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x227128: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x227128u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x22712c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x22712Cu;
    {
        const bool branch_taken_0x22712c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x227130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22712Cu;
        // 0x227130: 0x1435021  addu        $t2, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22712c) {
            ctx->pc = 0x2270D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2270d0;
        }
    }
    ctx->pc = 0x227134u;
label_227134:
    // 0x227134: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x227134u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_227138:
    // 0x227138: 0x3e00008  jr          $ra
    ctx->pc = 0x227138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227140u;
}
