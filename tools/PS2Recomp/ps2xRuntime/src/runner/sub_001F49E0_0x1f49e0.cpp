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

// Function: sub_001F49E0
// Address: 0x1f49e0 - 0x1f4a90
void sub_001F49E0_0x1f49e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F49E0_0x1f49e0");
#endif

    switch (ctx->pc) {
        case 0x1f4a10u: goto label_1f4a10;
        case 0x1f4a50u: goto label_1f4a50;
        case 0x1f4a7cu: goto label_1f4a7c;
        default: break;
    }

    ctx->pc = 0x1f49e0u;

    // 0x1f49e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f49e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f49e4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f49e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1f49e8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f49e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1f49ec: 0x24422820  addiu       $v0, $v0, 0x2820
    ctx->pc = 0x1f49ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10272));
    // 0x1f49f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f49f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f49f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f49f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f49f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f49f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f49fc: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1f49fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1f4a00: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1f4a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f4a04: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1F4A04u;
    {
        const bool branch_taken_0x1f4a04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4A04u;
        // 0x1f4a08: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4a04) {
            ctx->pc = 0x1F4A68u;
            goto label_1f4a68;
        }
    }
    ctx->pc = 0x1F4A0Cu;
    // 0x1f4a0c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1f4a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f4a10:
    // 0x1f4a10: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F4A10u;
    {
        const bool branch_taken_0x1f4a10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4a10) {
            ctx->pc = 0x1F4A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4A10u;
            // 0x1f4a14: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4A60u;
            goto label_1f4a60;
        }
    }
    ctx->pc = 0x1F4A18u;
    // 0x1f4a18: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1f4a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f4a1c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F4A1Cu;
    {
        const bool branch_taken_0x1f4a1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4A1Cu;
        // 0x1f4a20: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4a1c) {
            ctx->pc = 0x1F4A2Cu;
            goto label_1f4a2c;
        }
    }
    ctx->pc = 0x1F4A24u;
    // 0x1f4a24: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F4A24u;
    {
        const bool branch_taken_0x1f4a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4A24u;
        // 0x1f4a28: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4a24) {
            ctx->pc = 0x1F4A30u;
            goto label_1f4a30;
        }
    }
    ctx->pc = 0x1F4A2Cu;
label_1f4a2c:
    // 0x1f4a2c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1f4a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1f4a30:
    // 0x1f4a30: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1f4a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1f4a34: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F4A34u;
    {
        const bool branch_taken_0x1f4a34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4A34u;
        // 0x1f4a38: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4a34) {
            ctx->pc = 0x1F4A44u;
            goto label_1f4a44;
        }
    }
    ctx->pc = 0x1F4A3Cu;
    // 0x1f4a3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F4A3Cu;
    {
        const bool branch_taken_0x1f4a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4A3Cu;
        // 0x1f4a40: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4a3c) {
            ctx->pc = 0x1F4A48u;
            goto label_1f4a48;
        }
    }
    ctx->pc = 0x1F4A44u;
label_1f4a44:
    // 0x1f4a44: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1f4a44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1f4a48:
    // 0x1f4a48: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1F4A48u;
    SET_GPR_U32(ctx, 31, 0x1F4A50u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1F4A48u, 0x1F4A50u)) {
        return;
    }
    ctx->pc = 0x1F4A50u;
label_1f4a50:
    // 0x1f4a50: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1f4a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f4a54: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f4a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f4a58: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1f4a58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1f4a5c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f4a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f4a60:
    // 0x1f4a60: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1F4A60u;
    {
        const bool branch_taken_0x1f4a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4a60) {
            ctx->pc = 0x1F4A64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4A60u;
            // 0x1f4a64: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f4a10;
        }
    }
    ctx->pc = 0x1F4A68u;
label_1f4a68:
    // 0x1f4a68: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1f4a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1f4a6c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F4A6Cu;
    {
        const bool branch_taken_0x1f4a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4a6c) {
            ctx->pc = 0x1F4A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4A6Cu;
            // 0x1f4a70: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4A80u;
            goto label_1f4a80;
        }
    }
    ctx->pc = 0x1F4A74u;
    // 0x1f4a74: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1F4A74u;
    SET_GPR_U32(ctx, 31, 0x1F4A7Cu);
    ctx->pc = 0x1F4A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4A74u;
    // 0x1f4a78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1F4A74u, 0x1F4A7Cu)) {
        return;
    }
    ctx->pc = 0x1F4A7Cu;
label_1f4a7c:
    // 0x1f4a7c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f4a7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f4a80:
    // 0x1f4a80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f4a80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f4a84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f4a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4a88: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4A88u;
        // 0x1f4a8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4A90u;
}
