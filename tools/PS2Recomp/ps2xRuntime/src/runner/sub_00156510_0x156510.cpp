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

// Function: sub_00156510
// Address: 0x156510 - 0x156578
void sub_00156510_0x156510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156510_0x156510");
#endif

    switch (ctx->pc) {
        case 0x156554u: goto label_156554;
        case 0x156560u: goto label_156560;
        default: break;
    }

    ctx->pc = 0x156510u;

    // 0x156510: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x156510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x156514: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x156514u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x156518: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x156518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x15651c: 0x8c4643e8  lw          $a2, 0x43E8($v0)
    ctx->pc = 0x15651cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B43E8u));
    // 0x156520: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x156520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x156524: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x156524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x156528: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x156528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15652c: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x15652cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x156530: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x156530u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156534: 0x10c20007  beq         $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x156534u;
    {
        const bool branch_taken_0x156534 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x156538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156534u;
        // 0x156538: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156534) {
            ctx->pc = 0x156554u;
            goto label_156554;
        }
    }
    ctx->pc = 0x15653Cu;
    // 0x15653c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x15653cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x156540: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x156540u;
    {
        const bool branch_taken_0x156540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x156544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156540u;
        // 0x156544: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156540) {
            ctx->pc = 0x156554u;
            goto label_156554;
        }
    }
    ctx->pc = 0x156548u;
    // 0x156548: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x156548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x15654c: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x15654Cu;
    SET_GPR_U32(ctx, 31, 0x156554u);
    ctx->pc = 0x156550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15654Cu;
    // 0x156550: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x15654Cu, 0x156554u)) {
        return;
    }
    ctx->pc = 0x156554u;
label_156554:
    // 0x156554: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x156554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156558: 0xc055508  jal         func_155420
    ctx->pc = 0x156558u;
    SET_GPR_U32(ctx, 31, 0x156560u);
    ctx->pc = 0x15655Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156558u;
    // 0x15655c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155420u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x155420u, 0x156558u, 0x156560u)) {
        return;
    }
    ctx->pc = 0x156560u;
label_156560:
    // 0x156560: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x156560u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x156564: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x156564u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x156568: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x156568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15656c: 0x3e00008  jr          $ra
    ctx->pc = 0x15656Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15656Cu;
        // 0x156570: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15656Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156574u;
    // 0x156574: 0x0  nop
    ctx->pc = 0x156574u;
    // NOP
    ctx->pc = 0x156578u;
}
