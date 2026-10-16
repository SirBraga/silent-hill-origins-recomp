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

// Function: sub_002009E8
// Address: 0x2009e8 - 0x200a98
void sub_002009E8_0x2009e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002009E8_0x2009e8");
#endif

    switch (ctx->pc) {
        case 0x200a18u: goto label_200a18;
        case 0x200a58u: goto label_200a58;
        case 0x200a84u: goto label_200a84;
        default: break;
    }

    ctx->pc = 0x2009e8u;

    // 0x2009e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2009e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2009ec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2009ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2009f0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2009f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2009f4: 0x24423848  addiu       $v0, $v0, 0x3848
    ctx->pc = 0x2009f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14408));
    // 0x2009f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2009f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2009fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2009fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200a00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x200a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x200a04: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x200a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x200a08: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x200a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x200a0c: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x200A0Cu;
    {
        const bool branch_taken_0x200a0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x200A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200A0Cu;
        // 0x200a10: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200a0c) {
            ctx->pc = 0x200A70u;
            goto label_200a70;
        }
    }
    ctx->pc = 0x200A14u;
    // 0x200a14: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x200a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_200a18:
    // 0x200a18: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x200A18u;
    {
        const bool branch_taken_0x200a18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x200a18) {
            ctx->pc = 0x200A1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200A18u;
            // 0x200a1c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200A68u;
            goto label_200a68;
        }
    }
    ctx->pc = 0x200A20u;
    // 0x200a20: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x200a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x200a24: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x200A24u;
    {
        const bool branch_taken_0x200a24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x200A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200A24u;
        // 0x200a28: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200a24) {
            ctx->pc = 0x200A34u;
            goto label_200a34;
        }
    }
    ctx->pc = 0x200A2Cu;
    // 0x200a2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x200A2Cu;
    {
        const bool branch_taken_0x200a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200A2Cu;
        // 0x200a30: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200a2c) {
            ctx->pc = 0x200A38u;
            goto label_200a38;
        }
    }
    ctx->pc = 0x200A34u;
label_200a34:
    // 0x200a34: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x200a34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_200a38:
    // 0x200a38: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x200a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x200a3c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x200A3Cu;
    {
        const bool branch_taken_0x200a3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x200A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200A3Cu;
        // 0x200a40: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200a3c) {
            ctx->pc = 0x200A4Cu;
            goto label_200a4c;
        }
    }
    ctx->pc = 0x200A44u;
    // 0x200a44: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x200A44u;
    {
        const bool branch_taken_0x200a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200A44u;
        // 0x200a48: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200a44) {
            ctx->pc = 0x200A50u;
            goto label_200a50;
        }
    }
    ctx->pc = 0x200A4Cu;
label_200a4c:
    // 0x200a4c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x200a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_200a50:
    // 0x200a50: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x200A50u;
    SET_GPR_U32(ctx, 31, 0x200A58u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x200A50u, 0x200A58u)) {
        return;
    }
    ctx->pc = 0x200A58u;
label_200a58:
    // 0x200a58: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x200a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x200a5c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x200a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x200a60: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x200a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x200a64: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x200a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_200a68:
    // 0x200a68: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x200A68u;
    {
        const bool branch_taken_0x200a68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200a68) {
            ctx->pc = 0x200A6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200A68u;
            // 0x200a6c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200A18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200a18;
        }
    }
    ctx->pc = 0x200A70u;
label_200a70:
    // 0x200a70: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x200a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x200a74: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x200A74u;
    {
        const bool branch_taken_0x200a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x200a74) {
            ctx->pc = 0x200A78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200A74u;
            // 0x200a78: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200A88u;
            goto label_200a88;
        }
    }
    ctx->pc = 0x200A7Cu;
    // 0x200a7c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x200A7Cu;
    SET_GPR_U32(ctx, 31, 0x200A84u);
    ctx->pc = 0x200A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200A7Cu;
    // 0x200a80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x200A7Cu, 0x200A84u)) {
        return;
    }
    ctx->pc = 0x200A84u;
label_200a84:
    // 0x200a84: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x200a84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_200a88:
    // 0x200a88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x200a88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200a8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x200a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200a90: 0x3e00008  jr          $ra
    ctx->pc = 0x200A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200A90u;
        // 0x200a94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200A98u;
}
