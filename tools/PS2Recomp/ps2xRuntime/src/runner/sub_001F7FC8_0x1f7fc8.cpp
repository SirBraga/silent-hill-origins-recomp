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

// Function: sub_001F7FC8
// Address: 0x1f7fc8 - 0x1f8088
void sub_001F7FC8_0x1f7fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7FC8_0x1f7fc8");
#endif

    ctx->pc = 0x1f7fc8u;

    // 0x1f7fc8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f7fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f7fcc: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x1f7fccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x1f7fd0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1f7fd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f7fd4: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x1f7fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1f7fd8: 0x235c2  srl         $a2, $v0, 23
    ctx->pc = 0x1f7fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 23));
    // 0x1f7fdc: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x1f7fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1f7fe0: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1f7fe0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1f7fe4: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7FE4u;
    {
        const bool branch_taken_0x1f7fe4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7FE4u;
        // 0x1f7fe8: 0xaca40004  sw          $a0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7fe4) {
            ctx->pc = 0x1F7FF8u;
            goto label_1f7ff8;
        }
    }
    ctx->pc = 0x1F7FECu;
    // 0x1f7fec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f7fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f7ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7FF0u;
        // 0x1f7ff4: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7FF8u;
label_1f7ff8:
    // 0x1f7ff8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1f7ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1f7ffc: 0x14c2000e  bne         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F7FFCu;
    {
        const bool branch_taken_0x1f7ffc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F8000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7FFCu;
        // 0x1f8000: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7ffc) {
            ctx->pc = 0x1F8038u;
            goto label_1f8038;
        }
    }
    ctx->pc = 0x1F8004u;
    // 0x1f8004: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8004u;
    {
        const bool branch_taken_0x1f8004 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8004u;
        // 0x1f8008: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8004) {
            ctx->pc = 0x1F8018u;
            goto label_1f8018;
        }
    }
    ctx->pc = 0x1F800Cu;
    // 0x1f800c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f800cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f8010: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8010u;
        // 0x1f8014: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8018u;
label_1f8018:
    // 0x1f8018: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f8018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f801c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F801Cu;
    {
        const bool branch_taken_0x1f801c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F801Cu;
        // 0x1f8020: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f801c) {
            ctx->pc = 0x1F802Cu;
            goto label_1f802c;
        }
    }
    ctx->pc = 0x1F8024u;
    // 0x1f8024: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F8024u;
    {
        const bool branch_taken_0x1f8024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8024u;
        // 0x1f8028: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8024) {
            ctx->pc = 0x1F8030u;
            goto label_1f8030;
        }
    }
    ctx->pc = 0x1F802Cu;
label_1f802c:
    // 0x1f802c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1f802cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_1f8030:
    // 0x1f8030: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8030u;
        // 0x1f8034: 0xaca3000c  sw          $v1, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8038u;
label_1f8038:
    // 0x1f8038: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x1f8038u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x1f803c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1f803cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1f8040: 0x24c4ff81  addiu       $a0, $a2, -0x7F
    ctx->pc = 0x1f8040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967169));
    // 0x1f8044: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1f8044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f8048: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x1f8048u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x1f804c: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x1f804cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x1f8050: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8050u;
        // 0x1f8054: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8058u;
    // 0x1f8058: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1f8058u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f805c: 0x0  nop
    ctx->pc = 0x1f805cu;
    // NOP
    // 0x1f8060: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1f8060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1f8064: 0x0  nop
    ctx->pc = 0x1f8064u;
    // NOP
    // 0x1f8068: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1f8068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1f806c: 0x0  nop
    ctx->pc = 0x1f806cu;
    // NOP
    // 0x1f8070: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f8070u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8074: 0x0  nop
    ctx->pc = 0x1f8074u;
    // NOP
    // 0x1f8078: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1f8078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1f807c: 0x0  nop
    ctx->pc = 0x1f807cu;
    // NOP
    // 0x1f8080: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1f8080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f8084: 0x0  nop
    ctx->pc = 0x1f8084u;
    // NOP
    ctx->pc = 0x1f8088u;
}
