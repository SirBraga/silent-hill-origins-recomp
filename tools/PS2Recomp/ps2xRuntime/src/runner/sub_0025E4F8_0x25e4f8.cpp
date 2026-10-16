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

// Function: sub_0025E4F8
// Address: 0x25e4f8 - 0x25e558
void sub_0025E4F8_0x25e4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E4F8_0x25e4f8");
#endif

    switch (ctx->pc) {
        case 0x25e52cu: goto label_25e52c;
        case 0x25e534u: goto label_25e534;
        default: break;
    }

    ctx->pc = 0x25e4f8u;

    // 0x25e4f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25e4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25e4fc: 0x8f8285fc  lw          $v0, -0x7A04($gp)
    ctx->pc = 0x25e4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936060)));
    // 0x25e500: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x25e500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x25e504: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x25e504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x25e508: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x25e508u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e50c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x25e50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x25e510: 0x2028821  addu        $s1, $s0, $v0
    ctx->pc = 0x25e510u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25e514: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25e514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25e518: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x25e518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x25e51c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25E51Cu;
    {
        const bool branch_taken_0x25e51c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E51Cu;
        // 0x25e520: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e51c) {
            ctx->pc = 0x25E52Cu;
            goto label_25e52c;
        }
    }
    ctx->pc = 0x25E524u;
    // 0x25e524: 0xc093356  jal         func_24CD58
    ctx->pc = 0x25E524u;
    SET_GPR_U32(ctx, 31, 0x25E52Cu);
    ctx->pc = 0x25E528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E524u;
    // 0x25e528: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CD58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CD58u, 0x25E524u, 0x25E52Cu)) {
        return;
    }
    ctx->pc = 0x25E52Cu;
label_25e52c:
    // 0x25e52c: 0xc097500  jal         func_25D400
    ctx->pc = 0x25E52Cu;
    SET_GPR_U32(ctx, 31, 0x25E534u);
    ctx->pc = 0x25E530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E52Cu;
    // 0x25e530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D400u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25D400u, 0x25E52Cu, 0x25E534u)) {
        return;
    }
    ctx->pc = 0x25E534u;
label_25e534:
    // 0x25e534: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x25e534u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x25e538: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x25e538u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e53c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x25e53cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25e540: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x25e540u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25e544: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x25e544u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e548: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25e548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e54c: 0x3e00008  jr          $ra
    ctx->pc = 0x25E54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E54Cu;
        // 0x25e550: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E54Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E554u;
    // 0x25e554: 0x0  nop
    ctx->pc = 0x25e554u;
    // NOP
    ctx->pc = 0x25e558u;
}
