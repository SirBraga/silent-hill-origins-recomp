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

// Function: sub_0013EBE0
// Address: 0x13ebe0 - 0x13ec98
void sub_0013EBE0_0x13ebe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013EBE0_0x13ebe0");
#endif

    switch (ctx->pc) {
        case 0x13ec1cu: goto label_13ec1c;
        case 0x13ec28u: goto label_13ec28;
        case 0x13ec40u: goto label_13ec40;
        case 0x13ec4cu: goto label_13ec4c;
        case 0x13ec54u: goto label_13ec54;
        case 0x13ec5cu: goto label_13ec5c;
        default: break;
    }

    ctx->pc = 0x13ebe0u;

    // 0x13ebe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13ebe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13ebe4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x13ebe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x13ebe8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13ebe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13ebec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13ebecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ebf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13ebf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13ebf4: 0x8e0201c4  lw          $v0, 0x1C4($s0)
    ctx->pc = 0x13ebf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
    // 0x13ebf8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x13EBF8u;
    {
        const bool branch_taken_0x13ebf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EBF8u;
        // 0x13ebfc: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ebf8) {
            ctx->pc = 0x13EC80u;
            goto label_13ec80;
        }
    }
    ctx->pc = 0x13EC00u;
    // 0x13ec00: 0x8e0300f8  lw          $v1, 0xF8($s0)
    ctx->pc = 0x13ec00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x13ec04: 0x8c518bc4  lw          $s1, -0x743C($v0)
    ctx->pc = 0x13ec04u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937540)));
    // 0x13ec08: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13EC08u;
    {
        const bool branch_taken_0x13ec08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EC08u;
        // 0x13ec0c: 0xac600028  sw          $zero, 0x28($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ec08) {
            ctx->pc = 0x13EC28u;
            goto label_13ec28;
        }
    }
    ctx->pc = 0x13EC10u;
    // 0x13ec10: 0x8e0500f8  lw          $a1, 0xF8($s0)
    ctx->pc = 0x13ec10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x13ec14: 0xc066512  jal         func_199448
    ctx->pc = 0x13EC14u;
    SET_GPR_U32(ctx, 31, 0x13EC1Cu);
    ctx->pc = 0x13EC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EC14u;
    // 0x13ec18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199448u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x199448u, 0x13EC14u, 0x13EC1Cu)) {
        return;
    }
    ctx->pc = 0x13EC1Cu;
label_13ec1c:
    // 0x13ec1c: 0x8e0500f8  lw          $a1, 0xF8($s0)
    ctx->pc = 0x13ec1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x13ec20: 0xc06640a  jal         func_199028
    ctx->pc = 0x13EC20u;
    SET_GPR_U32(ctx, 31, 0x13EC28u);
    ctx->pc = 0x13EC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EC20u;
    // 0x13ec24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199028u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x199028u, 0x13EC20u, 0x13EC28u)) {
        return;
    }
    ctx->pc = 0x13EC28u;
label_13ec28:
    // 0x13ec28: 0x8e020158  lw          $v0, 0x158($s0)
    ctx->pc = 0x13ec28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x13ec2c: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13EC2Cu;
    {
        const bool branch_taken_0x13ec2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EC2Cu;
        // 0x13ec30: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ec2c) {
            ctx->pc = 0x13EC4Cu;
            goto label_13ec4c;
        }
    }
    ctx->pc = 0x13EC34u;
    // 0x13ec34: 0x8e050158  lw          $a1, 0x158($s0)
    ctx->pc = 0x13ec34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x13ec38: 0xc066512  jal         func_199448
    ctx->pc = 0x13EC38u;
    SET_GPR_U32(ctx, 31, 0x13EC40u);
    ctx->pc = 0x13EC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EC38u;
    // 0x13ec3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199448u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x199448u, 0x13EC38u, 0x13EC40u)) {
        return;
    }
    ctx->pc = 0x13EC40u;
label_13ec40:
    // 0x13ec40: 0x8e050158  lw          $a1, 0x158($s0)
    ctx->pc = 0x13ec40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x13ec44: 0xc06640a  jal         func_199028
    ctx->pc = 0x13EC44u;
    SET_GPR_U32(ctx, 31, 0x13EC4Cu);
    ctx->pc = 0x13EC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EC44u;
    // 0x13ec48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199028u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x199028u, 0x13EC44u, 0x13EC4Cu)) {
        return;
    }
    ctx->pc = 0x13EC4Cu;
label_13ec4c:
    // 0x13ec4c: 0xc0b5b86  jal         func_2D6E18
    ctx->pc = 0x13EC4Cu;
    SET_GPR_U32(ctx, 31, 0x13EC54u);
    ctx->pc = 0x13EC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EC4Cu;
    // 0x13ec50: 0x8e0400f4  lw          $a0, 0xF4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6E18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6E18u, 0x13EC4Cu, 0x13EC54u)) {
        return;
    }
    ctx->pc = 0x13EC54u;
label_13ec54:
    // 0x13ec54: 0xc0b5b86  jal         func_2D6E18
    ctx->pc = 0x13EC54u;
    SET_GPR_U32(ctx, 31, 0x13EC5Cu);
    ctx->pc = 0x13EC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EC54u;
    // 0x13ec58: 0x8e040154  lw          $a0, 0x154($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6E18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6E18u, 0x13EC54u, 0x13EC5Cu)) {
        return;
    }
    ctx->pc = 0x13EC5Cu;
label_13ec5c:
    // 0x13ec5c: 0xae0001c4  sw          $zero, 0x1C4($s0)
    ctx->pc = 0x13ec5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 0));
    // 0x13ec60: 0xae0000ec  sw          $zero, 0xEC($s0)
    ctx->pc = 0x13ec60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
    // 0x13ec64: 0xae00014c  sw          $zero, 0x14C($s0)
    ctx->pc = 0x13ec64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 0));
    // 0x13ec68: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x13ec68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
    // 0x13ec6c: 0xae000150  sw          $zero, 0x150($s0)
    ctx->pc = 0x13ec6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 0));
    // 0x13ec70: 0xae0000f4  sw          $zero, 0xF4($s0)
    ctx->pc = 0x13ec70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
    // 0x13ec74: 0xae000154  sw          $zero, 0x154($s0)
    ctx->pc = 0x13ec74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 0));
    // 0x13ec78: 0xae0000f8  sw          $zero, 0xF8($s0)
    ctx->pc = 0x13ec78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
    // 0x13ec7c: 0xae000158  sw          $zero, 0x158($s0)
    ctx->pc = 0x13ec7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 0));
label_13ec80:
    // 0x13ec80: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x13ec80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13ec84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13ec84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ec88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13ec88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ec8c: 0x3e00008  jr          $ra
    ctx->pc = 0x13EC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EC8Cu;
        // 0x13ec90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EC8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13EC94u;
    // 0x13ec94: 0x0  nop
    ctx->pc = 0x13ec94u;
    // NOP
    ctx->pc = 0x13ec98u;
}
