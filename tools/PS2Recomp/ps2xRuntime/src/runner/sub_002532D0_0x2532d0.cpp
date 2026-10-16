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

// Function: sub_002532D0
// Address: 0x2532d0 - 0x253348
void sub_002532D0_0x2532d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002532D0_0x2532d0");
#endif

    switch (ctx->pc) {
        case 0x2532f8u: goto label_2532f8;
        case 0x253324u: goto label_253324;
        default: break;
    }

    ctx->pc = 0x2532d0u;

    // 0x2532d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2532d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2532d4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2532d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2532d8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2532d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2532dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2532dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2532e0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2532e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2532e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2532e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2532e8: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2532e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2532ec: 0x24a53f98  addiu       $a1, $a1, 0x3F98
    ctx->pc = 0x2532ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16280));
    // 0x2532f0: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x2532F0u;
    SET_GPR_U32(ctx, 31, 0x2532F8u);
    ctx->pc = 0x2532F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2532F0u;
    // 0x2532f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x2532F0u, 0x2532F8u)) {
        return;
    }
    ctx->pc = 0x2532F8u;
label_2532f8:
    // 0x2532f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2532F8u;
    {
        const bool branch_taken_0x2532f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2532FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2532F8u;
        // 0x2532fc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2532f8) {
            ctx->pc = 0x253308u;
            goto label_253308;
        }
    }
    ctx->pc = 0x253300u;
    // 0x253300: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x253300u;
    {
        const bool branch_taken_0x253300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253300u;
        // 0x253304: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253300) {
            ctx->pc = 0x253334u;
            goto label_253334;
        }
    }
    ctx->pc = 0x253308u;
label_253308:
    // 0x253308: 0x5622000a  bnel        $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x253308u;
    {
        const bool branch_taken_0x253308 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x253308) {
            ctx->pc = 0x25330Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253308u;
            // 0x25330c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253334u;
            goto label_253334;
        }
    }
    ctx->pc = 0x253310u;
    // 0x253310: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253314: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x253314u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x253318: 0x24a53f9c  addiu       $a1, $a1, 0x3F9C
    ctx->pc = 0x253318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16284));
    // 0x25331c: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x25331Cu;
    SET_GPR_U32(ctx, 31, 0x253324u);
    ctx->pc = 0x253320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25331Cu;
    // 0x253320: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x25331Cu, 0x253324u)) {
        return;
    }
    ctx->pc = 0x253324u;
label_253324:
    // 0x253324: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x253324u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253328: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x253328u;
    {
        const bool branch_taken_0x253328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253328u;
        // 0x25332c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253328) {
            ctx->pc = 0x253334u;
            goto label_253334;
        }
    }
    ctx->pc = 0x253330u;
    // 0x253330: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x253330u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_253334:
    // 0x253334: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x253334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253338: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x253338u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25333c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25333cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253340: 0x3e00008  jr          $ra
    ctx->pc = 0x253340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253340u;
        // 0x253344: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253348u;
}
