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

// Function: sub_0019DEB0
// Address: 0x19deb0 - 0x19df38
void sub_0019DEB0_0x19deb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019DEB0_0x19deb0");
#endif

    switch (ctx->pc) {
        case 0x19df08u: goto label_19df08;
        case 0x19df10u: goto label_19df10;
        case 0x19df1cu: goto label_19df1c;
        default: break;
    }

    ctx->pc = 0x19deb0u;

    // 0x19deb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19deb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19deb4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x19deb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x19deb8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x19deb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x19debc: 0x2442ab58  addiu       $v0, $v0, -0x54A8
    ctx->pc = 0x19debcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945624));
    // 0x19dec0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x19dec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x19dec4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19dec4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dec8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19dec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19decc: 0x3c07005c  lui         $a3, 0x5C
    ctx->pc = 0x19deccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)92 << 16));
    // 0x19ded0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x19ded0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x19ded4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x19ded4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ded8: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x19ded8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x19dedc: 0x8e260038  lw          $a2, 0x38($s1)
    ctx->pc = 0x19dedcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x19dee0: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x19dee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x19dee4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x19dee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x19dee8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x19dee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19deec: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x19deecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x19def0: 0x8ce30160  lw          $v1, 0x160($a3)
    ctx->pc = 0x19def0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 352)));
    // 0x19def4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x19def4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19def8: 0xace30160  sw          $v1, 0x160($a3)
    ctx->pc = 0x19def8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 352), GPR_U32(ctx, 3));
    // 0x19defc: 0x8e300018  lw          $s0, 0x18($s1)
    ctx->pc = 0x19defcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x19df00: 0xc078902  jal         func_1E2408
    ctx->pc = 0x19DF00u;
    SET_GPR_U32(ctx, 31, 0x19DF08u);
    ctx->pc = 0x19DF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DF00u;
    // 0x19df04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2408u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E2408u, 0x19DF00u, 0x19DF08u)) {
        return;
    }
    ctx->pc = 0x19DF08u;
label_19df08:
    // 0x19df08: 0xc09d880  jal         func_276200
    ctx->pc = 0x19DF08u;
    SET_GPR_U32(ctx, 31, 0x19DF10u);
    ctx->pc = 0x19DF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DF08u;
    // 0x19df0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276200u, 0x19DF08u, 0x19DF10u)) {
        return;
    }
    ctx->pc = 0x19DF10u;
label_19df10:
    // 0x19df10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19df10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19df14: 0xc080596  jal         func_201658
    ctx->pc = 0x19DF14u;
    SET_GPR_U32(ctx, 31, 0x19DF1Cu);
    ctx->pc = 0x19DF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DF14u;
    // 0x19df18: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201658u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x201658u, 0x19DF14u, 0x19DF1Cu)) {
        return;
    }
    ctx->pc = 0x19DF1Cu;
label_19df1c:
    // 0x19df1c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x19df1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19df20: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x19df20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19df24: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x19df24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19df28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19df28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19df2c: 0x3e00008  jr          $ra
    ctx->pc = 0x19DF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DF2Cu;
        // 0x19df30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DF2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DF34u;
    // 0x19df34: 0x0  nop
    ctx->pc = 0x19df34u;
    // NOP
    ctx->pc = 0x19df38u;
}
