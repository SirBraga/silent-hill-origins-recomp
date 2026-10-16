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

// Function: sub_0019E500
// Address: 0x19e500 - 0x19e580
void sub_0019E500_0x19e500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E500_0x19e500");
#endif

    switch (ctx->pc) {
        case 0x19e560u: goto label_19e560;
        case 0x19e56cu: goto label_19e56c;
        default: break;
    }

    ctx->pc = 0x19e500u;

    // 0x19e500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19e500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19e504: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x19e504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x19e508: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19e508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19e50c: 0x2442a928  addiu       $v0, $v0, -0x56D8
    ctx->pc = 0x19e50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945064));
    // 0x19e510: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19e510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19e514: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19e514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e518: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19e518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19e51c: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x19e51cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x19e520: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x19e520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x19e524: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x19E524u;
    {
        const bool branch_taken_0x19e524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E524u;
        // 0x19e528: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e524) {
            ctx->pc = 0x19E54Cu;
            goto label_19e54c;
        }
    }
    ctx->pc = 0x19E52Cu;
    // 0x19e52c: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x19e52cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x19e530: 0x3c05005c  lui         $a1, 0x5C
    ctx->pc = 0x19e530u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)92 << 16));
    // 0x19e534: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x19e534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x19e538: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x19e538u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19e53c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x19e53cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x19e540: 0x8ca30160  lw          $v1, 0x160($a1)
    ctx->pc = 0x19e540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 352)));
    // 0x19e544: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x19e544u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19e548: 0xaca30160  sw          $v1, 0x160($a1)
    ctx->pc = 0x19e548u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 352), GPR_U32(ctx, 3));
label_19e54c:
    // 0x19e54c: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x19e54cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x19e550: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x19E550u;
    {
        const bool branch_taken_0x19e550 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e550) {
            ctx->pc = 0x19E554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E550u;
            // 0x19e554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E564u;
            goto label_19e564;
        }
    }
    ctx->pc = 0x19E558u;
    // 0x19e558: 0xc0861e0  jal         func_218780
    ctx->pc = 0x19E558u;
    SET_GPR_U32(ctx, 31, 0x19E560u);
    ctx->pc = 0x19E55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E558u;
    // 0x19e55c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218780u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x218780u, 0x19E558u, 0x19E560u)) {
        return;
    }
    ctx->pc = 0x19E560u;
label_19e560:
    // 0x19e560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19e564:
    // 0x19e564: 0xc080596  jal         func_201658
    ctx->pc = 0x19E564u;
    SET_GPR_U32(ctx, 31, 0x19E56Cu);
    ctx->pc = 0x19E568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E564u;
    // 0x19e568: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201658u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x201658u, 0x19E564u, 0x19E56Cu)) {
        return;
    }
    ctx->pc = 0x19E56Cu;
label_19e56c:
    // 0x19e56c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19e56cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e570: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19e570u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e574: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e578: 0x3e00008  jr          $ra
    ctx->pc = 0x19E578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E578u;
        // 0x19e57c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E580u;
}
