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

// Function: sub_002149F0
// Address: 0x2149f0 - 0x214a90
void sub_002149F0_0x2149f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002149F0_0x2149f0");
#endif

    switch (ctx->pc) {
        case 0x214a40u: goto label_214a40;
        default: break;
    }

    ctx->pc = 0x2149f0u;

    // 0x2149f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2149f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2149f4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x2149f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x2149f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2149f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2149fc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2149fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x214a00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x214a00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214a04: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x214a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x214a08: 0x24422d30  addiu       $v0, $v0, 0x2D30
    ctx->pc = 0x214a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11568));
    // 0x214a0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x214a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x214a10: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x214a10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x702D34u));
    // 0x214a14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x214A14u;
    {
        const bool branch_taken_0x214a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A14u;
        // 0x214a18: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214a14) {
            ctx->pc = 0x214A28u;
            goto label_214a28;
        }
    }
    ctx->pc = 0x214A1Cu;
    // 0x214a1c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x214A1Cu;
    {
        const bool branch_taken_0x214a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A1Cu;
        // 0x214a20: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214a1c) {
            ctx->pc = 0x214A2Cu;
            goto label_214a2c;
        }
    }
    ctx->pc = 0x214A24u;
    // 0x214a24: 0x0  nop
    ctx->pc = 0x214a24u;
    // NOP
label_214a28:
    // 0x214a28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x214a28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_214a2c:
    // 0x214a2c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x214A2Cu;
    {
        const bool branch_taken_0x214a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x214A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A2Cu;
        // 0x214a30: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214a2c) {
            ctx->pc = 0x214A7Cu;
            goto label_214a7c;
        }
    }
    ctx->pc = 0x214A34u;
    // 0x214a34: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x214a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x214a38: 0xc080858  jal         func_202160
    ctx->pc = 0x214A38u;
    SET_GPR_U32(ctx, 31, 0x214A40u);
    ctx->pc = 0x214A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214A38u;
    // 0x214a3c: 0x26302d30  addiu       $s0, $s1, 0x2D30 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 11568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x214A38u, 0x214A40u)) {
        return;
    }
    ctx->pc = 0x214A40u;
label_214a40:
    // 0x214a40: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x214a40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214a44: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x214a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x214a48: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x214a48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    // 0x214a4c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x214a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x214a50: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x214A50u;
    {
        const bool branch_taken_0x214a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A50u;
        // 0x214a54: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214a50) {
            ctx->pc = 0x214A5Cu;
            goto label_214a5c;
        }
    }
    ctx->pc = 0x214A58u;
    // 0x214a58: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x214a58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_214a5c:
    // 0x214a5c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x214a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x214a60: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x214A60u;
    {
        const bool branch_taken_0x214a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x214a60) {
            ctx->pc = 0x214A64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214A60u;
            // 0x214a64: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214A68u;
            goto label_214a68;
        }
    }
    ctx->pc = 0x214A68u;
label_214a68:
    // 0x214a68: 0x8e222d30  lw          $v0, 0x2D30($s1)
    ctx->pc = 0x214a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11568)));
    // 0x214a6c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x214a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x214a70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x214a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x214a74: 0xae222d30  sw          $v0, 0x2D30($s1)
    ctx->pc = 0x214a74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11568), GPR_U32(ctx, 2));
    // 0x214a78: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x214a78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_214a7c:
    // 0x214a7c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x214a7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214a80: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x214a80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214a84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x214a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214a88: 0x3e00008  jr          $ra
    ctx->pc = 0x214A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A88u;
        // 0x214a8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214A90u;
}
