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

// Function: sub_001DD708
// Address: 0x1dd708 - 0x1dd788
void sub_001DD708_0x1dd708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD708_0x1dd708");
#endif

    switch (ctx->pc) {
        case 0x1dd72cu: goto label_1dd72c;
        case 0x1dd748u: goto label_1dd748;
        case 0x1dd764u: goto label_1dd764;
        default: break;
    }

    ctx->pc = 0x1dd708u;

    // 0x1dd708: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1dd708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1dd70c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1dd70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1dd710: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1dd710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1dd714: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1dd714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd718: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dd718u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd71c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1dd71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1dd720: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd724: 0xc07700a  jal         func_1DC028
    ctx->pc = 0x1DD724u;
    SET_GPR_U32(ctx, 31, 0x1DD72Cu);
    ctx->pc = 0x1DD728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD724u;
    // 0x1dd728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC028u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DC028u, 0x1DD724u, 0x1DD72Cu)) {
        return;
    }
    ctx->pc = 0x1DD72Cu;
label_1dd72c:
    // 0x1dd72c: 0x3c120034  lui         $s2, 0x34
    ctx->pc = 0x1dd72cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)52 << 16));
    // 0x1dd730: 0x8e45e664  lw          $a1, -0x199C($s2)
    ctx->pc = 0x1dd730u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x33E664u));
    // 0x1dd734: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dd734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd738: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1dd738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1dd73c: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x1dd73cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1dd740: 0xc092782  jal         func_249E08
    ctx->pc = 0x1DD740u;
    SET_GPR_U32(ctx, 31, 0x1DD748u);
    ctx->pc = 0x1DD744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD740u;
    // 0x1dd744: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x1DD740u, 0x1DD748u)) {
        return;
    }
    ctx->pc = 0x1DD748u;
label_1dd748:
    // 0x1dd748: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DD748u;
    {
        const bool branch_taken_0x1dd748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD748u;
        // 0x1dd74c: 0x8e45e664  lw          $a1, -0x199C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960740)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd748) {
            ctx->pc = 0x1DD76Cu;
            goto label_1dd76c;
        }
    }
    ctx->pc = 0x1DD750u;
    // 0x1dd750: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dd750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd754: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1dd754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1dd758: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x1dd758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1dd75c: 0xc092782  jal         func_249E08
    ctx->pc = 0x1DD75Cu;
    SET_GPR_U32(ctx, 31, 0x1DD764u);
    ctx->pc = 0x1DD760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD75Cu;
    // 0x1dd760: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x1DD75Cu, 0x1DD764u)) {
        return;
    }
    ctx->pc = 0x1DD764u;
label_1dd764:
    // 0x1dd764: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DD764u;
    {
        const bool branch_taken_0x1dd764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD764u;
        // 0x1dd768: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd764) {
            ctx->pc = 0x1DD770u;
            goto label_1dd770;
        }
    }
    ctx->pc = 0x1DD76Cu;
label_1dd76c:
    // 0x1dd76c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dd76cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd770:
    // 0x1dd770: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1dd770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dd774: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1dd774u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dd778: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1dd778u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd77c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd77cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd780: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD780u;
        // 0x1dd784: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD788u;
}
