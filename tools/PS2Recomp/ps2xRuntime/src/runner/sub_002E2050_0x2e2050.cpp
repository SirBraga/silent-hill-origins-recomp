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

// Function: sub_002E2050
// Address: 0x2e2050 - 0x2e20d0
void sub_002E2050_0x2e2050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2050_0x2e2050");
#endif

    switch (ctx->pc) {
        case 0x2e2098u: goto label_2e2098;
        case 0x2e20acu: goto label_2e20ac;
        default: break;
    }

    ctx->pc = 0x2e2050u;

    // 0x2e2050: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e2050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e2054: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2e2054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2e2058: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2e2058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2e205c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e205cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2060: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e2060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e2064: 0x26500040  addiu       $s0, $s2, 0x40
    ctx->pc = 0x2e2064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x2e2068: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e2068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e206c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e206cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e2070: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2e2070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2e2074: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2E2074u;
    {
        const bool branch_taken_0x2e2074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2074) {
            ctx->pc = 0x2E2078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2074u;
            // 0x2e2078: 0xae00005c  sw          $zero, 0x5C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E20B0u;
            goto label_2e20b0;
        }
    }
    ctx->pc = 0x2E207Cu;
    // 0x2e207c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2e207cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2e2080: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E2080u;
    {
        const bool branch_taken_0x2e2080 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2080u;
        // 0x2e2084: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2080) {
            ctx->pc = 0x2E20A0u;
            goto label_2e20a0;
        }
    }
    ctx->pc = 0x2E2088u;
    // 0x2e2088: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2e2088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e208c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2e208cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e2090: 0xc0b6770  jal         func_2D9DC0
    ctx->pc = 0x2E2090u;
    SET_GPR_U32(ctx, 31, 0x2E2098u);
    ctx->pc = 0x2E2094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2090u;
    // 0x2e2094: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9DC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9DC0u, 0x2E2090u, 0x2E2098u)) {
        return;
    }
    ctx->pc = 0x2E2098u;
label_2e2098:
    // 0x2e2098: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e2098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e209c: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x2e209cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3));
label_2e20a0:
    // 0x2e20a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e20a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e20a4: 0xc0b807c  jal         func_2E01F0
    ctx->pc = 0x2E20A4u;
    SET_GPR_U32(ctx, 31, 0x2E20ACu);
    ctx->pc = 0x2E20A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E20A4u;
    // 0x2e20a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E01F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E01F0u, 0x2E20A4u, 0x2E20ACu)) {
        return;
    }
    ctx->pc = 0x2E20ACu;
label_2e20ac:
    // 0x2e20ac: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x2e20acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
label_2e20b0:
    // 0x2e20b0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2e20b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e20b4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2e20b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e20b8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e20b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e20bc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2e20bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e20c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e20c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e20c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E20C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E20C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E20C4u;
        // 0x2e20c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E20C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E20CCu;
    // 0x2e20cc: 0x0  nop
    ctx->pc = 0x2e20ccu;
    // NOP
    ctx->pc = 0x2e20d0u;
}
