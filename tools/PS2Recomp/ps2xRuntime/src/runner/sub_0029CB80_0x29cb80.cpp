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

// Function: sub_0029CB80
// Address: 0x29cb80 - 0x29cc08
void sub_0029CB80_0x29cb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029CB80_0x29cb80");
#endif

    switch (ctx->pc) {
        case 0x29cbc8u: goto label_29cbc8;
        default: break;
    }

    ctx->pc = 0x29cb80u;

    // 0x29cb80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29cb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29cb84: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x29cb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x29cb88: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29cb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29cb8c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x29cb8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cb90: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29cb90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29cb94: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x29cb94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cb98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29cb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29cb9c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x29cb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x29cba0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29cba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cba4: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x29cba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x29cba8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29CBA8u;
    {
        const bool branch_taken_0x29cba8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CBA8u;
        // 0x29cbac: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cba8) {
            ctx->pc = 0x29CBC8u;
            goto label_29cbc8;
        }
    }
    ctx->pc = 0x29CBB0u;
    // 0x29cbb0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29cbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29cbb4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x29cbb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x29cbb8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x29CBB8u;
    {
        const bool branch_taken_0x29cbb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29cbb8) {
            ctx->pc = 0x29CBBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29CBB8u;
            // 0x29cbbc: 0xae13001c  sw          $s3, 0x1C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29CBD0u;
            goto label_29cbd0;
        }
    }
    ctx->pc = 0x29CBC0u;
    // 0x29cbc0: 0xc0c5486  jal         func_315218
    ctx->pc = 0x29CBC0u;
    SET_GPR_U32(ctx, 31, 0x29CBC8u);
    ctx->pc = 0x315218u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315218u, 0x29CBC0u, 0x29CBC8u)) {
        return;
    }
    ctx->pc = 0x29CBC8u;
label_29cbc8:
    // 0x29cbc8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29cbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29cbcc: 0xae13001c  sw          $s3, 0x1C($s0)
    ctx->pc = 0x29cbccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 19));
label_29cbd0:
    // 0x29cbd0: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x29CBD0u;
    {
        const bool branch_taken_0x29cbd0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CBD0u;
        // 0x29cbd4: 0xae110020  sw          $s1, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cbd0) {
            ctx->pc = 0x29CBE4u;
            goto label_29cbe4;
        }
    }
    ctx->pc = 0x29CBD8u;
    // 0x29cbd8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x29cbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x29cbdc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29CBDCu;
    {
        const bool branch_taken_0x29cbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CBDCu;
        // 0x29cbe0: 0x621024  and         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cbdc) {
            ctx->pc = 0x29CBE8u;
            goto label_29cbe8;
        }
    }
    ctx->pc = 0x29CBE4u;
label_29cbe4:
    // 0x29cbe4: 0x34620001  ori         $v0, $v1, 0x1
    ctx->pc = 0x29cbe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_29cbe8:
    // 0x29cbe8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29cbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x29cbec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x29cbecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29cbf0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x29cbf0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29cbf4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29cbf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29cbf8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29cbf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29cbfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29cbfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29cc00: 0x3e00008  jr          $ra
    ctx->pc = 0x29CC00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC00u;
        // 0x29cc04: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CC00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29CC08u;
}
