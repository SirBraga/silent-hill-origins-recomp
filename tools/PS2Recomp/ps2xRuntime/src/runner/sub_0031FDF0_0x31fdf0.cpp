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

// Function: sub_0031FDF0
// Address: 0x31fdf0 - 0x31fe98
void sub_0031FDF0_0x31fdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031FDF0_0x31fdf0");
#endif

    switch (ctx->pc) {
        case 0x31fe1cu: goto label_31fe1c;
        case 0x31fe60u: goto label_31fe60;
        default: break;
    }

    ctx->pc = 0x31fdf0u;

    // 0x31fdf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31fdf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31fdf4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x31fdf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x31fdf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31fdf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31fdfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31fdfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fe00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31fe00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31fe04: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x31fe04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x31fe08: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31FE08u;
    {
        const bool branch_taken_0x31fe08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FE08u;
        // 0x31fe0c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fe08) {
            ctx->pc = 0x31FE24u;
            goto label_31fe24;
        }
    }
    ctx->pc = 0x31FE10u;
    // 0x31fe10: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x31fe10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31fe14: 0xc0c787c  jal         func_31E1F0
    ctx->pc = 0x31FE14u;
    SET_GPR_U32(ctx, 31, 0x31FE1Cu);
    ctx->pc = 0x31FE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FE14u;
    // 0x31fe18: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E1F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31E1F0u, 0x31FE14u, 0x31FE1Cu)) {
        return;
    }
    ctx->pc = 0x31FE1Cu;
label_31fe1c:
    // 0x31fe1c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x31FE1Cu;
    {
        const bool branch_taken_0x31fe1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FE1Cu;
        // 0x31fe20: 0xae02004c  sw          $v0, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fe1c) {
            ctx->pc = 0x31FE6Cu;
            goto label_31fe6c;
        }
    }
    ctx->pc = 0x31FE24u;
label_31fe24:
    // 0x31fe24: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x31fe24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x31fe28: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x31fe28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x31fe2c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x31fe2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31fe30: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x31fe30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31fe34: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31FE34u;
    {
        const bool branch_taken_0x31fe34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FE34u;
        // 0x31fe38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fe34) {
            ctx->pc = 0x31FE48u;
            goto label_31fe48;
        }
    }
    ctx->pc = 0x31FE3Cu;
    // 0x31fe3c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x31fe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31fe40: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x31FE40u;
    {
        const bool branch_taken_0x31fe40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FE40u;
        // 0x31fe44: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fe40) {
            ctx->pc = 0x31FE78u;
            goto label_31fe78;
        }
    }
    ctx->pc = 0x31FE48u;
label_31fe48:
    // 0x31fe48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31fe48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fe4c: 0x2228004  sllv        $s0, $v0, $s1
    ctx->pc = 0x31fe4cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x31fe50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x31fe50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31fe54: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x31fe54u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x31fe58: 0xc0c787c  jal         func_31E1F0
    ctx->pc = 0x31FE58u;
    SET_GPR_U32(ctx, 31, 0x31FE60u);
    ctx->pc = 0x31FE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FE58u;
    // 0x31fe5c: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E1F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31E1F0u, 0x31FE58u, 0x31FE60u)) {
        return;
    }
    ctx->pc = 0x31FE60u;
label_31fe60:
    // 0x31fe60: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x31fe60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fe64: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x31FE64u;
    {
        const bool branch_taken_0x31fe64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31fe64) {
            ctx->pc = 0x31FE68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FE64u;
            // 0x31fe68: 0xac710004  sw          $s1, 0x4($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FE74u;
            goto label_31fe74;
        }
    }
    ctx->pc = 0x31FE6Cu;
label_31fe6c:
    // 0x31fe6c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x31FE6Cu;
    {
        const bool branch_taken_0x31fe6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FE6Cu;
        // 0x31fe70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fe6c) {
            ctx->pc = 0x31FE84u;
            goto label_31fe84;
        }
    }
    ctx->pc = 0x31FE74u;
label_31fe74:
    // 0x31fe74: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x31fe74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
label_31fe78:
    // 0x31fe78: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x31fe78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x31fe7c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x31fe7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fe80: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x31fe80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_31fe84:
    // 0x31fe84: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x31fe84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31fe88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31fe88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31fe8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31fe8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31fe90: 0x3e00008  jr          $ra
    ctx->pc = 0x31FE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FE90u;
        // 0x31fe94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FE90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FE98u;
}
