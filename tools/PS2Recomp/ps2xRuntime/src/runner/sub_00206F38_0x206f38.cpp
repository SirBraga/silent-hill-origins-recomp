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

// Function: sub_00206F38
// Address: 0x206f38 - 0x206f90
void sub_00206F38_0x206f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206F38_0x206f38");
#endif

    switch (ctx->pc) {
        case 0x206f54u: goto label_206f54;
        case 0x206f78u: goto label_206f78;
        default: break;
    }

    ctx->pc = 0x206f38u;

    // 0x206f38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x206f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x206f3c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x206f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x206f40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x206f40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206f44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x206f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x206f48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x206f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x206f4c: 0xc0941ac  jal         func_2506B0
    ctx->pc = 0x206F4Cu;
    SET_GPR_U32(ctx, 31, 0x206F54u);
    ctx->pc = 0x206F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206F4Cu;
    // 0x206f50: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2506B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2506B0u, 0x206F4Cu, 0x206F54u)) {
        return;
    }
    ctx->pc = 0x206F54u;
label_206f54:
    // 0x206f54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x206F54u;
    {
        const bool branch_taken_0x206f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206F54u;
        // 0x206f58: 0x3c050020  lui         $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206f54) {
            ctx->pc = 0x206F68u;
            goto label_206f68;
        }
    }
    ctx->pc = 0x206F5Cu;
    // 0x206f5c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x206f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x206f60: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x206F60u;
    {
        const bool branch_taken_0x206f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206F60u;
        // 0x206f64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206f60) {
            ctx->pc = 0x206F7Cu;
            goto label_206f7c;
        }
    }
    ctx->pc = 0x206F68u;
label_206f68:
    // 0x206f68: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x206f68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206f6c: 0x24a56f38  addiu       $a1, $a1, 0x6F38
    ctx->pc = 0x206f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28472));
    // 0x206f70: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x206F70u;
    SET_GPR_U32(ctx, 31, 0x206F78u);
    ctx->pc = 0x206F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206F70u;
    // 0x206f74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2266F0u, 0x206F70u, 0x206F78u)) {
        return;
    }
    ctx->pc = 0x206F78u;
label_206f78:
    // 0x206f78: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x206f78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_206f7c:
    // 0x206f7c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x206f7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x206f80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x206f80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206f84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x206f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206f88: 0x3e00008  jr          $ra
    ctx->pc = 0x206F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206F88u;
        // 0x206f8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206F90u;
}
