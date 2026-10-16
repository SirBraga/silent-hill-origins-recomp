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

// Function: sub_00108298
// Address: 0x108298 - 0x108328
void sub_00108298_0x108298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108298_0x108298");
#endif

    switch (ctx->pc) {
        case 0x1082c0u: goto label_1082c0;
        case 0x1082ecu: goto label_1082ec;
        case 0x108308u: goto label_108308;
        default: break;
    }

    ctx->pc = 0x108298u;

    // 0x108298: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x108298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10829c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10829cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1082a0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1082a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1082a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1082a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1082a8: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1082A8u;
    {
        const bool branch_taken_0x1082a8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1082ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1082A8u;
        // 0x1082ac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1082a8) {
            ctx->pc = 0x1082B8u;
            goto label_1082b8;
        }
    }
    ctx->pc = 0x1082B0u;
    // 0x1082b0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1082B0u;
    {
        const bool branch_taken_0x1082b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1082B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1082B0u;
        // 0x1082b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1082b0) {
            ctx->pc = 0x108310u;
            goto label_108310;
        }
    }
    ctx->pc = 0x1082B8u;
label_1082b8:
    // 0x1082b8: 0xc080858  jal         func_202160
    ctx->pc = 0x1082B8u;
    SET_GPR_U32(ctx, 31, 0x1082C0u);
    ctx->pc = 0x1082BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1082B8u;
    // 0x1082bc: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x1082B8u, 0x1082C0u)) {
        return;
    }
    ctx->pc = 0x1082C0u;
label_1082c0:
    // 0x1082c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1082c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1082c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1082c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1082c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1082c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1082cc: 0x3c050011  lui         $a1, 0x11
    ctx->pc = 0x1082ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17 << 16));
    // 0x1082d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1082d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1082d4: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1082d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1082d8: 0x24a58268  addiu       $a1, $a1, -0x7D98
    ctx->pc = 0x1082d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935144));
    // 0x1082dc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1082dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1082e0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1082e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1082e4: 0xc09545a  jal         func_255168
    ctx->pc = 0x1082E4u;
    SET_GPR_U32(ctx, 31, 0x1082ECu);
    ctx->pc = 0x1082E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1082E4u;
    // 0x1082e8: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255168u, 0x1082E4u, 0x1082ECu)) {
        return;
    }
    ctx->pc = 0x1082ECu;
label_1082ec:
    // 0x1082ec: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1082ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1082f0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1082F0u;
    {
        const bool branch_taken_0x1082f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1082F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1082F0u;
        // 0x1082f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1082f0) {
            ctx->pc = 0x108310u;
            goto label_108310;
        }
    }
    ctx->pc = 0x1082F8u;
    // 0x1082f8: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1082F8u;
    {
        const bool branch_taken_0x1082f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1082FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1082F8u;
        // 0x1082fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1082f8) {
            ctx->pc = 0x108310u;
            goto label_108310;
        }
    }
    ctx->pc = 0x108300u;
    // 0x108300: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x108300u;
    SET_GPR_U32(ctx, 31, 0x108308u);
    ctx->pc = 0x108304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108300u;
    // 0x108304: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x108300u, 0x108308u)) {
        return;
    }
    ctx->pc = 0x108308u;
label_108308:
    // 0x108308: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x108308u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10830c: 0x0  nop
    ctx->pc = 0x10830cu;
    // NOP
label_108310:
    // 0x108310: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x108310u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108314: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x108314u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108318: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x108318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10831c: 0x3e00008  jr          $ra
    ctx->pc = 0x10831Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10831Cu;
        // 0x108320: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10831Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108324u;
    // 0x108324: 0x0  nop
    ctx->pc = 0x108324u;
    // NOP
    ctx->pc = 0x108328u;
}
