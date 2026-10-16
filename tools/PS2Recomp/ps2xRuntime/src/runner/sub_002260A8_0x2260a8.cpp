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

// Function: sub_002260A8
// Address: 0x2260a8 - 0x2260f0
void sub_002260A8_0x2260a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002260A8_0x2260a8");
#endif

    switch (ctx->pc) {
        case 0x2260bcu: goto label_2260bc;
        case 0x2260d8u: goto label_2260d8;
        default: break;
    }

    ctx->pc = 0x2260a8u;

    // 0x2260a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2260a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2260ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2260acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2260b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2260b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2260b4: 0xc0897d4  jal         func_225F50
    ctx->pc = 0x2260B4u;
    SET_GPR_U32(ctx, 31, 0x2260BCu);
    ctx->pc = 0x2260B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2260B4u;
    // 0x2260b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225F50u, 0x2260B4u, 0x2260BCu)) {
        return;
    }
    ctx->pc = 0x2260BCu;
label_2260bc:
    // 0x2260bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2260bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2260c0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2260C0u;
    {
        const bool branch_taken_0x2260c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2260C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2260C0u;
        // 0x2260c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2260c0) {
            ctx->pc = 0x2260D8u;
            goto label_2260d8;
        }
    }
    ctx->pc = 0x2260C8u;
    // 0x2260c8: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x2260c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x2260cc: 0x304200fc  andi        $v0, $v0, 0xFC
    ctx->pc = 0x2260ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)252);
    // 0x2260d0: 0xc08992e  jal         func_2264B8
    ctx->pc = 0x2260D0u;
    SET_GPR_U32(ctx, 31, 0x2260D8u);
    ctx->pc = 0x2260D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2260D0u;
    // 0x2260d4: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x2260D0u, 0x2260D8u)) {
        return;
    }
    ctx->pc = 0x2260D8u;
label_2260d8:
    // 0x2260d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2260d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2260dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2260dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2260e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2260e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2260e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2260E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2260E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2260E4u;
        // 0x2260e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2260E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2260ECu;
    // 0x2260ec: 0x0  nop
    ctx->pc = 0x2260ecu;
    // NOP
    ctx->pc = 0x2260f0u;
}
