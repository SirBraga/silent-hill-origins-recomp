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

// Function: sub_002AD2E0
// Address: 0x2ad2e0 - 0x2ad350
void sub_002AD2E0_0x2ad2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD2E0_0x2ad2e0");
#endif

    switch (ctx->pc) {
        case 0x2ad334u: goto label_2ad334;
        default: break;
    }

    ctx->pc = 0x2ad2e0u;

    // 0x2ad2e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ad2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ad2e4: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2ad2e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad2e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ad2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ad2ec: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2ad2ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad2f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ad2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ad2f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ad2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ad2f8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2ad2f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad2fc: 0x95020020  lhu         $v0, 0x20($t0)
    ctx->pc = 0x2ad2fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x2ad300: 0x8ce50068  lw          $a1, 0x68($a3)
    ctx->pc = 0x2ad300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 104)));
    // 0x2ad304: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x2ad304u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x2ad308: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2ad308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2ad30c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ad30cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ad310: 0x442004  sllv        $a0, $a0, $v0
    ctx->pc = 0x2ad310u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x2ad314: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ad314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ad318: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2ad318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ad31c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2ad31cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2ad320: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AD320u;
    {
        const bool branch_taken_0x2ad320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD320u;
        // 0x2ad324: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad320) {
            ctx->pc = 0x2AD338u;
            goto label_2ad338;
        }
    }
    ctx->pc = 0x2AD328u;
    // 0x2ad328: 0x95050020  lhu         $a1, 0x20($t0)
    ctx->pc = 0x2ad328u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x2ad32c: 0xc0adf12  jal         func_2B7C48
    ctx->pc = 0x2AD32Cu;
    SET_GPR_U32(ctx, 31, 0x2AD334u);
    ctx->pc = 0x2AD330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD32Cu;
    // 0x2ad330: 0x8ce40000  lw          $a0, 0x0($a3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7C48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B7C48u, 0x2AD32Cu, 0x2AD334u)) {
        return;
    }
    ctx->pc = 0x2AD334u;
label_2ad334:
    // 0x2ad334: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ad334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ad338:
    // 0x2ad338: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ad338u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ad33c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2ad33cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad340: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ad340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad344: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD344u;
        // 0x2ad348: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD34Cu;
    // 0x2ad34c: 0x0  nop
    ctx->pc = 0x2ad34cu;
    // NOP
    ctx->pc = 0x2ad350u;
}
