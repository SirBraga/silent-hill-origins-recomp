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

// Function: sub_003082F0
// Address: 0x3082f0 - 0x308360
void sub_003082F0_0x3082f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003082F0_0x3082f0");
#endif

    switch (ctx->pc) {
        case 0x308304u: goto label_308304;
        default: break;
    }

    ctx->pc = 0x3082f0u;

    // 0x3082f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3082f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3082f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3082f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3082f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3082f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3082fc: 0xc0c1fa2  jal         func_307E88
    ctx->pc = 0x3082FCu;
    SET_GPR_U32(ctx, 31, 0x308304u);
    ctx->pc = 0x308300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3082FCu;
    // 0x308300: 0x8c900014  lw          $s0, 0x14($a0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307E88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x307E88u, 0x3082FCu, 0x308304u)) {
        return;
    }
    ctx->pc = 0x308304u;
label_308304:
    // 0x308304: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x308304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308308: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x308308u;
    {
        const bool branch_taken_0x308308 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x30830Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308308u;
        // 0x30830c: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308308) {
            ctx->pc = 0x30834Cu;
            goto label_30834c;
        }
    }
    ctx->pc = 0x308310u;
    // 0x308310: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x308310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x308314: 0x24420ec0  addiu       $v0, $v0, 0xEC0
    ctx->pc = 0x308314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3776));
    // 0x308318: 0x24040114  addiu       $a0, $zero, 0x114
    ctx->pc = 0x308318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
    // 0x30831c: 0x240334f9  addiu       $v1, $zero, 0x34F9
    ctx->pc = 0x30831cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13561));
    // 0x308320: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x308320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x308324: 0xae030328  sw          $v1, 0x328($s0)
    ctx->pc = 0x308324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 808), GPR_U32(ctx, 3));
    // 0x308328: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x308328u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30832c: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x30832cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
    // 0x308330: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x308330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
    // 0x308334: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x308334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x308338: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x308338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x30833c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x30833cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x308340: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x308340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x308344: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x308344u;
    {
        const bool branch_taken_0x308344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308344u;
        // 0x308348: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308344) {
            ctx->pc = 0x308350u;
            goto label_308350;
        }
    }
    ctx->pc = 0x30834Cu;
label_30834c:
    // 0x30834c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30834cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_308350:
    // 0x308350: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x308350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x308354: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x308354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308358: 0x3e00008  jr          $ra
    ctx->pc = 0x308358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30835Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308358u;
        // 0x30835c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308360u;
}
