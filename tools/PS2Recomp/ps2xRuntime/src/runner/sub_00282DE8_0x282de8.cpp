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

// Function: sub_00282DE8
// Address: 0x282de8 - 0x282e70
void sub_00282DE8_0x282de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282DE8_0x282de8");
#endif

    switch (ctx->pc) {
        case 0x282e30u: goto label_282e30;
        case 0x282e48u: goto label_282e48;
        default: break;
    }

    ctx->pc = 0x282de8u;

    // 0x282de8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x282de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x282dec: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x282decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x282df0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x282df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x282df4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x282df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x282df8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x282df8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282dfc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x282dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x282e00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x282e00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282e04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x282e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x282e08: 0x2452e6e0  addiu       $s2, $v0, -0x1920
    ctx->pc = 0x282e08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960864));
    // 0x282e0c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x282e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x67E6E8u));
    // 0x282e10: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x282e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x282e14: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x282e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x282e18: 0x5202000f  beql        $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x282E18u;
    {
        const bool branch_taken_0x282e18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x282e18) {
            ctx->pc = 0x282E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282E18u;
            // 0x282e1c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282E58u;
            goto label_282e58;
        }
    }
    ctx->pc = 0x282E20u;
    // 0x282e20: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x282E20u;
    {
        const bool branch_taken_0x282e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x282e20) {
            ctx->pc = 0x282E24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282E20u;
            // 0x282e24: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282E34u;
            goto label_282e34;
        }
    }
    ctx->pc = 0x282E28u;
    // 0x282e28: 0xc0a0e50  jal         func_283940
    ctx->pc = 0x282E28u;
    SET_GPR_U32(ctx, 31, 0x282E30u);
    ctx->pc = 0x283940u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x283940u, 0x282E28u, 0x282E30u)) {
        return;
    }
    ctx->pc = 0x282E30u;
label_282e30:
    // 0x282e30: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x282e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_282e34:
    // 0x282e34: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x282e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x282e38: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x282E38u;
    {
        const bool branch_taken_0x282e38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x282E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282E38u;
        // 0x282e3c: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282e38) {
            ctx->pc = 0x282E54u;
            goto label_282e54;
        }
    }
    ctx->pc = 0x282E40u;
    // 0x282e40: 0xc0a0ce0  jal         func_283380
    ctx->pc = 0x282E40u;
    SET_GPR_U32(ctx, 31, 0x282E48u);
    ctx->pc = 0x282E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282E40u;
    // 0x282e44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x283380u, 0x282E40u, 0x282E48u)) {
        return;
    }
    ctx->pc = 0x282E48u;
label_282e48:
    // 0x282e48: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x282e48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282e4c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x282E4Cu;
    {
        const bool branch_taken_0x282e4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x282E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282E4Cu;
        // 0x282e50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282e4c) {
            ctx->pc = 0x282E58u;
            goto label_282e58;
        }
    }
    ctx->pc = 0x282E54u;
label_282e54:
    // 0x282e54: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x282e54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_282e58:
    // 0x282e58: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x282e58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x282e5c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x282e5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282e60: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x282e60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282e64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x282e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282e68: 0x3e00008  jr          $ra
    ctx->pc = 0x282E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282E68u;
        // 0x282e6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282E70u;
}
