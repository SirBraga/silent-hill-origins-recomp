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

// Function: sub_001F83A8
// Address: 0x1f83a8 - 0x1f8400
void sub_001F83A8_0x1f83a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F83A8_0x1f83a8");
#endif

    switch (ctx->pc) {
        case 0x1f83b8u: goto label_1f83b8;
        case 0x1f83c0u: goto label_1f83c0;
        case 0x1f83c8u: goto label_1f83c8;
        case 0x1f83d0u: goto label_1f83d0;
        case 0x1f83d8u: goto label_1f83d8;
        case 0x1f83e8u: goto label_1f83e8;
        case 0x1f83f0u: goto label_1f83f0;
        case 0x1f83f8u: goto label_1f83f8;
        default: break;
    }

    ctx->pc = 0x1f83a8u;

    // 0x1f83a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f83a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f83ac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f83acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f83b0: 0xc080858  jal         func_202160
    ctx->pc = 0x1F83B0u;
    SET_GPR_U32(ctx, 31, 0x1F83B8u);
    ctx->pc = 0x1F83B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F83B0u;
    // 0x1f83b4: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x1F83B0u, 0x1F83B8u)) {
        return;
    }
    ctx->pc = 0x1F83B8u;
label_1f83b8:
    // 0x1f83b8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1F83B8u;
    {
        const bool branch_taken_0x1f83b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F83BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F83B8u;
        // 0x1f83bc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f83b8) {
            ctx->pc = 0x1F8410u;
            return;
        }
    }
    ctx->pc = 0x1F83C0u;
label_1f83c0:
    // 0x1f83c0: 0xc07e3f2  jal         func_1F8FC8
    ctx->pc = 0x1F83C0u;
    SET_GPR_U32(ctx, 31, 0x1F83C8u);
    ctx->pc = 0x1F8FC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8FC8u, 0x1F83C0u, 0x1F83C8u)) {
        return;
    }
    ctx->pc = 0x1F83C8u;
label_1f83c8:
    // 0x1f83c8: 0xc07e526  jal         func_1F9498
    ctx->pc = 0x1F83C8u;
    SET_GPR_U32(ctx, 31, 0x1F83D0u);
    ctx->pc = 0x1F9498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9498u, 0x1F83C8u, 0x1F83D0u)) {
        return;
    }
    ctx->pc = 0x1F83D0u;
label_1f83d0:
    // 0x1f83d0: 0xc07eac0  jal         func_1FAB00
    ctx->pc = 0x1F83D0u;
    SET_GPR_U32(ctx, 31, 0x1F83D8u);
    ctx->pc = 0x1F83D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F83D0u;
    // 0x1f83d4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAB00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FAB00u, 0x1F83D0u, 0x1F83D8u)) {
        return;
    }
    ctx->pc = 0x1F83D8u;
label_1f83d8:
    // 0x1f83d8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1f83d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1f83dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f83dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f83e0: 0xc07e5c4  jal         func_1F9710
    ctx->pc = 0x1F83E0u;
    SET_GPR_U32(ctx, 31, 0x1F83E8u);
    ctx->pc = 0x1F83E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F83E0u;
    // 0x1f83e4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9710u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9710u, 0x1F83E0u, 0x1F83E8u)) {
        return;
    }
    ctx->pc = 0x1F83E8u;
label_1f83e8:
    // 0x1f83e8: 0xc07e3f2  jal         func_1F8FC8
    ctx->pc = 0x1F83E8u;
    SET_GPR_U32(ctx, 31, 0x1F83F0u);
    ctx->pc = 0x1F8FC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8FC8u, 0x1F83E8u, 0x1F83F0u)) {
        return;
    }
    ctx->pc = 0x1F83F0u;
label_1f83f0:
    // 0x1f83f0: 0xc07e586  jal         func_1F9618
    ctx->pc = 0x1F83F0u;
    SET_GPR_U32(ctx, 31, 0x1F83F8u);
    ctx->pc = 0x1F83F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F83F0u;
    // 0x1f83f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9618u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9618u, 0x1F83F0u, 0x1F83F8u)) {
        return;
    }
    ctx->pc = 0x1F83F8u;
label_1f83f8:
    // 0x1f83f8: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F83F8u;
    {
        const bool branch_taken_0x1f83f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f83f8) {
            ctx->pc = 0x1F83E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f83e8;
        }
    }
    ctx->pc = 0x1F8400u;
}
