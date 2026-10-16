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

// Function: sub_001904E8
// Address: 0x1904e8 - 0x190560
void sub_001904E8_0x1904e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001904E8_0x1904e8");
#endif

    switch (ctx->pc) {
        case 0x190520u: goto label_190520;
        case 0x190544u: goto label_190544;
        default: break;
    }

    ctx->pc = 0x1904e8u;

    // 0x1904e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1904e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1904ec: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1904ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1904f0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1904f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1904f4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1904f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1904f8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1904f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1904fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1904fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190500: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x190500u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190504: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x190504u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190508: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x190508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x19050c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x19050cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190510: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190514: 0x2625001c  addiu       $a1, $s1, 0x1C
    ctx->pc = 0x190514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x190518: 0xc063616  jal         func_18D858
    ctx->pc = 0x190518u;
    SET_GPR_U32(ctx, 31, 0x190520u);
    ctx->pc = 0x19051Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190518u;
    // 0x19051c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18D858u, 0x190518u, 0x190520u)) {
        return;
    }
    ctx->pc = 0x190520u;
label_190520:
    // 0x190520: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x190520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190524: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x190524u;
    {
        const bool branch_taken_0x190524 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x190524) {
            ctx->pc = 0x19053Cu;
            goto label_19053c;
        }
    }
    ctx->pc = 0x19052Cu;
    // 0x19052c: 0x8e420044  lw          $v0, 0x44($s2)
    ctx->pc = 0x19052cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x190530: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x190530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x190534: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x190534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x190538: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x190538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_19053c:
    // 0x19053c: 0xc0644f4  jal         func_1913D0
    ctx->pc = 0x19053Cu;
    SET_GPR_U32(ctx, 31, 0x190544u);
    ctx->pc = 0x190540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19053Cu;
    // 0x190540: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1913D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1913D0u, 0x19053Cu, 0x190544u)) {
        return;
    }
    ctx->pc = 0x190544u;
label_190544:
    // 0x190544: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x190544u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190548: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x190548u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19054c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x19054cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x190550: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x190550u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190554: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190558: 0x3e00008  jr          $ra
    ctx->pc = 0x190558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19055Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190558u;
        // 0x19055c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190560u;
}
