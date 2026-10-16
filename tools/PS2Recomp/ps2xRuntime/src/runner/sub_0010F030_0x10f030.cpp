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

// Function: sub_0010F030
// Address: 0x10f030 - 0x10f0b0
void sub_0010F030_0x10f030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F030_0x10f030");
#endif

    switch (ctx->pc) {
        case 0x10f07cu: goto label_10f07c;
        case 0x10f090u: goto label_10f090;
        case 0x10f09cu: goto label_10f09c;
        default: break;
    }

    ctx->pc = 0x10f030u;

    // 0x10f030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10f030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10f034: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x10f034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x10f038: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10f038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10f03c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x10f03cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x10f040: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x10f040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x10f044: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10f044u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f048: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x10f048u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x10f04c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10f04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10f050: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10f050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f054: 0x2463a228  addiu       $v1, $v1, -0x5DD8
    ctx->pc = 0x10f054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943272));
    // 0x10f058: 0x24c6a260  addiu       $a2, $a2, -0x5DA0
    ctx->pc = 0x10f058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943328));
    // 0x10f05c: 0x2442a240  addiu       $v0, $v0, -0x5DC0
    ctx->pc = 0x10f05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943296));
    // 0x10f060: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x10f060u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x10f064: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x10f064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x10f068: 0xae060034  sw          $a2, 0x34($s0)
    ctx->pc = 0x10f068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 6));
    // 0x10f06c: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x10f06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x10f070: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x10f070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x10f074: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x10F074u;
    SET_GPR_U32(ctx, 31, 0x10F07Cu);
    ctx->pc = 0x10F078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F074u;
    // 0x10f078: 0x24a5f880  addiu       $a1, $a1, -0x780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x10F074u, 0x10F07Cu)) {
        return;
    }
    ctx->pc = 0x10F07Cu;
label_10f07c:
    // 0x10f07c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x10f07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x10f080: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x10f080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x10f084: 0xac408300  sw          $zero, -0x7D00($v0)
    ctx->pc = 0x10f084u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x338300u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x338300u, _value); } while (0);
    // 0x10f088: 0xc043c56  jal         func_10F158
    ctx->pc = 0x10F088u;
    SET_GPR_U32(ctx, 31, 0x10F090u);
    ctx->pc = 0x10F08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F088u;
    // 0x10f08c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F158u, 0x10F088u, 0x10F090u)) {
        return;
    }
    ctx->pc = 0x10F090u;
label_10f090:
    // 0x10f090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f094: 0xc04f084  jal         func_13C210
    ctx->pc = 0x10F094u;
    SET_GPR_U32(ctx, 31, 0x10F09Cu);
    ctx->pc = 0x10F098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F094u;
    // 0x10f098: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x10F094u, 0x10F09Cu)) {
        return;
    }
    ctx->pc = 0x10F09Cu;
label_10f09c:
    // 0x10f09c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x10f09cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10f0a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10f0a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f0a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10f0a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f0a8: 0x3e00008  jr          $ra
    ctx->pc = 0x10F0A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F0A8u;
        // 0x10f0ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F0A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F0B0u;
}
