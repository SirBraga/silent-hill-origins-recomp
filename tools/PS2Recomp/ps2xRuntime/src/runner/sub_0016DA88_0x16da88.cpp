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

// Function: sub_0016DA88
// Address: 0x16da88 - 0x16db28
void sub_0016DA88_0x16da88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016DA88_0x16da88");
#endif

    switch (ctx->pc) {
        case 0x16dad4u: goto label_16dad4;
        case 0x16dadcu: goto label_16dadc;
        case 0x16daf4u: goto label_16daf4;
        case 0x16db00u: goto label_16db00;
        case 0x16db0cu: goto label_16db0c;
        default: break;
    }

    ctx->pc = 0x16da88u;

    // 0x16da88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16da88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16da8c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x16da8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x16da90: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x16da90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x16da94: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x16da94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x16da98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16da98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16da9c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x16da9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x16daa0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16daa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16daa4: 0x24424d70  addiu       $v0, $v0, 0x4D70
    ctx->pc = 0x16daa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19824));
    // 0x16daa8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x16daa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x16daac: 0x24634d28  addiu       $v1, $v1, 0x4D28
    ctx->pc = 0x16daacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19752));
    // 0x16dab0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16dab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16dab4: 0x26110044  addiu       $s1, $s0, 0x44
    ctx->pc = 0x16dab4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x16dab8: 0x26120038  addiu       $s2, $s0, 0x38
    ctx->pc = 0x16dab8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x16dabc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x16dabcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dac0: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x16dac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x16dac4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16dac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dac8: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x16dac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x16dacc: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16DACCu;
    SET_GPR_U32(ctx, 31, 0x16DAD4u);
    ctx->pc = 0x16DAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DACCu;
    // 0x16dad0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16DACCu, 0x16DAD4u)) {
        return;
    }
    ctx->pc = 0x16DAD4u;
label_16dad4:
    // 0x16dad4: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x16DAD4u;
    SET_GPR_U32(ctx, 31, 0x16DADCu);
    ctx->pc = 0x16DAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DAD4u;
    // 0x16dad8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x16DAD4u, 0x16DADCu)) {
        return;
    }
    ctx->pc = 0x16DADCu;
label_16dadc:
    // 0x16dadc: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x16dadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x16dae0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16DAE0u;
    {
        const bool branch_taken_0x16dae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DAE0u;
        // 0x16dae4: 0x3c050070  lui         $a1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dae0) {
            ctx->pc = 0x16DAF4u;
            goto label_16daf4;
        }
    }
    ctx->pc = 0x16DAE8u;
    // 0x16dae8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16dae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16daec: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16DAECu;
    SET_GPR_U32(ctx, 31, 0x16DAF4u);
    ctx->pc = 0x16DAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DAECu;
    // 0x16daf0: 0x24a58880  addiu       $a1, $a1, -0x7780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16DAECu, 0x16DAF4u)) {
        return;
    }
    ctx->pc = 0x16DAF4u;
label_16daf4:
    // 0x16daf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16daf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16daf8: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x16DAF8u;
    SET_GPR_U32(ctx, 31, 0x16DB00u);
    ctx->pc = 0x16DAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DAF8u;
    // 0x16dafc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x16DAF8u, 0x16DB00u)) {
        return;
    }
    ctx->pc = 0x16DB00u;
label_16db00:
    // 0x16db00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16db00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16db04: 0xc04f084  jal         func_13C210
    ctx->pc = 0x16DB04u;
    SET_GPR_U32(ctx, 31, 0x16DB0Cu);
    ctx->pc = 0x16DB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DB04u;
    // 0x16db08: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x16DB04u, 0x16DB0Cu)) {
        return;
    }
    ctx->pc = 0x16DB0Cu;
label_16db0c:
    // 0x16db0c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x16db0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16db10: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x16db10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16db14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16db14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16db18: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x16db18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16db1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16db1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16db20: 0x3e00008  jr          $ra
    ctx->pc = 0x16DB20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB20u;
        // 0x16db24: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DB20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16DB28u;
}
