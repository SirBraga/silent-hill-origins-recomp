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

// Function: sub_001FA6C4
// Address: 0x1fa6c4 - 0x1fa780
void sub_001FA6C4_0x1fa6c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FA6C4_0x1fa6c4");
#endif

    switch (ctx->pc) {
        case 0x1fa6c8u: goto label_1fa6c8;
        case 0x1fa6e0u: goto label_1fa6e0;
        case 0x1fa708u: goto label_1fa708;
        case 0x1fa728u: goto label_1fa728;
        case 0x1fa74cu: goto label_1fa74c;
        default: break;
    }

    ctx->pc = 0x1fa6c4u;

    // 0x1fa6c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fa6c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fa6c8:
    // 0x1fa6c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1fa6c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fa6cc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1fa6ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa6d0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1fa6d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fa6d4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1fa6d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fa6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA6D8u;
        // 0x1fa6dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA6E0u;
label_1fa6e0:
    // 0x1fa6e0: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1fa6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1fa6e4: 0x8c621a50  lw          $v0, 0x1A50($v1)
    ctx->pc = 0x1fa6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A50u));
    // 0x1fa6e8: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x1fa6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x1fa6ec: 0xaca20014  sw          $v0, 0x14($a1)
    ctx->pc = 0x1fa6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
    // 0x1fa6f0: 0xac651a50  sw          $a1, 0x1A50($v1)
    ctx->pc = 0x1fa6f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x701A50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x701A50u, _value); } while (0);
    // 0x1fa6f4: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x1fa6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x1fa6f8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1fa6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x1fa6fc: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1fa6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1fa700: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA700u;
        // 0x1fa704: 0xaca00010  sw          $zero, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA708u;
label_1fa708:
    // 0x1fa708: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1fa708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1fa70c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fa70cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fa710: 0x8c431a50  lw          $v1, 0x1A50($v0)
    ctx->pc = 0x1fa710u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A50u));
    // 0x1fa714: 0x24451a50  addiu       $a1, $v0, 0x1A50
    ctx->pc = 0x1fa714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6736));
    // 0x1fa718: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fa718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fa71c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1FA71Cu;
    {
        const bool branch_taken_0x1fa71c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA71Cu;
        // 0x1fa720: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa71c) {
            ctx->pc = 0x1FA75Cu;
            goto label_1fa75c;
        }
    }
    ctx->pc = 0x1FA724u;
    // 0x1fa724: 0x0  nop
    ctx->pc = 0x1fa724u;
    // NOP
label_1fa728:
    // 0x1fa728: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x1fa728u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fa72c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1fa72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1fa730: 0x14440008  bne         $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FA730u;
    {
        const bool branch_taken_0x1fa730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1FA734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA730u;
        // 0x1fa734: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa730) {
            ctx->pc = 0x1FA754u;
            goto label_1fa754;
        }
    }
    ctx->pc = 0x1FA738u;
    // 0x1fa738: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1fa738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fa73c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1FA73Cu;
    {
        const bool branch_taken_0x1fa73c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA73Cu;
        // 0x1fa740: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa73c) {
            ctx->pc = 0x1FA76Cu;
            goto label_1fa76c;
        }
    }
    ctx->pc = 0x1FA744u;
    // 0x1fa744: 0xc0c5486  jal         func_315218
    ctx->pc = 0x1FA744u;
    SET_GPR_U32(ctx, 31, 0x1FA74Cu);
    ctx->pc = 0x1FA748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA744u;
    // 0x1fa748: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315218u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315218u, 0x1FA744u, 0x1FA74Cu)) {
        return;
    }
    ctx->pc = 0x1FA74Cu;
label_1fa74c:
    // 0x1fa74c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FA74Cu;
    {
        const bool branch_taken_0x1fa74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA74Cu;
        // 0x1fa750: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa74c) {
            ctx->pc = 0x1FA770u;
            goto label_1fa770;
        }
    }
    ctx->pc = 0x1FA754u;
label_1fa754:
    // 0x1fa754: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1FA754u;
    {
        const bool branch_taken_0x1fa754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA754u;
        // 0x1fa758: 0x26050014  addiu       $a1, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa754) {
            ctx->pc = 0x1FA728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa728;
        }
    }
    ctx->pc = 0x1FA75Cu;
label_1fa75c:
    // 0x1fa75c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fa75cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fa760: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fa760u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa764: 0x80c53aa  j           func_314EA8
    ctx->pc = 0x1FA764u;
    ctx->pc = 0x1FA768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA764u;
    // 0x1fa768: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314EA8u;
    sub_00314EA8_0x314ea8(rdram, ctx, runtime); return;
    ctx->pc = 0x1FA76Cu;
label_1fa76c:
    // 0x1fa76c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fa76cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fa770:
    // 0x1fa770: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fa770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fa774: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fa774u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa778: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA778u;
        // 0x1fa77c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA780u;
}
