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

// Function: sub_00178CE0
// Address: 0x178ce0 - 0x178d98
void sub_00178CE0_0x178ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178CE0_0x178ce0");
#endif

    switch (ctx->pc) {
        case 0x178d18u: goto label_178d18;
        case 0x178d44u: goto label_178d44;
        default: break;
    }

    ctx->pc = 0x178ce0u;

    // 0x178ce0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x178ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x178ce4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x178ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x178ce8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x178ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x178cec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x178cecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178cf0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x178cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x178cf4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x178cf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178cf8: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x178CF8u;
    {
        const bool branch_taken_0x178cf8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x178CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178CF8u;
        // 0x178cfc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178cf8) {
            ctx->pc = 0x178D7Cu;
            goto label_178d7c;
        }
    }
    ctx->pc = 0x178D00u;
    // 0x178d00: 0x264200a4  addiu       $v0, $s2, 0xA4
    ctx->pc = 0x178d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 164));
    // 0x178d04: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x178d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x178d08: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x178D08u;
    {
        const bool branch_taken_0x178d08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x178D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178D08u;
        // 0x178d0c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178d08) {
            ctx->pc = 0x178D30u;
            goto label_178d30;
        }
    }
    ctx->pc = 0x178D10u;
    // 0x178d10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x178d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x178d14: 0x0  nop
    ctx->pc = 0x178d14u;
    // NOP
label_178d18:
    // 0x178d18: 0x54500003  bnel        $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x178D18u;
    {
        const bool branch_taken_0x178d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x178d18) {
            ctx->pc = 0x178D1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178D18u;
            // 0x178d1c: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178D28u;
            goto label_178d28;
        }
    }
    ctx->pc = 0x178D20u;
    // 0x178d20: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x178D20u;
    {
        const bool branch_taken_0x178d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178D20u;
        // 0x178d24: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178d20) {
            ctx->pc = 0x178D34u;
            goto label_178d34;
        }
    }
    ctx->pc = 0x178D28u;
label_178d28:
    // 0x178d28: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x178D28u;
    {
        const bool branch_taken_0x178d28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x178d28) {
            ctx->pc = 0x178D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178D28u;
            // 0x178d2c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178d18;
        }
    }
    ctx->pc = 0x178D30u;
label_178d30:
    // 0x178d30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x178d30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_178d34:
    // 0x178d34: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x178D34u;
    {
        const bool branch_taken_0x178d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x178d34) {
            ctx->pc = 0x178D38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178D34u;
            // 0x178d38: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178D80u;
            goto label_178d80;
        }
    }
    ctx->pc = 0x178D3Cu;
    // 0x178d3c: 0xc080858  jal         func_202160
    ctx->pc = 0x178D3Cu;
    SET_GPR_U32(ctx, 31, 0x178D44u);
    ctx->pc = 0x178D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178D3Cu;
    // 0x178d40: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x178D3Cu, 0x178D44u)) {
        return;
    }
    ctx->pc = 0x178D44u;
label_178d44:
    // 0x178d44: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x178d44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178d48: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x178d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x178d4c: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x178d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x178d50: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x178d50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x178d54: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x178D54u;
    {
        const bool branch_taken_0x178d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178D54u;
        // 0x178d58: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178d54) {
            ctx->pc = 0x178D60u;
            goto label_178d60;
        }
    }
    ctx->pc = 0x178D5Cu;
    // 0x178d5c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x178d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_178d60:
    // 0x178d60: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x178d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x178d64: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x178D64u;
    {
        const bool branch_taken_0x178d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x178d64) {
            ctx->pc = 0x178D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178D64u;
            // 0x178d68: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178D6Cu;
            goto label_178d6c;
        }
    }
    ctx->pc = 0x178D6Cu;
label_178d6c:
    // 0x178d6c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x178d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x178d70: 0x8e4200a4  lw          $v0, 0xA4($s2)
    ctx->pc = 0x178d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x178d74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x178d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x178d78: 0xae4200a4  sw          $v0, 0xA4($s2)
    ctx->pc = 0x178d78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 2));
label_178d7c:
    // 0x178d7c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x178d7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_178d80:
    // 0x178d80: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x178d80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178d84: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x178d84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178d88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x178d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x178D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178D8Cu;
        // 0x178d90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178D94u;
    // 0x178d94: 0x0  nop
    ctx->pc = 0x178d94u;
    // NOP
    ctx->pc = 0x178d98u;
}
