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

// Function: sub_001CADB0
// Address: 0x1cadb0 - 0x1cae20
void sub_001CADB0_0x1cadb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CADB0_0x1cadb0");
#endif

    switch (ctx->pc) {
        case 0x1cade4u: goto label_1cade4;
        case 0x1cadfcu: goto label_1cadfc;
        case 0x1cae0cu: goto label_1cae0c;
        default: break;
    }

    ctx->pc = 0x1cadb0u;

    // 0x1cadb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cadb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cadb4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1cadb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1cadb8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1cadb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1cadbc: 0x2442fb08  addiu       $v0, $v0, -0x4F8
    ctx->pc = 0x1cadbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966024));
    // 0x1cadc0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cadc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cadc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cadc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cadc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cadc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cadcc: 0xae020258  sw          $v0, 0x258($s0)
    ctx->pc = 0x1cadccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 2));
    // 0x1cadd0: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x1cadd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1cadd4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CADD4u;
    {
        const bool branch_taken_0x1cadd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CADD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CADD4u;
        // 0x1cadd8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cadd4) {
            ctx->pc = 0x1CADE8u;
            goto label_1cade8;
        }
    }
    ctx->pc = 0x1CADDCu;
    // 0x1caddc: 0xc06db5a  jal         func_1B6D68
    ctx->pc = 0x1CADDCu;
    SET_GPR_U32(ctx, 31, 0x1CADE4u);
    ctx->pc = 0x1CADE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CADDCu;
    // 0x1cade0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6D68u, 0x1CADDCu, 0x1CADE4u)) {
        return;
    }
    ctx->pc = 0x1CADE4u;
label_1cade4:
    // 0x1cade4: 0xae000260  sw          $zero, 0x260($s0)
    ctx->pc = 0x1cade4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 0));
label_1cade8:
    // 0x1cade8: 0x8e040274  lw          $a0, 0x274($s0)
    ctx->pc = 0x1cade8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
    // 0x1cadec: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CADECu;
    {
        const bool branch_taken_0x1cadec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cadec) {
            ctx->pc = 0x1CADF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CADECu;
            // 0x1cadf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CAE04u;
            goto label_1cae04;
        }
    }
    ctx->pc = 0x1CADF4u;
    // 0x1cadf4: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1CADF4u;
    SET_GPR_U32(ctx, 31, 0x1CADFCu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1CADF4u, 0x1CADFCu)) {
        return;
    }
    ctx->pc = 0x1CADFCu;
label_1cadfc:
    // 0x1cadfc: 0xae000274  sw          $zero, 0x274($s0)
    ctx->pc = 0x1cadfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 0));
    // 0x1cae00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cae00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cae04:
    // 0x1cae04: 0xc06bba8  jal         func_1AEEA0
    ctx->pc = 0x1CAE04u;
    SET_GPR_U32(ctx, 31, 0x1CAE0Cu);
    ctx->pc = 0x1CAE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE04u;
    // 0x1cae08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEEA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEEA0u, 0x1CAE04u, 0x1CAE0Cu)) {
        return;
    }
    ctx->pc = 0x1CAE0Cu;
label_1cae0c:
    // 0x1cae0c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1cae0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cae10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cae10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cae14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cae14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cae18: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE18u;
        // 0x1cae1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAE18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CAE20u;
}
