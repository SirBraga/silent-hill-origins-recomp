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

// Function: sub_001F5340
// Address: 0x1f5340 - 0x1f53d0
void sub_001F5340_0x1f5340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5340_0x1f5340");
#endif

    switch (ctx->pc) {
        case 0x1f5378u: goto label_1f5378;
        case 0x1f5388u: goto label_1f5388;
        case 0x1f53a8u: goto label_1f53a8;
        default: break;
    }

    ctx->pc = 0x1f5340u;

    // 0x1f5340: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f5340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f5344: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1f5344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1f5348: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f5348u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f534c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1f534cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1f5350: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1f5350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1f5354: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f5354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5358: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1f5358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1f535c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1f535cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5360: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1f5360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1f5364: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1f5364u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5368: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f5368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f536c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1f536cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5370: 0xc065c40  jal         func_197100
    ctx->pc = 0x1F5370u;
    SET_GPR_U32(ctx, 31, 0x1F5378u);
    ctx->pc = 0x1F5374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5370u;
    // 0x1f5374: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1F5370u, 0x1F5378u)) {
        return;
    }
    ctx->pc = 0x1F5378u;
label_1f5378:
    // 0x1f5378: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f5378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f537c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f537cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5380: 0xc07d3b8  jal         func_1F4EE0
    ctx->pc = 0x1F5380u;
    SET_GPR_U32(ctx, 31, 0x1F5388u);
    ctx->pc = 0x1F5384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5380u;
    // 0x1f5384: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4EE0u, 0x1F5380u, 0x1F5388u)) {
        return;
    }
    ctx->pc = 0x1F5388u;
label_1f5388:
    // 0x1f5388: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f5388u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f538c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F538Cu;
    {
        const bool branch_taken_0x1f538c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F538Cu;
        // 0x1f5390: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f538c) {
            ctx->pc = 0x1F53A8u;
            goto label_1f53a8;
        }
    }
    ctx->pc = 0x1F5394u;
    // 0x1f5394: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1f5394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5398: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1f5398u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f539c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1f539cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f53a0: 0xc07d528  jal         func_1F54A0
    ctx->pc = 0x1F53A0u;
    SET_GPR_U32(ctx, 31, 0x1F53A8u);
    ctx->pc = 0x1F53A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F53A0u;
    // 0x1f53a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F54A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F54A0u, 0x1F53A0u, 0x1F53A8u)) {
        return;
    }
    ctx->pc = 0x1F53A8u;
label_1f53a8:
    // 0x1f53a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f53a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f53ac: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1f53acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f53b0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1f53b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f53b4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1f53b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f53b8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1f53b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f53bc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1f53bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f53c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f53c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f53c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F53C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F53C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F53C4u;
        // 0x1f53c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F53C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F53CCu;
    // 0x1f53cc: 0x0  nop
    ctx->pc = 0x1f53ccu;
    // NOP
    ctx->pc = 0x1f53d0u;
}
