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

// Function: sub_002830A0
// Address: 0x2830a0 - 0x283110
void sub_002830A0_0x2830a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002830A0_0x2830a0");
#endif

    switch (ctx->pc) {
        case 0x2830dcu: goto label_2830dc;
        case 0x2830e4u: goto label_2830e4;
        default: break;
    }

    ctx->pc = 0x2830a0u;

    // 0x2830a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2830a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2830a4: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2830a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x2830a8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2830a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2830ac: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2830acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2830b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2830b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2830b4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2830b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2830b8: 0x2472e6e0  addiu       $s2, $v1, -0x1920
    ctx->pc = 0x2830b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960864));
    // 0x2830bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2830bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2830c0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2830c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x67E6E8u));
    // 0x2830c4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2830c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2830c8: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2830c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2830cc: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2830CCu;
    {
        const bool branch_taken_0x2830cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2830D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2830CCu;
        // 0x2830d0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2830cc) {
            ctx->pc = 0x2830F4u;
            goto label_2830f4;
        }
    }
    ctx->pc = 0x2830D4u;
    // 0x2830d4: 0xc0a0e50  jal         func_283940
    ctx->pc = 0x2830D4u;
    SET_GPR_U32(ctx, 31, 0x2830DCu);
    ctx->pc = 0x283940u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x283940u, 0x2830D4u, 0x2830DCu)) {
        return;
    }
    ctx->pc = 0x2830DCu;
label_2830dc:
    // 0x2830dc: 0xc0a0ba4  jal         func_282E90
    ctx->pc = 0x2830DCu;
    SET_GPR_U32(ctx, 31, 0x2830E4u);
    ctx->pc = 0x2830E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2830DCu;
    // 0x2830e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x282E90u, 0x2830DCu, 0x2830E4u)) {
        return;
    }
    ctx->pc = 0x2830E4u;
label_2830e4:
    // 0x2830e4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x2830e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2830e8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2830e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2830ec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2830ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2830f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2830f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2830f4:
    // 0x2830f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2830f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2830f8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2830f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2830fc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2830fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283100: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x283100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283104: 0x3e00008  jr          $ra
    ctx->pc = 0x283104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283104u;
        // 0x283108: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28310Cu;
    // 0x28310c: 0x0  nop
    ctx->pc = 0x28310cu;
    // NOP
    ctx->pc = 0x283110u;
}
