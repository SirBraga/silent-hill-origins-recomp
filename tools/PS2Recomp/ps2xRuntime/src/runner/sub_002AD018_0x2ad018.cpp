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

// Function: sub_002AD018
// Address: 0x2ad018 - 0x2ad098
void sub_002AD018_0x2ad018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD018_0x2ad018");
#endif

    switch (ctx->pc) {
        case 0x2ad044u: goto label_2ad044;
        case 0x2ad05cu: goto label_2ad05c;
        case 0x2ad07cu: goto label_2ad07c;
        default: break;
    }

    ctx->pc = 0x2ad018u;

    // 0x2ad018: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ad018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2ad01c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2ad01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2ad020: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2ad020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2ad024: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ad024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad028: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ad028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ad02c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ad02cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad030: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2ad030u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2ad034: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2ad034u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad038: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ad038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ad03c: 0xc0aaf7c  jal         func_2ABDF0
    ctx->pc = 0x2AD03Cu;
    SET_GPR_U32(ctx, 31, 0x2AD044u);
    ctx->pc = 0x2AD040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD03Cu;
    // 0x2ad040: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABDF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ABDF0u, 0x2AD03Cu, 0x2AD044u)) {
        return;
    }
    ctx->pc = 0x2AD044u;
label_2ad044:
    // 0x2ad044: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x2ad044u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x2ad048: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2ad048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2ad04c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ad04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad050: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2ad050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ad054: 0xc0ad2b4  jal         func_2B4AD0
    ctx->pc = 0x2AD054u;
    SET_GPR_U32(ctx, 31, 0x2AD05Cu);
    ctx->pc = 0x2AD058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD054u;
    // 0x2ad058: 0x34c60900  ori         $a2, $a2, 0x900 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2304);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4AD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4AD0u, 0x2AD054u, 0x2AD05Cu)) {
        return;
    }
    ctx->pc = 0x2AD05Cu;
label_2ad05c:
    // 0x2ad05c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ad05cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad060: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2ad060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad064: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2ad064u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2ad068: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2ad068u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad06c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2ad06cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2ad070: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ad070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad074: 0xc0aafc0  jal         func_2ABF00
    ctx->pc = 0x2AD074u;
    SET_GPR_U32(ctx, 31, 0x2AD07Cu);
    ctx->pc = 0x2AD078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD074u;
    // 0x2ad078: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ABF00u, 0x2AD074u, 0x2AD07Cu)) {
        return;
    }
    ctx->pc = 0x2AD07Cu;
label_2ad07c:
    // 0x2ad07c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2ad07cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ad080: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2ad080u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ad084: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ad084u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ad088: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ad088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ad08c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2ad08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ad090: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD090u;
        // 0x2ad094: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD098u;
}
