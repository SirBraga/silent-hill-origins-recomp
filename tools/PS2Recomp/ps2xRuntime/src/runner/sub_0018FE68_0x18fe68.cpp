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

// Function: sub_0018FE68
// Address: 0x18fe68 - 0x18ff58
void sub_0018FE68_0x18fe68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018FE68_0x18fe68");
#endif

    switch (ctx->pc) {
        case 0x18fe94u: goto label_18fe94;
        case 0x18fef8u: goto label_18fef8;
        case 0x18ff14u: goto label_18ff14;
        case 0x18ff3cu: goto label_18ff3c;
        default: break;
    }

    ctx->pc = 0x18fe68u;

    // 0x18fe68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18fe68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18fe6c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x18fe6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x18fe70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18fe70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18fe74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18fe74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fe78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18fe78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18fe7c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18fe7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fe80: 0x8e0200e4  lw          $v0, 0xE4($s0)
    ctx->pc = 0x18fe80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x18fe84: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18FE84u;
    {
        const bool branch_taken_0x18fe84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FE84u;
        // 0x18fe88: 0x8e03006c  lw          $v1, 0x6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fe84) {
            ctx->pc = 0x18FE98u;
            goto label_18fe98;
        }
    }
    ctx->pc = 0x18FE8Cu;
    // 0x18fe8c: 0xc0644cc  jal         func_191330
    ctx->pc = 0x18FE8Cu;
    SET_GPR_U32(ctx, 31, 0x18FE94u);
    ctx->pc = 0x191330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x191330u, 0x18FE8Cu, 0x18FE94u)) {
        return;
    }
    ctx->pc = 0x18FE94u;
label_18fe94:
    // 0x18fe94: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x18fe94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18fe98:
    // 0x18fe98: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x18FE98u;
    {
        const bool branch_taken_0x18fe98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FE98u;
        // 0x18fe9c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fe98) {
            ctx->pc = 0x18FF00u;
            goto label_18ff00;
        }
    }
    ctx->pc = 0x18FEA0u;
    // 0x18fea0: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x18fea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x18fea4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18FEA4u;
    {
        const bool branch_taken_0x18fea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18FEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FEA4u;
        // 0x18fea8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fea4) {
            ctx->pc = 0x18FEBCu;
            goto label_18febc;
        }
    }
    ctx->pc = 0x18FEACu;
    // 0x18feac: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18FEACu;
    {
        const bool branch_taken_0x18feac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18FEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FEACu;
        // 0x18feb0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18feac) {
            ctx->pc = 0x18FEDCu;
            goto label_18fedc;
        }
    }
    ctx->pc = 0x18FEB4u;
    // 0x18feb4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x18FEB4u;
    {
        const bool branch_taken_0x18feb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FEB4u;
        // 0x18feb8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18feb4) {
            ctx->pc = 0x18FF44u;
            goto label_18ff44;
        }
    }
    ctx->pc = 0x18FEBCu;
label_18febc:
    // 0x18febc: 0x8e050078  lw          $a1, 0x78($s0)
    ctx->pc = 0x18febcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x18fec0: 0x14a00012  bnez        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x18FEC0u;
    {
        const bool branch_taken_0x18fec0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x18FEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FEC0u;
        // 0x18fec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fec0) {
            ctx->pc = 0x18FF0Cu;
            goto label_18ff0c;
        }
    }
    ctx->pc = 0x18FEC8u;
    // 0x18fec8: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x18fec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x18fecc: 0x1840001b  blez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x18FECCu;
    {
        const bool branch_taken_0x18fecc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x18FED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FECCu;
        // 0x18fed0: 0x2603004c  addiu       $v1, $s0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fecc) {
            ctx->pc = 0x18FF3Cu;
            goto label_18ff3c;
        }
    }
    ctx->pc = 0x18FED4u;
    // 0x18fed4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18FED4u;
    {
        const bool branch_taken_0x18fed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FED4u;
        // 0x18fed8: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fed4) {
            ctx->pc = 0x18FEECu;
            goto label_18feec;
        }
    }
    ctx->pc = 0x18FEDCu;
label_18fedc:
    // 0x18fedc: 0x8e050074  lw          $a1, 0x74($s0)
    ctx->pc = 0x18fedcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x18fee0: 0x14a0000a  bnez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x18FEE0u;
    {
        const bool branch_taken_0x18fee0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x18FEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FEE0u;
        // 0x18fee4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fee0) {
            ctx->pc = 0x18FF0Cu;
            goto label_18ff0c;
        }
    }
    ctx->pc = 0x18FEE8u;
    // 0x18fee8: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x18fee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_18feec:
    // 0x18feec: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x18feecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18fef0: 0xc0644dc  jal         func_191370
    ctx->pc = 0x18FEF0u;
    SET_GPR_U32(ctx, 31, 0x18FEF8u);
    ctx->pc = 0x18FEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FEF0u;
    // 0x18fef4: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191370u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x191370u, 0x18FEF0u, 0x18FEF8u)) {
        return;
    }
    ctx->pc = 0x18FEF8u;
label_18fef8:
    // 0x18fef8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x18FEF8u;
    {
        const bool branch_taken_0x18fef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FEF8u;
        // 0x18fefc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fef8) {
            ctx->pc = 0x18FF40u;
            goto label_18ff40;
        }
    }
    ctx->pc = 0x18FF00u;
label_18ff00:
    // 0x18ff00: 0x8e050078  lw          $a1, 0x78($s0)
    ctx->pc = 0x18ff00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x18ff04: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18FF04u;
    {
        const bool branch_taken_0x18ff04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF04u;
        // 0x18ff08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ff04) {
            ctx->pc = 0x18FF1Cu;
            goto label_18ff1c;
        }
    }
    ctx->pc = 0x18FF0Cu;
label_18ff0c:
    // 0x18ff0c: 0xc0644dc  jal         func_191370
    ctx->pc = 0x18FF0Cu;
    SET_GPR_U32(ctx, 31, 0x18FF14u);
    ctx->pc = 0x18FF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FF0Cu;
    // 0x18ff10: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191370u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x191370u, 0x18FF0Cu, 0x18FF14u)) {
        return;
    }
    ctx->pc = 0x18FF14u;
label_18ff14:
    // 0x18ff14: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18FF14u;
    {
        const bool branch_taken_0x18ff14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF14u;
        // 0x18ff18: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ff14) {
            ctx->pc = 0x18FF40u;
            goto label_18ff40;
        }
    }
    ctx->pc = 0x18FF1Cu;
label_18ff1c:
    // 0x18ff1c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x18ff1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x18ff20: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18FF20u;
    {
        const bool branch_taken_0x18ff20 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x18FF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF20u;
        // 0x18ff24: 0x2603004c  addiu       $v1, $s0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ff20) {
            ctx->pc = 0x18FF3Cu;
            goto label_18ff3c;
        }
    }
    ctx->pc = 0x18FF28u;
    // 0x18ff28: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x18ff28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x18ff2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18ff2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ff30: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x18ff30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ff34: 0xc0644dc  jal         func_191370
    ctx->pc = 0x18FF34u;
    SET_GPR_U32(ctx, 31, 0x18FF3Cu);
    ctx->pc = 0x18FF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FF34u;
    // 0x18ff38: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191370u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x191370u, 0x18FF34u, 0x18FF3Cu)) {
        return;
    }
    ctx->pc = 0x18FF3Cu;
label_18ff3c:
    // 0x18ff3c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x18ff3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18ff40:
    // 0x18ff40: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x18ff40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18ff44:
    // 0x18ff44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18ff44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ff48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18ff48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ff4c: 0x3e00008  jr          $ra
    ctx->pc = 0x18FF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF4Cu;
        // 0x18ff50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FF4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18FF54u;
    // 0x18ff54: 0x0  nop
    ctx->pc = 0x18ff54u;
    // NOP
    ctx->pc = 0x18ff58u;
}
