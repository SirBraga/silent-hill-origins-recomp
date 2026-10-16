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

// Function: sub_00102F40
// Address: 0x102f40 - 0x102fa0
void sub_00102F40_0x102f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102F40_0x102f40");
#endif

    switch (ctx->pc) {
        case 0x102f60u: goto label_102f60;
        case 0x102f94u: goto label_102f94;
        default: break;
    }

    ctx->pc = 0x102f40u;

    // 0x102f40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x102f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x102f44: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x102f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x102f48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x102f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x102f4c: 0x8c438280  lw          $v1, -0x7D80($v0)
    ctx->pc = 0x102f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x338280u));
    // 0x102f50: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x102f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x102f54: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x102F54u;
    {
        const bool branch_taken_0x102f54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x102F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F54u;
        // 0x102f58: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102f54) {
            ctx->pc = 0x102F78u;
            goto label_102f78;
        }
    }
    ctx->pc = 0x102F5Cu;
    // 0x102f5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x102f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_102f60:
    // 0x102f60: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x102F60u;
    {
        const bool branch_taken_0x102f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x102f60) {
            ctx->pc = 0x102F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102F60u;
            // 0x102f64: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102F70u;
            goto label_102f70;
        }
    }
    ctx->pc = 0x102F68u;
    // 0x102f68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x102F68u;
    {
        const bool branch_taken_0x102f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F68u;
        // 0x102f6c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102f68) {
            ctx->pc = 0x102F7Cu;
            goto label_102f7c;
        }
    }
    ctx->pc = 0x102F70u;
label_102f70:
    // 0x102f70: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x102F70u;
    {
        const bool branch_taken_0x102f70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x102f70) {
            ctx->pc = 0x102F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102F70u;
            // 0x102f74: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102f60;
        }
    }
    ctx->pc = 0x102F78u;
label_102f78:
    // 0x102f78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x102f78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_102f7c:
    // 0x102f7c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x102f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102f80: 0xa2200b  movn        $a0, $a1, $v0
    ctx->pc = 0x102f80u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5));
    // 0x102f84: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x102F84u;
    {
        const bool branch_taken_0x102f84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x102F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F84u;
        // 0x102f88: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102f84) {
            ctx->pc = 0x102F98u;
            goto label_102f98;
        }
    }
    ctx->pc = 0x102F8Cu;
    // 0x102f8c: 0xc04f0fe  jal         func_13C3F8
    ctx->pc = 0x102F8Cu;
    SET_GPR_U32(ctx, 31, 0x102F94u);
    ctx->pc = 0x102F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102F8Cu;
    // 0x102f90: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3F8u, 0x102F8Cu, 0x102F94u)) {
        return;
    }
    ctx->pc = 0x102F94u;
label_102f94:
    // 0x102f94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x102f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_102f98:
    // 0x102f98: 0x3e00008  jr          $ra
    ctx->pc = 0x102F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F98u;
        // 0x102f9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102FA0u;
}
