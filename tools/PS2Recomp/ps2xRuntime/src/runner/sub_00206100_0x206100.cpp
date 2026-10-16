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

// Function: sub_00206100
// Address: 0x206100 - 0x206178
void sub_00206100_0x206100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206100_0x206100");
#endif

    switch (ctx->pc) {
        case 0x206164u: goto label_206164;
        default: break;
    }

    ctx->pc = 0x206100u;

    // 0x206100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x206100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x206104: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x206104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x206108: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x206108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20610c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20610cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x206110: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x206110u;
    {
        const bool branch_taken_0x206110 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x206114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206110u;
        // 0x206114: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206110) {
            ctx->pc = 0x206154u;
            goto label_206154;
        }
    }
    ctx->pc = 0x206118u;
    // 0x206118: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x206118u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x20611c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20611Cu;
    {
        const bool branch_taken_0x20611c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20611Cu;
        // 0x206120: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20611c) {
            ctx->pc = 0x206134u;
            goto label_206134;
        }
    }
    ctx->pc = 0x206124u;
    // 0x206124: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x206124u;
    {
        const bool branch_taken_0x206124 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x206128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206124u;
        // 0x206128: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206124) {
            ctx->pc = 0x20615Cu;
            goto label_20615c;
        }
    }
    ctx->pc = 0x20612Cu;
    // 0x20612c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x20612Cu;
    {
        const bool branch_taken_0x20612c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20612Cu;
        // 0x206130: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20612c) {
            ctx->pc = 0x206170u;
            goto label_206170;
        }
    }
    ctx->pc = 0x206134u;
label_206134:
    // 0x206134: 0x18a0000c  blez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x206134u;
    {
        const bool branch_taken_0x206134 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x206138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206134u;
        // 0x206138: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206134) {
            ctx->pc = 0x206168u;
            goto label_206168;
        }
    }
    ctx->pc = 0x20613Cu;
    // 0x20613c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x20613cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x206140: 0xdc430010  ld          $v1, 0x10($v0)
    ctx->pc = 0x206140u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x206144: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x206144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x206148: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x206148u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x20614c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20614Cu;
    {
        const bool branch_taken_0x20614c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20614Cu;
        // 0x206150: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20614c) {
            ctx->pc = 0x206170u;
            goto label_206170;
        }
    }
    ctx->pc = 0x206154u;
label_206154:
    // 0x206154: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x206154u;
    {
        const bool branch_taken_0x206154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206154u;
        // 0x206158: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206154) {
            ctx->pc = 0x206168u;
            goto label_206168;
        }
    }
    ctx->pc = 0x20615Cu;
label_20615c:
    // 0x20615c: 0xc08197e  jal         func_2065F8
    ctx->pc = 0x20615Cu;
    SET_GPR_U32(ctx, 31, 0x206164u);
    ctx->pc = 0x2065F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2065F8u, 0x20615Cu, 0x206164u)) {
        return;
    }
    ctx->pc = 0x206164u;
label_206164:
    // 0x206164: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x206164u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_206168:
    // 0x206168: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x206168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20616c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x20616cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_206170:
    // 0x206170: 0x3e00008  jr          $ra
    ctx->pc = 0x206170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206170u;
        // 0x206174: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206178u;
}
