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

// Function: sub_00106690
// Address: 0x106690 - 0x106760
void sub_00106690_0x106690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106690_0x106690");
#endif

    switch (ctx->pc) {
        case 0x1066c0u: goto label_1066c0;
        case 0x106718u: goto label_106718;
        default: break;
    }

    ctx->pc = 0x106690u;

    // 0x106690: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x106690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x106694: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x106694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x106698: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x106698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x10669c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10669cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066a0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1066a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1066a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1066a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1066a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1066ac: 0x8e0204b8  lw          $v0, 0x4B8($s0)
    ctx->pc = 0x1066acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1208)));
    // 0x1066b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1066B0u;
    {
        const bool branch_taken_0x1066b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1066B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1066B0u;
        // 0x1066b4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1066b0) {
            ctx->pc = 0x1066C0u;
            goto label_1066c0;
        }
    }
    ctx->pc = 0x1066B8u;
    // 0x1066b8: 0xc041a6e  jal         func_1069B8
    ctx->pc = 0x1066B8u;
    SET_GPR_U32(ctx, 31, 0x1066C0u);
    ctx->pc = 0x1069B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1069B8u, 0x1066B8u, 0x1066C0u)) {
        return;
    }
    ctx->pc = 0x1066C0u;
label_1066c0:
    // 0x1066c0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1066c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1066c4: 0x8e0304bc  lw          $v1, 0x4BC($s0)
    ctx->pc = 0x1066c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1212)));
    // 0x1066c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1066c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1066cc: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1066CCu;
    {
        const bool branch_taken_0x1066cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1066D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1066CCu;
        // 0x1066d0: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1066cc) {
            ctx->pc = 0x1066E8u;
            goto label_1066e8;
        }
    }
    ctx->pc = 0x1066D4u;
    // 0x1066d4: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x1066d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1066d8: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x1066d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1066dc: 0x8c430078  lw          $v1, 0x78($v0)
    ctx->pc = 0x1066dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1066e0: 0x50710017  beql        $v1, $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1066E0u;
    {
        const bool branch_taken_0x1066e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x1066e0) {
            ctx->pc = 0x1066E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1066E0u;
            // 0x1066e4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106740u;
            goto label_106740;
        }
    }
    ctx->pc = 0x1066E8u;
label_1066e8:
    // 0x1066e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1066e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1066ec: 0x12220014  beq         $s1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1066ECu;
    {
        const bool branch_taken_0x1066ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1066F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1066ECu;
        // 0x1066f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1066ec) {
            ctx->pc = 0x106740u;
            goto label_106740;
        }
    }
    ctx->pc = 0x1066F4u;
    // 0x1066f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1066f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1066f8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1066F8u;
    {
        const bool branch_taken_0x1066f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1066FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1066F8u;
        // 0x1066fc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1066f8) {
            ctx->pc = 0x106740u;
            goto label_106740;
        }
    }
    ctx->pc = 0x106700u;
    // 0x106700: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x106700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x106704: 0x14510004  bne         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x106704u;
    {
        const bool branch_taken_0x106704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x106708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106704u;
        // 0x106708: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106704) {
            ctx->pc = 0x106718u;
            goto label_106718;
        }
    }
    ctx->pc = 0x10670Cu;
    // 0x10670c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10670Cu;
    {
        const bool branch_taken_0x10670c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10670Cu;
        // 0x106710: 0xae0004bc  sw          $zero, 0x4BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10670c) {
            ctx->pc = 0x10673Cu;
            goto label_10673c;
        }
    }
    ctx->pc = 0x106714u;
    // 0x106714: 0x0  nop
    ctx->pc = 0x106714u;
    // NOP
label_106718:
    // 0x106718: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x106718u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x10671c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10671Cu;
    {
        const bool branch_taken_0x10671c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10671Cu;
        // 0x106720: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10671c) {
            ctx->pc = 0x106740u;
            goto label_106740;
        }
    }
    ctx->pc = 0x106724u;
    // 0x106724: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x106724u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x106728: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x106728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x10672c: 0x8c430078  lw          $v1, 0x78($v0)
    ctx->pc = 0x10672cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x106730: 0x5471fff9  bnel        $v1, $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x106730u;
    {
        const bool branch_taken_0x106730 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x106730) {
            ctx->pc = 0x106734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106730u;
            // 0x106734: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_106718;
        }
    }
    ctx->pc = 0x106738u;
    // 0x106738: 0xae0404bc  sw          $a0, 0x4BC($s0)
    ctx->pc = 0x106738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1212), GPR_U32(ctx, 4));
label_10673c:
    // 0x10673c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x10673cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_106740:
    // 0x106740: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x106740u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106744: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x106744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x106748: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x106748u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10674c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x10674cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106750: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x106750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106754: 0x3e00008  jr          $ra
    ctx->pc = 0x106754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106754u;
        // 0x106758: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10675Cu;
    // 0x10675c: 0x0  nop
    ctx->pc = 0x10675cu;
    // NOP
    ctx->pc = 0x106760u;
}
