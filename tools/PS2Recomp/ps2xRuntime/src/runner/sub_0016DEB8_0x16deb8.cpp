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

// Function: sub_0016DEB8
// Address: 0x16deb8 - 0x16df98
void sub_0016DEB8_0x16deb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016DEB8_0x16deb8");
#endif

    switch (ctx->pc) {
        case 0x16df04u: goto label_16df04;
        case 0x16df1cu: goto label_16df1c;
        case 0x16df30u: goto label_16df30;
        case 0x16df3cu: goto label_16df3c;
        case 0x16df44u: goto label_16df44;
        case 0x16df54u: goto label_16df54;
        case 0x16df60u: goto label_16df60;
        case 0x16df6cu: goto label_16df6c;
        case 0x16df78u: goto label_16df78;
        default: break;
    }

    ctx->pc = 0x16deb8u;

    // 0x16deb8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x16deb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x16debc: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x16debcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x16dec0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x16dec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x16dec4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x16dec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x16dec8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x16dec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x16decc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x16deccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ded0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x16ded0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x16ded4: 0x24424e08  addiu       $v0, $v0, 0x4E08
    ctx->pc = 0x16ded4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19976));
    // 0x16ded8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x16ded8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x16dedc: 0x24634dc0  addiu       $v1, $v1, 0x4DC0
    ctx->pc = 0x16dedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19904));
    // 0x16dee0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x16dee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x16dee4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x16dee4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dee8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16dee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16deec: 0xae62003c  sw          $v0, 0x3C($s3)
    ctx->pc = 0x16deecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
    // 0x16def0: 0x8e640054  lw          $a0, 0x54($s3)
    ctx->pc = 0x16def0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x16def4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16DEF4u;
    {
        const bool branch_taken_0x16def4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DEF4u;
        // 0x16def8: 0xae630034  sw          $v1, 0x34($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16def4) {
            ctx->pc = 0x16DF08u;
            goto label_16df08;
        }
    }
    ctx->pc = 0x16DEFCu;
    // 0x16defc: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x16DEFCu;
    SET_GPR_U32(ctx, 31, 0x16DF04u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x16DEFCu, 0x16DF04u)) {
        return;
    }
    ctx->pc = 0x16DF04u;
label_16df04:
    // 0x16df04: 0xae600054  sw          $zero, 0x54($s3)
    ctx->pc = 0x16df04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 0));
label_16df08:
    // 0x16df08: 0x8e640058  lw          $a0, 0x58($s3)
    ctx->pc = 0x16df08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x16df0c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16DF0Cu;
    {
        const bool branch_taken_0x16df0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DF0Cu;
        // 0x16df10: 0x26700044  addiu       $s0, $s3, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16df0c) {
            ctx->pc = 0x16DF20u;
            goto label_16df20;
        }
    }
    ctx->pc = 0x16DF14u;
    // 0x16df14: 0xc06b850  jal         func_1AE140
    ctx->pc = 0x16DF14u;
    SET_GPR_U32(ctx, 31, 0x16DF1Cu);
    ctx->pc = 0x16DF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DF14u;
    // 0x16df18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE140u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE140u, 0x16DF14u, 0x16DF1Cu)) {
        return;
    }
    ctx->pc = 0x16DF1Cu;
label_16df1c:
    // 0x16df1c: 0x26700044  addiu       $s0, $s3, 0x44
    ctx->pc = 0x16df1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 68));
label_16df20:
    // 0x16df20: 0x26720038  addiu       $s2, $s3, 0x38
    ctx->pc = 0x16df20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
    // 0x16df24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16df24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16df28: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16DF28u;
    SET_GPR_U32(ctx, 31, 0x16DF30u);
    ctx->pc = 0x16DF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DF28u;
    // 0x16df2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16DF28u, 0x16DF30u)) {
        return;
    }
    ctx->pc = 0x16DF30u;
label_16df30:
    // 0x16df30: 0x2671004c  addiu       $s1, $s3, 0x4C
    ctx->pc = 0x16df30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 76));
    // 0x16df34: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x16DF34u;
    SET_GPR_U32(ctx, 31, 0x16DF3Cu);
    ctx->pc = 0x16DF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DF34u;
    // 0x16df38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x16DF34u, 0x16DF3Cu)) {
        return;
    }
    ctx->pc = 0x16DF3Cu;
label_16df3c:
    // 0x16df3c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x16DF3Cu;
    SET_GPR_U32(ctx, 31, 0x16DF44u);
    ctx->pc = 0x16DF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DF3Cu;
    // 0x16df40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x16DF3Cu, 0x16DF44u)) {
        return;
    }
    ctx->pc = 0x16DF44u;
label_16df44:
    // 0x16df44: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x16df44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x16df48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16df48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16df4c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16DF4Cu;
    SET_GPR_U32(ctx, 31, 0x16DF54u);
    ctx->pc = 0x16DF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DF4Cu;
    // 0x16df50: 0x24a58898  addiu       $a1, $a1, -0x7768 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16DF4Cu, 0x16DF54u)) {
        return;
    }
    ctx->pc = 0x16DF54u;
label_16df54:
    // 0x16df54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16df54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16df58: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x16DF58u;
    SET_GPR_U32(ctx, 31, 0x16DF60u);
    ctx->pc = 0x16DF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DF58u;
    // 0x16df5c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x16DF58u, 0x16DF60u)) {
        return;
    }
    ctx->pc = 0x16DF60u;
label_16df60:
    // 0x16df60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16df60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16df64: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x16DF64u;
    SET_GPR_U32(ctx, 31, 0x16DF6Cu);
    ctx->pc = 0x16DF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DF64u;
    // 0x16df68: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x16DF64u, 0x16DF6Cu)) {
        return;
    }
    ctx->pc = 0x16DF6Cu;
label_16df6c:
    // 0x16df6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16df6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16df70: 0xc04f084  jal         func_13C210
    ctx->pc = 0x16DF70u;
    SET_GPR_U32(ctx, 31, 0x16DF78u);
    ctx->pc = 0x16DF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DF70u;
    // 0x16df74: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x16DF70u, 0x16DF78u)) {
        return;
    }
    ctx->pc = 0x16DF78u;
label_16df78:
    // 0x16df78: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x16df78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16df7c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x16df7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16df80: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x16df80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16df84: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x16df84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16df88: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x16df88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16df8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16df8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16df90: 0x3e00008  jr          $ra
    ctx->pc = 0x16DF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DF90u;
        // 0x16df94: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DF90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16DF98u;
}
