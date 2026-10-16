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

// Function: sub_001F8190
// Address: 0x1f8190 - 0x1f81e8
void sub_001F8190_0x1f8190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8190_0x1f8190");
#endif

    switch (ctx->pc) {
        case 0x1f81a8u: goto label_1f81a8;
        case 0x1f81b0u: goto label_1f81b0;
        case 0x1f81b8u: goto label_1f81b8;
        case 0x1f81c0u: goto label_1f81c0;
        case 0x1f81d0u: goto label_1f81d0;
        case 0x1f81d8u: goto label_1f81d8;
        case 0x1f81e0u: goto label_1f81e0;
        default: break;
    }

    ctx->pc = 0x1f8190u;

    // 0x1f8190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f8190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f8194: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f8194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f8198: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1F8198u;
    {
        const bool branch_taken_0x1f8198 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F819Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8198u;
        // 0x1f819c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8198) {
            ctx->pc = 0x1F81F8u;
            return;
        }
    }
    ctx->pc = 0x1F81A0u;
    // 0x1f81a0: 0xc0c5486  jal         func_315218
    ctx->pc = 0x1F81A0u;
    SET_GPR_U32(ctx, 31, 0x1F81A8u);
    ctx->pc = 0x315218u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315218u, 0x1F81A0u, 0x1F81A8u)) {
        return;
    }
    ctx->pc = 0x1F81A8u;
label_1f81a8:
    // 0x1f81a8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1F81A8u;
    {
        const bool branch_taken_0x1f81a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F81ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F81A8u;
        // 0x1f81ac: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f81a8) {
            ctx->pc = 0x1F81FCu;
            return;
        }
    }
    ctx->pc = 0x1F81B0u;
label_1f81b0:
    // 0x1f81b0: 0xc07e3f2  jal         func_1F8FC8
    ctx->pc = 0x1F81B0u;
    SET_GPR_U32(ctx, 31, 0x1F81B8u);
    ctx->pc = 0x1F8FC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8FC8u, 0x1F81B0u, 0x1F81B8u)) {
        return;
    }
    ctx->pc = 0x1F81B8u;
label_1f81b8:
    // 0x1f81b8: 0xc07e526  jal         func_1F9498
    ctx->pc = 0x1F81B8u;
    SET_GPR_U32(ctx, 31, 0x1F81C0u);
    ctx->pc = 0x1F9498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9498u, 0x1F81B8u, 0x1F81C0u)) {
        return;
    }
    ctx->pc = 0x1F81C0u;
label_1f81c0:
    // 0x1f81c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f81c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f81c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f81c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f81c8: 0xc07e5c4  jal         func_1F9710
    ctx->pc = 0x1F81C8u;
    SET_GPR_U32(ctx, 31, 0x1F81D0u);
    ctx->pc = 0x1F81CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F81C8u;
    // 0x1f81cc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9710u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9710u, 0x1F81C8u, 0x1F81D0u)) {
        return;
    }
    ctx->pc = 0x1F81D0u;
label_1f81d0:
    // 0x1f81d0: 0xc07e3f2  jal         func_1F8FC8
    ctx->pc = 0x1F81D0u;
    SET_GPR_U32(ctx, 31, 0x1F81D8u);
    ctx->pc = 0x1F8FC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8FC8u, 0x1F81D0u, 0x1F81D8u)) {
        return;
    }
    ctx->pc = 0x1F81D8u;
label_1f81d8:
    // 0x1f81d8: 0xc07e586  jal         func_1F9618
    ctx->pc = 0x1F81D8u;
    SET_GPR_U32(ctx, 31, 0x1F81E0u);
    ctx->pc = 0x1F81DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F81D8u;
    // 0x1f81dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9618u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9618u, 0x1F81D8u, 0x1F81E0u)) {
        return;
    }
    ctx->pc = 0x1F81E0u;
label_1f81e0:
    // 0x1f81e0: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F81E0u;
    {
        const bool branch_taken_0x1f81e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f81e0) {
            ctx->pc = 0x1F81D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f81d0;
        }
    }
    ctx->pc = 0x1F81E8u;
}
