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

// Function: sub_001906E0
// Address: 0x1906e0 - 0x190758
void sub_001906E0_0x1906e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001906E0_0x1906e0");
#endif

    switch (ctx->pc) {
        case 0x190718u: goto label_190718;
        case 0x19073cu: goto label_19073c;
        default: break;
    }

    ctx->pc = 0x1906e0u;

    // 0x1906e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1906e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1906e4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1906e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1906e8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1906e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1906ec: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1906ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1906f0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1906f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1906f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1906f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1906f8: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1906f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1906fc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1906fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190700: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x190700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x190704: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x190704u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190708: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19070c: 0x2625005c  addiu       $a1, $s1, 0x5C
    ctx->pc = 0x19070cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
    // 0x190710: 0xc063616  jal         func_18D858
    ctx->pc = 0x190710u;
    SET_GPR_U32(ctx, 31, 0x190718u);
    ctx->pc = 0x190714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190710u;
    // 0x190714: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18D858u, 0x190710u, 0x190718u)) {
        return;
    }
    ctx->pc = 0x190718u;
label_190718:
    // 0x190718: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x190718u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19071c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19071Cu;
    {
        const bool branch_taken_0x19071c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x19071c) {
            ctx->pc = 0x190734u;
            goto label_190734;
        }
    }
    ctx->pc = 0x190724u;
    // 0x190724: 0x8e420044  lw          $v0, 0x44($s2)
    ctx->pc = 0x190724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x190728: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x190728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x19072c: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x19072cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x190730: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x190730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_190734:
    // 0x190734: 0xc0644f4  jal         func_1913D0
    ctx->pc = 0x190734u;
    SET_GPR_U32(ctx, 31, 0x19073Cu);
    ctx->pc = 0x190738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190734u;
    // 0x190738: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1913D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1913D0u, 0x190734u, 0x19073Cu)) {
        return;
    }
    ctx->pc = 0x19073Cu;
label_19073c:
    // 0x19073c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19073cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190740: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x190740u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190744: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x190744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x190748: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x190748u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19074c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19074cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190750: 0x3e00008  jr          $ra
    ctx->pc = 0x190750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190750u;
        // 0x190754: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190758u;
}
