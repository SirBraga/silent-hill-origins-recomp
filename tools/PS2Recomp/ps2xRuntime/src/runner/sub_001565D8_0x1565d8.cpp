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

// Function: sub_001565D8
// Address: 0x1565d8 - 0x156658
void sub_001565D8_0x1565d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001565D8_0x1565d8");
#endif

    switch (ctx->pc) {
        case 0x1565f8u: goto label_1565f8;
        case 0x156638u: goto label_156638;
        case 0x156644u: goto label_156644;
        default: break;
    }

    ctx->pc = 0x1565d8u;

    // 0x1565d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1565d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1565dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1565dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1565e0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1565e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1565e4: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1565e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1565e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1565e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1565ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1565ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1565f0: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1565F0u;
    SET_GPR_U32(ctx, 31, 0x1565F8u);
    ctx->pc = 0x1565F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1565F0u;
    // 0x1565f4: 0x26040088  addiu       $a0, $s0, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1565F0u, 0x1565F8u)) {
        return;
    }
    ctx->pc = 0x1565F8u;
label_1565f8:
    // 0x1565f8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1565f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1565fc: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1565fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x156600: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x156600u;
    {
        const bool branch_taken_0x156600 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x156604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156600u;
        // 0x156604: 0x8c438b2c  lw          $v1, -0x74D4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156600) {
            ctx->pc = 0x15661Cu;
            goto label_15661c;
        }
    }
    ctx->pc = 0x156608u;
    // 0x156608: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x156608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15660c: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15660Cu;
    {
        const bool branch_taken_0x15660c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x156610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15660Cu;
        // 0x156610: 0x2462004c  addiu       $v0, $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15660c) {
            ctx->pc = 0x156620u;
            goto label_156620;
        }
    }
    ctx->pc = 0x156614u;
    // 0x156614: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x156614u;
    {
        const bool branch_taken_0x156614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156614u;
        // 0x156618: 0x8e030048  lw          $v1, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156614) {
            ctx->pc = 0x156628u;
            goto label_156628;
        }
    }
    ctx->pc = 0x15661Cu;
label_15661c:
    // 0x15661c: 0x2462003c  addiu       $v0, $v1, 0x3C
    ctx->pc = 0x15661cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
label_156620:
    // 0x156620: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x156620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x156624: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x156624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_156628:
    // 0x156628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x156628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15662c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x15662cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x156630: 0xc055490  jal         func_155240
    ctx->pc = 0x156630u;
    SET_GPR_U32(ctx, 31, 0x156638u);
    ctx->pc = 0x156634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156630u;
    // 0x156634: 0xae02009c  sw          $v0, 0x9C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155240u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x155240u, 0x156630u, 0x156638u)) {
        return;
    }
    ctx->pc = 0x156638u;
label_156638:
    // 0x156638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x156638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15663c: 0xc0554c0  jal         func_155300
    ctx->pc = 0x15663Cu;
    SET_GPR_U32(ctx, 31, 0x156644u);
    ctx->pc = 0x156640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15663Cu;
    // 0x156640: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155300u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x155300u, 0x15663Cu, 0x156644u)) {
        return;
    }
    ctx->pc = 0x156644u;
label_156644:
    // 0x156644: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x156644u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156648: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x156648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15664c: 0x3e00008  jr          $ra
    ctx->pc = 0x15664Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15664Cu;
        // 0x156650: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15664Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156654u;
    // 0x156654: 0x0  nop
    ctx->pc = 0x156654u;
    // NOP
    ctx->pc = 0x156658u;
}
