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

// Function: sub_001AEEA0
// Address: 0x1aeea0 - 0x1aef80
void sub_001AEEA0_0x1aeea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AEEA0_0x1aeea0");
#endif

    switch (ctx->pc) {
        case 0x1aeed8u: goto label_1aeed8;
        case 0x1aef00u: goto label_1aef00;
        case 0x1aef40u: goto label_1aef40;
        case 0x1aef68u: goto label_1aef68;
        default: break;
    }

    ctx->pc = 0x1aeea0u;

    // 0x1aeea0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1aeea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1aeea4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1aeea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1aeea8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1aeea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1aeeac: 0x2442bad8  addiu       $v0, $v0, -0x4528
    ctx->pc = 0x1aeeacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949592));
    // 0x1aeeb0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1aeeb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1aeeb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1aeeb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeeb8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1aeeb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1aeebc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aeebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aeec0: 0xae220258  sw          $v0, 0x258($s1)
    ctx->pc = 0x1aeec0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 2));
    // 0x1aeec4: 0x8e240048  lw          $a0, 0x48($s1)
    ctx->pc = 0x1aeec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1aeec8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AEEC8u;
    {
        const bool branch_taken_0x1aeec8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEEC8u;
        // 0x1aeecc: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeec8) {
            ctx->pc = 0x1AEEDCu;
            goto label_1aeedc;
        }
    }
    ctx->pc = 0x1AEED0u;
    // 0x1aeed0: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1AEED0u;
    SET_GPR_U32(ctx, 31, 0x1AEED8u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1AEED0u, 0x1AEED8u)) {
        return;
    }
    ctx->pc = 0x1AEED8u;
label_1aeed8:
    // 0x1aeed8: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x1aeed8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_1aeedc:
    // 0x1aeedc: 0x26300030  addiu       $s0, $s1, 0x30
    ctx->pc = 0x1aeedcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1aeee0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1aeee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1aeee4: 0x2442bbe8  addiu       $v0, $v0, -0x4418
    ctx->pc = 0x1aeee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949864));
    // 0x1aeee8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1aeee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1aeeec: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1aeeecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1aeef0: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1AEEF0u;
    {
        const bool branch_taken_0x1aeef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEEF0u;
        // 0x1aeef4: 0x32520001  andi        $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeef0) {
            ctx->pc = 0x1AEF58u;
            goto label_1aef58;
        }
    }
    ctx->pc = 0x1AEEF8u;
    // 0x1aeef8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1aeef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1aeefc: 0x0  nop
    ctx->pc = 0x1aeefcu;
    // NOP
label_1aef00:
    // 0x1aef00: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AEF00u;
    {
        const bool branch_taken_0x1aef00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aef00) {
            ctx->pc = 0x1AEF04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AEF00u;
            // 0x1aef04: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AEF50u;
            goto label_1aef50;
        }
    }
    ctx->pc = 0x1AEF08u;
    // 0x1aef08: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1aef08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1aef0c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AEF0Cu;
    {
        const bool branch_taken_0x1aef0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AEF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEF0Cu;
        // 0x1aef10: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aef0c) {
            ctx->pc = 0x1AEF1Cu;
            goto label_1aef1c;
        }
    }
    ctx->pc = 0x1AEF14u;
    // 0x1aef14: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AEF14u;
    {
        const bool branch_taken_0x1aef14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEF14u;
        // 0x1aef18: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aef14) {
            ctx->pc = 0x1AEF20u;
            goto label_1aef20;
        }
    }
    ctx->pc = 0x1AEF1Cu;
label_1aef1c:
    // 0x1aef1c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1aef1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1aef20:
    // 0x1aef20: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1aef20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1aef24: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AEF24u;
    {
        const bool branch_taken_0x1aef24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AEF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEF24u;
        // 0x1aef28: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aef24) {
            ctx->pc = 0x1AEF34u;
            goto label_1aef34;
        }
    }
    ctx->pc = 0x1AEF2Cu;
    // 0x1aef2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AEF2Cu;
    {
        const bool branch_taken_0x1aef2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEF2Cu;
        // 0x1aef30: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aef2c) {
            ctx->pc = 0x1AEF38u;
            goto label_1aef38;
        }
    }
    ctx->pc = 0x1AEF34u;
label_1aef34:
    // 0x1aef34: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1aef34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1aef38:
    // 0x1aef38: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1AEF38u;
    SET_GPR_U32(ctx, 31, 0x1AEF40u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1AEF38u, 0x1AEF40u)) {
        return;
    }
    ctx->pc = 0x1AEF40u;
label_1aef40:
    // 0x1aef40: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1aef40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1aef44: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1aef44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1aef48: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1aef48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1aef4c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1aef4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1aef50:
    // 0x1aef50: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1AEF50u;
    {
        const bool branch_taken_0x1aef50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aef50) {
            ctx->pc = 0x1AEF54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AEF50u;
            // 0x1aef54: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AEF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aef00;
        }
    }
    ctx->pc = 0x1AEF58u;
label_1aef58:
    // 0x1aef58: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AEF58u;
    {
        const bool branch_taken_0x1aef58 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEF58u;
        // 0x1aef5c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aef58) {
            ctx->pc = 0x1AEF6Cu;
            goto label_1aef6c;
        }
    }
    ctx->pc = 0x1AEF60u;
    // 0x1aef60: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1AEF60u;
    SET_GPR_U32(ctx, 31, 0x1AEF68u);
    ctx->pc = 0x1AEF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEF60u;
    // 0x1aef64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1AEF60u, 0x1AEF68u)) {
        return;
    }
    ctx->pc = 0x1AEF68u;
label_1aef68:
    // 0x1aef68: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1aef68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1aef6c:
    // 0x1aef6c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1aef6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aef70: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1aef70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aef74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aef74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aef78: 0x3e00008  jr          $ra
    ctx->pc = 0x1AEF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEF78u;
        // 0x1aef7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEF78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AEF80u;
}
