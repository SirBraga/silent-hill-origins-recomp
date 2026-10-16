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

// Function: sub_001F8330
// Address: 0x1f8330 - 0x1f8388
void sub_001F8330_0x1f8330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8330_0x1f8330");
#endif

    switch (ctx->pc) {
        case 0x1f8348u: goto label_1f8348;
        case 0x1f8350u: goto label_1f8350;
        case 0x1f8358u: goto label_1f8358;
        case 0x1f8360u: goto label_1f8360;
        case 0x1f8370u: goto label_1f8370;
        case 0x1f8378u: goto label_1f8378;
        case 0x1f8380u: goto label_1f8380;
        default: break;
    }

    ctx->pc = 0x1f8330u;

    // 0x1f8330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f8330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f8334: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f8334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f8338: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1F8338u;
    {
        const bool branch_taken_0x1f8338 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F833Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8338u;
        // 0x1f833c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8338) {
            ctx->pc = 0x1F8398u;
            return;
        }
    }
    ctx->pc = 0x1F8340u;
    // 0x1f8340: 0xc0c5486  jal         func_315218
    ctx->pc = 0x1F8340u;
    SET_GPR_U32(ctx, 31, 0x1F8348u);
    ctx->pc = 0x315218u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315218u, 0x1F8340u, 0x1F8348u)) {
        return;
    }
    ctx->pc = 0x1F8348u;
label_1f8348:
    // 0x1f8348: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1F8348u;
    {
        const bool branch_taken_0x1f8348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8348u;
        // 0x1f834c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8348) {
            ctx->pc = 0x1F839Cu;
            return;
        }
    }
    ctx->pc = 0x1F8350u;
label_1f8350:
    // 0x1f8350: 0xc07e3f2  jal         func_1F8FC8
    ctx->pc = 0x1F8350u;
    SET_GPR_U32(ctx, 31, 0x1F8358u);
    ctx->pc = 0x1F8FC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8FC8u, 0x1F8350u, 0x1F8358u)) {
        return;
    }
    ctx->pc = 0x1F8358u;
label_1f8358:
    // 0x1f8358: 0xc07e526  jal         func_1F9498
    ctx->pc = 0x1F8358u;
    SET_GPR_U32(ctx, 31, 0x1F8360u);
    ctx->pc = 0x1F9498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9498u, 0x1F8358u, 0x1F8360u)) {
        return;
    }
    ctx->pc = 0x1F8360u;
label_1f8360:
    // 0x1f8360: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f8360u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8364: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f8364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8368: 0xc07e5c4  jal         func_1F9710
    ctx->pc = 0x1F8368u;
    SET_GPR_U32(ctx, 31, 0x1F8370u);
    ctx->pc = 0x1F836Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8368u;
    // 0x1f836c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9710u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9710u, 0x1F8368u, 0x1F8370u)) {
        return;
    }
    ctx->pc = 0x1F8370u;
label_1f8370:
    // 0x1f8370: 0xc07e3f2  jal         func_1F8FC8
    ctx->pc = 0x1F8370u;
    SET_GPR_U32(ctx, 31, 0x1F8378u);
    ctx->pc = 0x1F8FC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8FC8u, 0x1F8370u, 0x1F8378u)) {
        return;
    }
    ctx->pc = 0x1F8378u;
label_1f8378:
    // 0x1f8378: 0xc07e586  jal         func_1F9618
    ctx->pc = 0x1F8378u;
    SET_GPR_U32(ctx, 31, 0x1F8380u);
    ctx->pc = 0x1F837Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8378u;
    // 0x1f837c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9618u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9618u, 0x1F8378u, 0x1F8380u)) {
        return;
    }
    ctx->pc = 0x1F8380u;
label_1f8380:
    // 0x1f8380: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F8380u;
    {
        const bool branch_taken_0x1f8380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8380) {
            ctx->pc = 0x1F8370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f8370;
        }
    }
    ctx->pc = 0x1F8388u;
}
