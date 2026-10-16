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

// Function: sub_002A3958
// Address: 0x2a3958 - 0x2a39d0
void sub_002A3958_0x2a3958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3958_0x2a3958");
#endif

    switch (ctx->pc) {
        case 0x2a3978u: goto label_2a3978;
        case 0x2a3984u: goto label_2a3984;
        case 0x2a39a4u: goto label_2a39a4;
        case 0x2a39acu: goto label_2a39ac;
        case 0x2a39b4u: goto label_2a39b4;
        case 0x2a39c8u: goto label_2a39c8;
        default: break;
    }

    ctx->pc = 0x2a3958u;

    // 0x2a3958: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a3958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a395c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a395cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a3960: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a3960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a3964: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a3964u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3968: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2a3968u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a396c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a396cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a3970: 0xc0c4cce  jal         func_313338
    ctx->pc = 0x2A3970u;
    SET_GPR_U32(ctx, 31, 0x2A3978u);
    ctx->pc = 0x2A3974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3970u;
    // 0x2a3974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313338u, 0x2A3970u, 0x2A3978u)) {
        return;
    }
    ctx->pc = 0x2A3978u;
label_2a3978:
    // 0x2a3978: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a3978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a397c: 0xc0a7c08  jal         func_29F020
    ctx->pc = 0x2A397Cu;
    SET_GPR_U32(ctx, 31, 0x2A3984u);
    ctx->pc = 0x2A3980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A397Cu;
    // 0x2a3980: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F020u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29F020u, 0x2A397Cu, 0x2A3984u)) {
        return;
    }
    ctx->pc = 0x2A3984u;
label_2a3984:
    // 0x2a3984: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2a3984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2a3988: 0x2463e1e8  addiu       $v1, $v1, -0x1E18
    ctx->pc = 0x2a3988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959592));
    // 0x2a398c: 0xae300058  sw          $s0, 0x58($s1)
    ctx->pc = 0x2a398cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 16));
    // 0x2a3990: 0xae230050  sw          $v1, 0x50($s1)
    ctx->pc = 0x2a3990u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
    // 0x2a3994: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a3994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3998: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a3998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a399c: 0xc0a7cde  jal         func_29F378
    ctx->pc = 0x2A399Cu;
    SET_GPR_U32(ctx, 31, 0x2A39A4u);
    ctx->pc = 0x2A39A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A399Cu;
    // 0x2a39a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F378u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29F378u, 0x2A399Cu, 0x2A39A4u)) {
        return;
    }
    ctx->pc = 0x2A39A4u;
label_2a39a4:
    // 0x2a39a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A39A4u;
    {
        const bool branch_taken_0x2a39a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A39A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A39A4u;
        // 0x2a39a8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a39a4) {
            ctx->pc = 0x2A39B4u;
            goto label_2a39b4;
        }
    }
    ctx->pc = 0x2A39ACu;
label_2a39ac:
    // 0x2a39ac: 0xc07e3f2  jal         func_1F8FC8
    ctx->pc = 0x2A39ACu;
    SET_GPR_U32(ctx, 31, 0x2A39B4u);
    ctx->pc = 0x1F8FC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8FC8u, 0x2A39ACu, 0x2A39B4u)) {
        return;
    }
    ctx->pc = 0x2A39B4u;
label_2a39b4:
    // 0x2a39b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A39B4u;
    {
        const bool branch_taken_0x2a39b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A39B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A39B4u;
        // 0x2a39b8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a39b4) {
            ctx->pc = 0x2A39D8u;
            return;
        }
    }
    ctx->pc = 0x2A39BCu;
    // 0x2a39bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a39bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a39c0: 0xc0a7c56  jal         func_29F158
    ctx->pc = 0x2A39C0u;
    SET_GPR_U32(ctx, 31, 0x2A39C8u);
    ctx->pc = 0x2A39C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A39C0u;
    // 0x2a39c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F158u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29F158u, 0x2A39C0u, 0x2A39C8u)) {
        return;
    }
    ctx->pc = 0x2A39C8u;
label_2a39c8:
    // 0x2a39c8: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x2A39C8u;
    {
        const bool branch_taken_0x2a39c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a39c8) {
            ctx->pc = 0x2A39ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a39ac;
        }
    }
    ctx->pc = 0x2A39D0u;
}
